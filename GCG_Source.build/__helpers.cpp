// This file contains helper functions that are automatically created from
// templates.

#include "nuitka/prelude.h"

extern PyObject *callPythonFunction( PyObject *func, PyObject **args, int count );


PyObject *CALL_FUNCTION_WITH_ARGS1( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 1; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 1 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 1; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 1 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 1 * sizeof(PyObject *) );
            memcpy( python_pars + 1, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 1 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 1 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 1; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 1 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 1 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 1, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 1 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 1 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (1 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 1 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (1 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 1 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 1, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            1
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 1 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS2( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 2; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 2 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 2; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 2 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 2 * sizeof(PyObject *) );
            memcpy( python_pars + 2, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 2 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 2 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 2; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 2 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 2 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 2, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 2 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 2 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (2 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 2 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (2 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 2 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 2, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            2
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 2 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS3( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 3; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 3 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 3; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 3 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 3 * sizeof(PyObject *) );
            memcpy( python_pars + 3, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 3 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 3 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 3; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 3 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 3 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 3, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 3 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 3 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (3 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 3 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (3 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 3 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 3, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            3
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 3 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS4( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 4; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 4 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 4; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 4 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 4 * sizeof(PyObject *) );
            memcpy( python_pars + 4, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 4 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 4 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 4; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 4 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 4 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 4, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 4 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 4 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (4 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 4 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (4 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 4 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 4, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            4
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 4 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS5( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 5; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 5 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 5; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 5 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 5 * sizeof(PyObject *) );
            memcpy( python_pars + 5, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 5 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 5 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 5; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 5 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 5 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 5, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 5 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 5 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (5 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 5 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (5 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 5 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 5, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            5
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 5 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS6( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 6; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 6 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 6; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 6 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 6 * sizeof(PyObject *) );
            memcpy( python_pars + 6, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 6 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 6 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 6; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 6 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 6 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 6, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 6 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 6 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (6 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 6 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (6 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 6 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 6, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            6
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 6 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS7( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 7; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 7 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 7; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 7 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 7 * sizeof(PyObject *) );
            memcpy( python_pars + 7, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 7 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 7 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 7; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 7 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 7 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 7, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 7 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 7 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (7 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 7 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (7 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 7 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 7, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            7
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 7 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS8( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 8; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 8 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 8; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 8 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 8 * sizeof(PyObject *) );
            memcpy( python_pars + 8, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 8 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 8 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 8; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 8 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 8 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 8, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 8 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 8 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (8 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 8 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (8 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 8 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 8, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            8
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 8 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS9( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 9; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 9 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 9; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 9 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 9 * sizeof(PyObject *) );
            memcpy( python_pars + 9, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 9 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 9 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 9; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 9 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 9 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 9, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 9 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 9 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (9 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 9 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (9 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 9 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 9, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            9
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 9 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS10( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 10; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 10 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 10; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 10 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 10 * sizeof(PyObject *) );
            memcpy( python_pars + 10, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 10 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 10 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 10; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 10 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 10 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 10, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 10 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 10 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (10 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 10 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (10 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 10 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 10, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            10
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 10 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS12( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 12; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 12 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 12; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 12 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 12 * sizeof(PyObject *) );
            memcpy( python_pars + 12, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 12 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 12 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 12; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 12 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 12 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 12, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 12 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 12 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (12 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 12 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (12 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 12 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 12, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            12
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 12 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS14( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 14; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 14 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 14; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 14 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 14 * sizeof(PyObject *) );
            memcpy( python_pars + 14, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 14 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 14 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 14; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 14 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 14 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 14, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 14 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 14 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (14 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 14 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (14 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 14 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 14, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            14
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 14 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS15( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 15; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 15 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 15; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 15 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 15 * sizeof(PyObject *) );
            memcpy( python_pars + 15, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 15 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 15 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 15; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 15 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 15 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 15, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 15 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 15 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (15 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 15 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (15 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 15 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 15, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            15
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 15 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS22( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 22; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 22 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 22; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 22 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 22 * sizeof(PyObject *) );
            memcpy( python_pars + 22, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 22 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 22 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 22; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 22 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 22 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 22, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 22 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 22 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (22 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 22 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (22 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 22 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 22, NULL );;
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            22
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 22 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_METHOD_WITH_ARGS1( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 1; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    1
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );
            return CALL_FUNCTION_WITH_ARGS1(
                descr,
                args
            );
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS1( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    1
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS1( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS1( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS2( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 2; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    2
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );
            return CALL_FUNCTION_WITH_ARGS2(
                descr,
                args
            );
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS2( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    2
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS2( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS2( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS3( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 3; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    3
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );
            return CALL_FUNCTION_WITH_ARGS3(
                descr,
                args
            );
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS3( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    3
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS3( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS3( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS3(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS3(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS4( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 4; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    4
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );
            return CALL_FUNCTION_WITH_ARGS4(
                descr,
                args
            );
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS4( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    4
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS4( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS4( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS4(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS4(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}
/* Code to register embedded modules for meta path based loading if any. */

#include "nuitka/unfreezing.h"

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
MOD_INIT_DECL( GlyphGrabber );
MOD_INIT_DECL( PIL );
MOD_INIT_DECL( PIL$BmpImagePlugin );
MOD_INIT_DECL( PIL$GifImagePlugin );
MOD_INIT_DECL( PIL$GimpGradientFile );
MOD_INIT_DECL( PIL$GimpPaletteFile );
MOD_INIT_DECL( PIL$Image );
MOD_INIT_DECL( PIL$ImageChops );
MOD_INIT_DECL( PIL$ImageColor );
MOD_INIT_DECL( PIL$ImageFile );
MOD_INIT_DECL( PIL$ImageFilter );
MOD_INIT_DECL( PIL$ImageMode );
MOD_INIT_DECL( PIL$ImagePalette );
MOD_INIT_DECL( PIL$ImageQt );
MOD_INIT_DECL( PIL$ImageSequence );
MOD_INIT_DECL( PIL$ImageShow );
MOD_INIT_DECL( PIL$JpegImagePlugin );
MOD_INIT_DECL( PIL$JpegPresets );
MOD_INIT_DECL( PIL$MpoImagePlugin );
MOD_INIT_DECL( PIL$PaletteFile );
MOD_INIT_DECL( PIL$PngImagePlugin );
MOD_INIT_DECL( PIL$PpmImagePlugin );
MOD_INIT_DECL( PIL$PyAccess );
MOD_INIT_DECL( PIL$TiffImagePlugin );
MOD_INIT_DECL( PIL$TiffTags );
MOD_INIT_DECL( PIL$_binary );
MOD_INIT_DECL( PIL$_util );
MOD_INIT_DECL( PIL$version );
MOD_INIT_DECL( PyQt5 );
MOD_INIT_DECL( PyQt5$QtCore$$45$postLoad );
MOD_INIT_DECL( __main__ );
MOD_INIT_DECL( appdirs );
MOD_INIT_DECL( bson );
MOD_INIT_DECL( bson$codec );
MOD_INIT_DECL( bson$network );
MOD_INIT_DECL( bson$objectid );
MOD_INIT_DECL( bson$py3compat );
MOD_INIT_DECL( bson$tz_util );
MOD_INIT_DECL( certifi );
MOD_INIT_DECL( certifi$core );
MOD_INIT_DECL( chardet );
MOD_INIT_DECL( chardet$big5freq );
MOD_INIT_DECL( chardet$big5prober );
MOD_INIT_DECL( chardet$chardistribution );
MOD_INIT_DECL( chardet$charsetgroupprober );
MOD_INIT_DECL( chardet$charsetprober );
MOD_INIT_DECL( chardet$codingstatemachine );
MOD_INIT_DECL( chardet$compat );
MOD_INIT_DECL( chardet$cp949prober );
MOD_INIT_DECL( chardet$enums );
MOD_INIT_DECL( chardet$escprober );
MOD_INIT_DECL( chardet$escsm );
MOD_INIT_DECL( chardet$eucjpprober );
MOD_INIT_DECL( chardet$euckrfreq );
MOD_INIT_DECL( chardet$euckrprober );
MOD_INIT_DECL( chardet$euctwfreq );
MOD_INIT_DECL( chardet$euctwprober );
MOD_INIT_DECL( chardet$gb2312freq );
MOD_INIT_DECL( chardet$gb2312prober );
MOD_INIT_DECL( chardet$hebrewprober );
MOD_INIT_DECL( chardet$jisfreq );
MOD_INIT_DECL( chardet$jpcntx );
MOD_INIT_DECL( chardet$langbulgarianmodel );
MOD_INIT_DECL( chardet$langcyrillicmodel );
MOD_INIT_DECL( chardet$langgreekmodel );
MOD_INIT_DECL( chardet$langhebrewmodel );
MOD_INIT_DECL( chardet$langthaimodel );
MOD_INIT_DECL( chardet$langturkishmodel );
MOD_INIT_DECL( chardet$latin1prober );
MOD_INIT_DECL( chardet$mbcharsetprober );
MOD_INIT_DECL( chardet$mbcsgroupprober );
MOD_INIT_DECL( chardet$mbcssm );
MOD_INIT_DECL( chardet$sbcharsetprober );
MOD_INIT_DECL( chardet$sbcsgroupprober );
MOD_INIT_DECL( chardet$sjisprober );
MOD_INIT_DECL( chardet$universaldetector );
MOD_INIT_DECL( chardet$utf8prober );
MOD_INIT_DECL( chardet$version );
MOD_INIT_DECL( com );
MOD_INIT_DECL( com$gen_py );
MOD_INIT_DECL( confirm );
MOD_INIT_DECL( cryptography );
MOD_INIT_DECL( design );
MOD_INIT_DECL( dialog );
MOD_INIT_DECL( django );
MOD_INIT_DECL( django$apps );
MOD_INIT_DECL( django$apps$config );
MOD_INIT_DECL( django$apps$registry );
MOD_INIT_DECL( django$conf );
MOD_INIT_DECL( django$conf$global_settings );
MOD_INIT_DECL( django$conf$locale );
MOD_INIT_DECL( django$conf$urls );
MOD_INIT_DECL( django$contrib );
MOD_INIT_DECL( django$contrib$staticfiles );
MOD_INIT_DECL( django$contrib$staticfiles$storage );
MOD_INIT_DECL( django$contrib$staticfiles$utils );
MOD_INIT_DECL( django$core );
MOD_INIT_DECL( django$core$cache );
MOD_INIT_DECL( django$core$cache$backends );
MOD_INIT_DECL( django$core$cache$backends$base );
MOD_INIT_DECL( django$core$checks );
MOD_INIT_DECL( django$core$checks$caches );
MOD_INIT_DECL( django$core$checks$compatibility );
MOD_INIT_DECL( django$core$checks$compatibility$django_1_10 );
MOD_INIT_DECL( django$core$checks$compatibility$django_1_8_0 );
MOD_INIT_DECL( django$core$checks$database );
MOD_INIT_DECL( django$core$checks$messages );
MOD_INIT_DECL( django$core$checks$model_checks );
MOD_INIT_DECL( django$core$checks$registry );
MOD_INIT_DECL( django$core$checks$security );
MOD_INIT_DECL( django$core$checks$security$base );
MOD_INIT_DECL( django$core$checks$security$csrf );
MOD_INIT_DECL( django$core$checks$security$sessions );
MOD_INIT_DECL( django$core$checks$templates );
MOD_INIT_DECL( django$core$checks$urls );
MOD_INIT_DECL( django$core$checks$utils );
MOD_INIT_DECL( django$core$exceptions );
MOD_INIT_DECL( django$core$files );
MOD_INIT_DECL( django$core$files$base );
MOD_INIT_DECL( django$core$files$images );
MOD_INIT_DECL( django$core$files$locks );
MOD_INIT_DECL( django$core$files$move );
MOD_INIT_DECL( django$core$files$storage );
MOD_INIT_DECL( django$core$files$temp );
MOD_INIT_DECL( django$core$files$uploadedfile );
MOD_INIT_DECL( django$core$files$uploadhandler );
MOD_INIT_DECL( django$core$files$utils );
MOD_INIT_DECL( django$core$mail );
MOD_INIT_DECL( django$core$mail$message );
MOD_INIT_DECL( django$core$mail$utils );
MOD_INIT_DECL( django$core$management );
MOD_INIT_DECL( django$core$management$base );
MOD_INIT_DECL( django$core$management$color );
MOD_INIT_DECL( django$core$paginator );
MOD_INIT_DECL( django$core$serializers );
MOD_INIT_DECL( django$core$serializers$base );
MOD_INIT_DECL( django$core$serializers$json );
MOD_INIT_DECL( django$core$serializers$python );
MOD_INIT_DECL( django$core$signals );
MOD_INIT_DECL( django$core$signing );
MOD_INIT_DECL( django$core$validators );
MOD_INIT_DECL( django$db );
MOD_INIT_DECL( django$db$backends );
MOD_INIT_DECL( django$db$backends$oracle );
MOD_INIT_DECL( django$db$backends$oracle$functions );
MOD_INIT_DECL( django$db$backends$utils );
MOD_INIT_DECL( django$db$migrations );
MOD_INIT_DECL( django$db$migrations$exceptions );
MOD_INIT_DECL( django$db$migrations$executor );
MOD_INIT_DECL( django$db$migrations$graph );
MOD_INIT_DECL( django$db$migrations$loader );
MOD_INIT_DECL( django$db$migrations$migration );
MOD_INIT_DECL( django$db$migrations$operations );
MOD_INIT_DECL( django$db$migrations$operations$base );
MOD_INIT_DECL( django$db$migrations$operations$fields );
MOD_INIT_DECL( django$db$migrations$operations$models );
MOD_INIT_DECL( django$db$migrations$operations$special );
MOD_INIT_DECL( django$db$migrations$recorder );
MOD_INIT_DECL( django$db$migrations$serializer );
MOD_INIT_DECL( django$db$migrations$state );
MOD_INIT_DECL( django$db$migrations$utils );
MOD_INIT_DECL( django$db$migrations$writer );
MOD_INIT_DECL( django$db$models );
MOD_INIT_DECL( django$db$models$aggregates );
MOD_INIT_DECL( django$db$models$base );
MOD_INIT_DECL( django$db$models$constants );
MOD_INIT_DECL( django$db$models$deletion );
MOD_INIT_DECL( django$db$models$expressions );
MOD_INIT_DECL( django$db$models$fields );
MOD_INIT_DECL( django$db$models$fields$files );
MOD_INIT_DECL( django$db$models$fields$proxy );
MOD_INIT_DECL( django$db$models$fields$related );
MOD_INIT_DECL( django$db$models$fields$related_descriptors );
MOD_INIT_DECL( django$db$models$fields$related_lookups );
MOD_INIT_DECL( django$db$models$fields$reverse_related );
MOD_INIT_DECL( django$db$models$functions );
MOD_INIT_DECL( django$db$models$functions$base );
MOD_INIT_DECL( django$db$models$functions$datetime );
MOD_INIT_DECL( django$db$models$indexes );
MOD_INIT_DECL( django$db$models$lookups );
MOD_INIT_DECL( django$db$models$manager );
MOD_INIT_DECL( django$db$models$options );
MOD_INIT_DECL( django$db$models$query );
MOD_INIT_DECL( django$db$models$query_utils );
MOD_INIT_DECL( django$db$models$signals );
MOD_INIT_DECL( django$db$models$sql );
MOD_INIT_DECL( django$db$models$sql$constants );
MOD_INIT_DECL( django$db$models$sql$datastructures );
MOD_INIT_DECL( django$db$models$sql$query );
MOD_INIT_DECL( django$db$models$sql$subqueries );
MOD_INIT_DECL( django$db$models$sql$where );
MOD_INIT_DECL( django$db$models$utils );
MOD_INIT_DECL( django$db$transaction );
MOD_INIT_DECL( django$db$utils );
MOD_INIT_DECL( django$dispatch );
MOD_INIT_DECL( django$dispatch$dispatcher );
MOD_INIT_DECL( django$dispatch$weakref_backports );
MOD_INIT_DECL( django$forms );
MOD_INIT_DECL( django$forms$boundfield );
MOD_INIT_DECL( django$forms$fields );
MOD_INIT_DECL( django$forms$forms );
MOD_INIT_DECL( django$forms$formsets );
MOD_INIT_DECL( django$forms$models );
MOD_INIT_DECL( django$forms$renderers );
MOD_INIT_DECL( django$forms$utils );
MOD_INIT_DECL( django$forms$widgets );
MOD_INIT_DECL( django$http );
MOD_INIT_DECL( django$http$cookie );
MOD_INIT_DECL( django$http$multipartparser );
MOD_INIT_DECL( django$http$request );
MOD_INIT_DECL( django$http$response );
MOD_INIT_DECL( django$middleware );
MOD_INIT_DECL( django$middleware$csrf );
MOD_INIT_DECL( django$template );
MOD_INIT_DECL( django$template$backends );
MOD_INIT_DECL( django$template$backends$base );
MOD_INIT_DECL( django$template$backends$django );
MOD_INIT_DECL( django$template$backends$jinja2 );
MOD_INIT_DECL( django$template$backends$utils );
MOD_INIT_DECL( django$template$base );
MOD_INIT_DECL( django$template$context );
MOD_INIT_DECL( django$template$defaultfilters );
MOD_INIT_DECL( django$template$engine );
MOD_INIT_DECL( django$template$exceptions );
MOD_INIT_DECL( django$template$library );
MOD_INIT_DECL( django$template$loader );
MOD_INIT_DECL( django$template$response );
MOD_INIT_DECL( django$template$utils );
MOD_INIT_DECL( django$templatetags );
MOD_INIT_DECL( django$templatetags$static );
MOD_INIT_DECL( django$urls );
MOD_INIT_DECL( django$urls$base );
MOD_INIT_DECL( django$urls$exceptions );
MOD_INIT_DECL( django$urls$resolvers );
MOD_INIT_DECL( django$urls$utils );
MOD_INIT_DECL( django$utils );
MOD_INIT_DECL( django$utils$_os );
MOD_INIT_DECL( django$utils$autoreload );
MOD_INIT_DECL( django$utils$baseconv );
MOD_INIT_DECL( django$utils$cache );
MOD_INIT_DECL( django$utils$crypto );
MOD_INIT_DECL( django$utils$datastructures );
MOD_INIT_DECL( django$utils$dateformat );
MOD_INIT_DECL( django$utils$dateparse );
MOD_INIT_DECL( django$utils$dates );
MOD_INIT_DECL( django$utils$datetime_safe );
MOD_INIT_DECL( django$utils$deconstruct );
MOD_INIT_DECL( django$utils$decorators );
MOD_INIT_DECL( django$utils$deprecation );
MOD_INIT_DECL( django$utils$duration );
MOD_INIT_DECL( django$utils$encoding );
MOD_INIT_DECL( django$utils$formats );
MOD_INIT_DECL( django$utils$functional );
MOD_INIT_DECL( django$utils$html );
MOD_INIT_DECL( django$utils$html_parser );
MOD_INIT_DECL( django$utils$http );
MOD_INIT_DECL( django$utils$inspect );
MOD_INIT_DECL( django$utils$ipv6 );
MOD_INIT_DECL( django$utils$itercompat );
MOD_INIT_DECL( django$utils$log );
MOD_INIT_DECL( django$utils$lru_cache );
MOD_INIT_DECL( django$utils$module_loading );
MOD_INIT_DECL( django$utils$numberformat );
MOD_INIT_DECL( django$utils$regex_helper );
MOD_INIT_DECL( django$utils$safestring );
MOD_INIT_DECL( django$utils$six );
MOD_INIT_DECL( django$utils$termcolors );
MOD_INIT_DECL( django$utils$text );
MOD_INIT_DECL( django$utils$timesince );
MOD_INIT_DECL( django$utils$timezone );
MOD_INIT_DECL( django$utils$translation );
MOD_INIT_DECL( django$utils$translation$template );
MOD_INIT_DECL( django$utils$translation$trans_null );
MOD_INIT_DECL( django$utils$translation$trans_real );
MOD_INIT_DECL( django$utils$tree );
MOD_INIT_DECL( django$utils$version );
MOD_INIT_DECL( django$views );
MOD_INIT_DECL( django$views$debug );
MOD_INIT_DECL( django$views$generic );
MOD_INIT_DECL( django$views$generic$base );
MOD_INIT_DECL( django$views$generic$dates );
MOD_INIT_DECL( django$views$generic$detail );
MOD_INIT_DECL( django$views$generic$edit );
MOD_INIT_DECL( django$views$generic$list );
MOD_INIT_DECL( http_client );
MOD_INIT_DECL( http_client$base );
MOD_INIT_DECL( idna );
MOD_INIT_DECL( idna$core );
MOD_INIT_DECL( idna$idnadata );
MOD_INIT_DECL( idna$intranges );
MOD_INIT_DECL( idna$package_data );
MOD_INIT_DECL( idna$uts46data );
MOD_INIT_DECL( jinja2 );
MOD_INIT_DECL( jinja2$_compat );
MOD_INIT_DECL( jinja2$_identifier );
MOD_INIT_DECL( jinja2$bccache );
MOD_INIT_DECL( jinja2$compiler );
MOD_INIT_DECL( jinja2$constants );
MOD_INIT_DECL( jinja2$debug );
MOD_INIT_DECL( jinja2$defaults );
MOD_INIT_DECL( jinja2$environment );
MOD_INIT_DECL( jinja2$exceptions );
MOD_INIT_DECL( jinja2$filters );
MOD_INIT_DECL( jinja2$idtracking );
MOD_INIT_DECL( jinja2$lexer );
MOD_INIT_DECL( jinja2$loaders );
MOD_INIT_DECL( jinja2$nodes );
MOD_INIT_DECL( jinja2$optimizer );
MOD_INIT_DECL( jinja2$parser );
MOD_INIT_DECL( jinja2$runtime );
MOD_INIT_DECL( jinja2$tests );
MOD_INIT_DECL( jinja2$utils );
MOD_INIT_DECL( jinja2$visitor );
MOD_INIT_DECL( markupsafe );
MOD_INIT_DECL( markupsafe$_compat );
MOD_INIT_DECL( markupsafe$_constants );
MOD_INIT_DECL( markupsafe$_native );
MOD_INIT_DECL( oauthlib );
MOD_INIT_DECL( oauthlib$common );
MOD_INIT_DECL( oauthlib$oauth1 );
MOD_INIT_DECL( oauthlib$oauth1$rfc5849 );
MOD_INIT_DECL( oauthlib$oauth1$rfc5849$endpoints );
MOD_INIT_DECL( oauthlib$oauth1$rfc5849$endpoints$access_token );
MOD_INIT_DECL( oauthlib$oauth1$rfc5849$endpoints$authorization );
MOD_INIT_DECL( oauthlib$oauth1$rfc5849$endpoints$base );
MOD_INIT_DECL( oauthlib$oauth1$rfc5849$endpoints$pre_configured );
MOD_INIT_DECL( oauthlib$oauth1$rfc5849$endpoints$request_token );
MOD_INIT_DECL( oauthlib$oauth1$rfc5849$endpoints$resource );
MOD_INIT_DECL( oauthlib$oauth1$rfc5849$endpoints$signature_only );
MOD_INIT_DECL( oauthlib$oauth1$rfc5849$errors );
MOD_INIT_DECL( oauthlib$oauth1$rfc5849$parameters );
MOD_INIT_DECL( oauthlib$oauth1$rfc5849$request_validator );
MOD_INIT_DECL( oauthlib$oauth1$rfc5849$signature );
MOD_INIT_DECL( oauthlib$oauth1$rfc5849$utils );
MOD_INIT_DECL( oauthlib$oauth2 );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749 );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749$clients );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749$clients$backend_application );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749$clients$base );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749$clients$legacy_application );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749$clients$mobile_application );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749$clients$service_application );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749$clients$web_application );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749$endpoints );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749$endpoints$authorization );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749$endpoints$base );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749$endpoints$pre_configured );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749$endpoints$resource );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749$endpoints$revocation );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749$endpoints$token );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749$errors );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749$grant_types );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749$grant_types$authorization_code );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749$grant_types$base );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749$grant_types$client_credentials );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749$grant_types$implicit );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749$grant_types$openid_connect );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749$grant_types$refresh_token );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749$grant_types$resource_owner_password_credentials );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749$parameters );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749$request_validator );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749$tokens );
MOD_INIT_DECL( oauthlib$oauth2$rfc6749$utils );
MOD_INIT_DECL( oauthlib$signals );
MOD_INIT_DECL( oauthlib$uri_validate );
MOD_INIT_DECL( pyperclip );
MOD_INIT_DECL( pyperclip$clipboards );
MOD_INIT_DECL( pyperclip$exceptions );
MOD_INIT_DECL( pyperclip$windows );
MOD_INIT_DECL( pythoncom );
MOD_INIT_DECL( pytz );
MOD_INIT_DECL( pytz$exceptions );
MOD_INIT_DECL( pytz$lazy );
MOD_INIT_DECL( pytz$tzfile );
MOD_INIT_DECL( pytz$tzinfo );
MOD_INIT_DECL( pywintypes );
MOD_INIT_DECL( requests );
MOD_INIT_DECL( requests$__version__ );
MOD_INIT_DECL( requests$_internal_utils );
MOD_INIT_DECL( requests$adapters );
MOD_INIT_DECL( requests$api );
MOD_INIT_DECL( requests$auth );
MOD_INIT_DECL( requests$certs );
MOD_INIT_DECL( requests$compat );
MOD_INIT_DECL( requests$cookies );
MOD_INIT_DECL( requests$exceptions );
MOD_INIT_DECL( requests$hooks );
MOD_INIT_DECL( requests$models );
MOD_INIT_DECL( requests$packages );
MOD_INIT_DECL( requests$sessions );
MOD_INIT_DECL( requests$status_codes );
MOD_INIT_DECL( requests$structures );
MOD_INIT_DECL( requests$utils );
MOD_INIT_DECL( requests_oauthlib );
MOD_INIT_DECL( requests_oauthlib$oauth1_auth );
MOD_INIT_DECL( requests_oauthlib$oauth1_session );
MOD_INIT_DECL( requests_oauthlib$oauth2_auth );
MOD_INIT_DECL( requests_oauthlib$oauth2_session );
MOD_INIT_DECL( six );
MOD_INIT_DECL( tweepy );
MOD_INIT_DECL( tweepy$api );
MOD_INIT_DECL( tweepy$auth );
MOD_INIT_DECL( tweepy$binder );
MOD_INIT_DECL( tweepy$cache );
MOD_INIT_DECL( tweepy$cursor );
MOD_INIT_DECL( tweepy$error );
MOD_INIT_DECL( tweepy$models );
MOD_INIT_DECL( tweepy$parsers );
MOD_INIT_DECL( tweepy$streaming );
MOD_INIT_DECL( tweepy$utils );
MOD_INIT_DECL( urllib3 );
MOD_INIT_DECL( urllib3$_collections );
MOD_INIT_DECL( urllib3$connection );
MOD_INIT_DECL( urllib3$connectionpool );
MOD_INIT_DECL( urllib3$contrib );
MOD_INIT_DECL( urllib3$contrib$pyopenssl );
MOD_INIT_DECL( urllib3$contrib$socks );
MOD_INIT_DECL( urllib3$exceptions );
MOD_INIT_DECL( urllib3$fields );
MOD_INIT_DECL( urllib3$filepost );
MOD_INIT_DECL( urllib3$packages );
MOD_INIT_DECL( urllib3$packages$backports );
MOD_INIT_DECL( urllib3$packages$backports$makefile );
MOD_INIT_DECL( urllib3$packages$ordered_dict );
MOD_INIT_DECL( urllib3$packages$six );
MOD_INIT_DECL( urllib3$packages$ssl_match_hostname );
MOD_INIT_DECL( urllib3$packages$ssl_match_hostname$_implementation );
MOD_INIT_DECL( urllib3$poolmanager );
MOD_INIT_DECL( urllib3$request );
MOD_INIT_DECL( urllib3$response );
MOD_INIT_DECL( urllib3$util );
MOD_INIT_DECL( urllib3$util$connection );
MOD_INIT_DECL( urllib3$util$request );
MOD_INIT_DECL( urllib3$util$response );
MOD_INIT_DECL( urllib3$util$retry );
MOD_INIT_DECL( urllib3$util$selectors );
MOD_INIT_DECL( urllib3$util$ssl_ );
MOD_INIT_DECL( urllib3$util$timeout );
MOD_INIT_DECL( urllib3$util$url );
MOD_INIT_DECL( urllib3$util$wait );
MOD_INIT_DECL( win32 );
MOD_INIT_DECL( win32com );
MOD_INIT_DECL( win32com$gen_py );
MOD_INIT_DECL( win32com$shell );
MOD_INIT_DECL( win32com$shell$shellcon );
static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] =
{
    { (char *)"GlyphGrabber", MOD_INIT_NAME( GlyphGrabber ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PIL", MOD_INIT_NAME( PIL ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"PIL.BmpImagePlugin", MOD_INIT_NAME( PIL$BmpImagePlugin ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PIL.GifImagePlugin", MOD_INIT_NAME( PIL$GifImagePlugin ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PIL.GimpGradientFile", MOD_INIT_NAME( PIL$GimpGradientFile ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PIL.GimpPaletteFile", MOD_INIT_NAME( PIL$GimpPaletteFile ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PIL.Image", MOD_INIT_NAME( PIL$Image ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PIL.ImageChops", MOD_INIT_NAME( PIL$ImageChops ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PIL.ImageColor", MOD_INIT_NAME( PIL$ImageColor ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PIL.ImageFile", MOD_INIT_NAME( PIL$ImageFile ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PIL.ImageFilter", MOD_INIT_NAME( PIL$ImageFilter ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PIL.ImageMode", MOD_INIT_NAME( PIL$ImageMode ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PIL.ImagePalette", MOD_INIT_NAME( PIL$ImagePalette ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PIL.ImageQt", MOD_INIT_NAME( PIL$ImageQt ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PIL.ImageSequence", MOD_INIT_NAME( PIL$ImageSequence ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PIL.ImageShow", MOD_INIT_NAME( PIL$ImageShow ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PIL.JpegImagePlugin", MOD_INIT_NAME( PIL$JpegImagePlugin ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PIL.JpegPresets", MOD_INIT_NAME( PIL$JpegPresets ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PIL.MpoImagePlugin", MOD_INIT_NAME( PIL$MpoImagePlugin ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PIL.PaletteFile", MOD_INIT_NAME( PIL$PaletteFile ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PIL.PngImagePlugin", MOD_INIT_NAME( PIL$PngImagePlugin ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PIL.PpmImagePlugin", MOD_INIT_NAME( PIL$PpmImagePlugin ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PIL.PyAccess", MOD_INIT_NAME( PIL$PyAccess ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PIL.TiffImagePlugin", MOD_INIT_NAME( PIL$TiffImagePlugin ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PIL.TiffTags", MOD_INIT_NAME( PIL$TiffTags ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PIL._binary", MOD_INIT_NAME( PIL$_binary ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PIL._imaging", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"PIL._util", MOD_INIT_NAME( PIL$_util ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PIL.version", MOD_INIT_NAME( PIL$version ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PyQt5", MOD_INIT_NAME( PyQt5 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"PyQt5.QtCore", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"PyQt5.QtCore-postLoad", MOD_INIT_NAME( PyQt5$QtCore$$45$postLoad ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PyQt5.QtGui", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"PyQt5.QtWidgets", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"__main__", MOD_INIT_NAME( __main__ ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"_bz2", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_ctypes", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_decimal", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_elementtree", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_hashlib", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_lzma", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_msi", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_multiprocessing", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_overlapped", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_socket", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_sqlite3", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_ssl", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_tkinter", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"_win32sysloader", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"appdirs", MOD_INIT_NAME( appdirs ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"bson", MOD_INIT_NAME( bson ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"bson.codec", MOD_INIT_NAME( bson$codec ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"bson.network", MOD_INIT_NAME( bson$network ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"bson.objectid", MOD_INIT_NAME( bson$objectid ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"bson.py3compat", MOD_INIT_NAME( bson$py3compat ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"bson.tz_util", MOD_INIT_NAME( bson$tz_util ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"certifi", MOD_INIT_NAME( certifi ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"certifi.core", MOD_INIT_NAME( certifi$core ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet", MOD_INIT_NAME( chardet ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"chardet.big5freq", MOD_INIT_NAME( chardet$big5freq ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.big5prober", MOD_INIT_NAME( chardet$big5prober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.chardistribution", MOD_INIT_NAME( chardet$chardistribution ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.charsetgroupprober", MOD_INIT_NAME( chardet$charsetgroupprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.charsetprober", MOD_INIT_NAME( chardet$charsetprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.codingstatemachine", MOD_INIT_NAME( chardet$codingstatemachine ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.compat", MOD_INIT_NAME( chardet$compat ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.cp949prober", MOD_INIT_NAME( chardet$cp949prober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.enums", MOD_INIT_NAME( chardet$enums ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.escprober", MOD_INIT_NAME( chardet$escprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.escsm", MOD_INIT_NAME( chardet$escsm ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.eucjpprober", MOD_INIT_NAME( chardet$eucjpprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.euckrfreq", MOD_INIT_NAME( chardet$euckrfreq ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.euckrprober", MOD_INIT_NAME( chardet$euckrprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.euctwfreq", MOD_INIT_NAME( chardet$euctwfreq ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.euctwprober", MOD_INIT_NAME( chardet$euctwprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.gb2312freq", MOD_INIT_NAME( chardet$gb2312freq ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.gb2312prober", MOD_INIT_NAME( chardet$gb2312prober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.hebrewprober", MOD_INIT_NAME( chardet$hebrewprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.jisfreq", MOD_INIT_NAME( chardet$jisfreq ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.jpcntx", MOD_INIT_NAME( chardet$jpcntx ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.langbulgarianmodel", MOD_INIT_NAME( chardet$langbulgarianmodel ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.langcyrillicmodel", MOD_INIT_NAME( chardet$langcyrillicmodel ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.langgreekmodel", MOD_INIT_NAME( chardet$langgreekmodel ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.langhebrewmodel", MOD_INIT_NAME( chardet$langhebrewmodel ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.langthaimodel", MOD_INIT_NAME( chardet$langthaimodel ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.langturkishmodel", MOD_INIT_NAME( chardet$langturkishmodel ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.latin1prober", MOD_INIT_NAME( chardet$latin1prober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.mbcharsetprober", MOD_INIT_NAME( chardet$mbcharsetprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.mbcsgroupprober", MOD_INIT_NAME( chardet$mbcsgroupprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.mbcssm", MOD_INIT_NAME( chardet$mbcssm ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.sbcharsetprober", MOD_INIT_NAME( chardet$sbcharsetprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.sbcsgroupprober", MOD_INIT_NAME( chardet$sbcsgroupprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.sjisprober", MOD_INIT_NAME( chardet$sjisprober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.universaldetector", MOD_INIT_NAME( chardet$universaldetector ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.utf8prober", MOD_INIT_NAME( chardet$utf8prober ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"chardet.version", MOD_INIT_NAME( chardet$version ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"com", MOD_INIT_NAME( com ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"com.gen_py", MOD_INIT_NAME( com$gen_py ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"confirm", MOD_INIT_NAME( confirm ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cryptography", MOD_INIT_NAME( cryptography ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"design", MOD_INIT_NAME( design ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"dialog", MOD_INIT_NAME( dialog ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django", MOD_INIT_NAME( django ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.apps", MOD_INIT_NAME( django$apps ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.apps.config", MOD_INIT_NAME( django$apps$config ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.apps.registry", MOD_INIT_NAME( django$apps$registry ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.conf", MOD_INIT_NAME( django$conf ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.conf.global_settings", MOD_INIT_NAME( django$conf$global_settings ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.conf.locale", MOD_INIT_NAME( django$conf$locale ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.conf.urls", MOD_INIT_NAME( django$conf$urls ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.contrib", MOD_INIT_NAME( django$contrib ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.contrib.staticfiles", MOD_INIT_NAME( django$contrib$staticfiles ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.contrib.staticfiles.storage", MOD_INIT_NAME( django$contrib$staticfiles$storage ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.contrib.staticfiles.utils", MOD_INIT_NAME( django$contrib$staticfiles$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core", MOD_INIT_NAME( django$core ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.core.cache", MOD_INIT_NAME( django$core$cache ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.core.cache.backends", MOD_INIT_NAME( django$core$cache$backends ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.core.cache.backends.base", MOD_INIT_NAME( django$core$cache$backends$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.checks", MOD_INIT_NAME( django$core$checks ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.core.checks.caches", MOD_INIT_NAME( django$core$checks$caches ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.checks.compatibility", MOD_INIT_NAME( django$core$checks$compatibility ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.core.checks.compatibility.django_1_10", MOD_INIT_NAME( django$core$checks$compatibility$django_1_10 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.checks.compatibility.django_1_8_0", MOD_INIT_NAME( django$core$checks$compatibility$django_1_8_0 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.checks.database", MOD_INIT_NAME( django$core$checks$database ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.checks.messages", MOD_INIT_NAME( django$core$checks$messages ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.checks.model_checks", MOD_INIT_NAME( django$core$checks$model_checks ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.checks.registry", MOD_INIT_NAME( django$core$checks$registry ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.checks.security", MOD_INIT_NAME( django$core$checks$security ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.core.checks.security.base", MOD_INIT_NAME( django$core$checks$security$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.checks.security.csrf", MOD_INIT_NAME( django$core$checks$security$csrf ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.checks.security.sessions", MOD_INIT_NAME( django$core$checks$security$sessions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.checks.templates", MOD_INIT_NAME( django$core$checks$templates ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.checks.urls", MOD_INIT_NAME( django$core$checks$urls ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.checks.utils", MOD_INIT_NAME( django$core$checks$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.exceptions", MOD_INIT_NAME( django$core$exceptions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.files", MOD_INIT_NAME( django$core$files ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.core.files.base", MOD_INIT_NAME( django$core$files$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.files.images", MOD_INIT_NAME( django$core$files$images ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.files.locks", MOD_INIT_NAME( django$core$files$locks ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.files.move", MOD_INIT_NAME( django$core$files$move ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.files.storage", MOD_INIT_NAME( django$core$files$storage ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.files.temp", MOD_INIT_NAME( django$core$files$temp ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.files.uploadedfile", MOD_INIT_NAME( django$core$files$uploadedfile ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.files.uploadhandler", MOD_INIT_NAME( django$core$files$uploadhandler ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.files.utils", MOD_INIT_NAME( django$core$files$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.mail", MOD_INIT_NAME( django$core$mail ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.core.mail.message", MOD_INIT_NAME( django$core$mail$message ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.mail.utils", MOD_INIT_NAME( django$core$mail$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.management", MOD_INIT_NAME( django$core$management ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.core.management.base", MOD_INIT_NAME( django$core$management$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.management.color", MOD_INIT_NAME( django$core$management$color ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.paginator", MOD_INIT_NAME( django$core$paginator ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.serializers", MOD_INIT_NAME( django$core$serializers ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.core.serializers.base", MOD_INIT_NAME( django$core$serializers$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.serializers.json", MOD_INIT_NAME( django$core$serializers$json ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.serializers.python", MOD_INIT_NAME( django$core$serializers$python ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.signals", MOD_INIT_NAME( django$core$signals ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.signing", MOD_INIT_NAME( django$core$signing ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.core.validators", MOD_INIT_NAME( django$core$validators ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db", MOD_INIT_NAME( django$db ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.db.backends", MOD_INIT_NAME( django$db$backends ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.db.backends.oracle", MOD_INIT_NAME( django$db$backends$oracle ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.db.backends.oracle.functions", MOD_INIT_NAME( django$db$backends$oracle$functions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.backends.utils", MOD_INIT_NAME( django$db$backends$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.migrations", MOD_INIT_NAME( django$db$migrations ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.db.migrations.exceptions", MOD_INIT_NAME( django$db$migrations$exceptions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.migrations.executor", MOD_INIT_NAME( django$db$migrations$executor ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.migrations.graph", MOD_INIT_NAME( django$db$migrations$graph ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.migrations.loader", MOD_INIT_NAME( django$db$migrations$loader ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.migrations.migration", MOD_INIT_NAME( django$db$migrations$migration ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.migrations.operations", MOD_INIT_NAME( django$db$migrations$operations ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.db.migrations.operations.base", MOD_INIT_NAME( django$db$migrations$operations$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.migrations.operations.fields", MOD_INIT_NAME( django$db$migrations$operations$fields ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.migrations.operations.models", MOD_INIT_NAME( django$db$migrations$operations$models ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.migrations.operations.special", MOD_INIT_NAME( django$db$migrations$operations$special ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.migrations.recorder", MOD_INIT_NAME( django$db$migrations$recorder ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.migrations.serializer", MOD_INIT_NAME( django$db$migrations$serializer ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.migrations.state", MOD_INIT_NAME( django$db$migrations$state ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.migrations.utils", MOD_INIT_NAME( django$db$migrations$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.migrations.writer", MOD_INIT_NAME( django$db$migrations$writer ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.models", MOD_INIT_NAME( django$db$models ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.db.models.aggregates", MOD_INIT_NAME( django$db$models$aggregates ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.models.base", MOD_INIT_NAME( django$db$models$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.models.constants", MOD_INIT_NAME( django$db$models$constants ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.models.deletion", MOD_INIT_NAME( django$db$models$deletion ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.models.expressions", MOD_INIT_NAME( django$db$models$expressions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.models.fields", MOD_INIT_NAME( django$db$models$fields ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.db.models.fields.files", MOD_INIT_NAME( django$db$models$fields$files ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.models.fields.proxy", MOD_INIT_NAME( django$db$models$fields$proxy ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.models.fields.related", MOD_INIT_NAME( django$db$models$fields$related ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.models.fields.related_descriptors", MOD_INIT_NAME( django$db$models$fields$related_descriptors ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.models.fields.related_lookups", MOD_INIT_NAME( django$db$models$fields$related_lookups ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.models.fields.reverse_related", MOD_INIT_NAME( django$db$models$fields$reverse_related ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.models.functions", MOD_INIT_NAME( django$db$models$functions ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.db.models.functions.base", MOD_INIT_NAME( django$db$models$functions$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.models.functions.datetime", MOD_INIT_NAME( django$db$models$functions$datetime ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.models.indexes", MOD_INIT_NAME( django$db$models$indexes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.models.lookups", MOD_INIT_NAME( django$db$models$lookups ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.models.manager", MOD_INIT_NAME( django$db$models$manager ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.models.options", MOD_INIT_NAME( django$db$models$options ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.models.query", MOD_INIT_NAME( django$db$models$query ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.models.query_utils", MOD_INIT_NAME( django$db$models$query_utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.models.signals", MOD_INIT_NAME( django$db$models$signals ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.models.sql", MOD_INIT_NAME( django$db$models$sql ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.db.models.sql.constants", MOD_INIT_NAME( django$db$models$sql$constants ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.models.sql.datastructures", MOD_INIT_NAME( django$db$models$sql$datastructures ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.models.sql.query", MOD_INIT_NAME( django$db$models$sql$query ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.models.sql.subqueries", MOD_INIT_NAME( django$db$models$sql$subqueries ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.models.sql.where", MOD_INIT_NAME( django$db$models$sql$where ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.models.utils", MOD_INIT_NAME( django$db$models$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.transaction", MOD_INIT_NAME( django$db$transaction ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.db.utils", MOD_INIT_NAME( django$db$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.dispatch", MOD_INIT_NAME( django$dispatch ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.dispatch.dispatcher", MOD_INIT_NAME( django$dispatch$dispatcher ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.dispatch.weakref_backports", MOD_INIT_NAME( django$dispatch$weakref_backports ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.forms", MOD_INIT_NAME( django$forms ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.forms.boundfield", MOD_INIT_NAME( django$forms$boundfield ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.forms.fields", MOD_INIT_NAME( django$forms$fields ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.forms.forms", MOD_INIT_NAME( django$forms$forms ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.forms.formsets", MOD_INIT_NAME( django$forms$formsets ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.forms.models", MOD_INIT_NAME( django$forms$models ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.forms.renderers", MOD_INIT_NAME( django$forms$renderers ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.forms.utils", MOD_INIT_NAME( django$forms$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.forms.widgets", MOD_INIT_NAME( django$forms$widgets ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.http", MOD_INIT_NAME( django$http ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.http.cookie", MOD_INIT_NAME( django$http$cookie ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.http.multipartparser", MOD_INIT_NAME( django$http$multipartparser ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.http.request", MOD_INIT_NAME( django$http$request ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.http.response", MOD_INIT_NAME( django$http$response ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.middleware", MOD_INIT_NAME( django$middleware ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.middleware.csrf", MOD_INIT_NAME( django$middleware$csrf ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.template", MOD_INIT_NAME( django$template ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.template.backends", MOD_INIT_NAME( django$template$backends ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.template.backends.base", MOD_INIT_NAME( django$template$backends$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.template.backends.django", MOD_INIT_NAME( django$template$backends$django ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.template.backends.jinja2", MOD_INIT_NAME( django$template$backends$jinja2 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.template.backends.utils", MOD_INIT_NAME( django$template$backends$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.template.base", MOD_INIT_NAME( django$template$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.template.context", MOD_INIT_NAME( django$template$context ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.template.defaultfilters", MOD_INIT_NAME( django$template$defaultfilters ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.template.engine", MOD_INIT_NAME( django$template$engine ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.template.exceptions", MOD_INIT_NAME( django$template$exceptions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.template.library", MOD_INIT_NAME( django$template$library ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.template.loader", MOD_INIT_NAME( django$template$loader ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.template.response", MOD_INIT_NAME( django$template$response ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.template.utils", MOD_INIT_NAME( django$template$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.templatetags", MOD_INIT_NAME( django$templatetags ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.templatetags.static", MOD_INIT_NAME( django$templatetags$static ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.urls", MOD_INIT_NAME( django$urls ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.urls.base", MOD_INIT_NAME( django$urls$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.urls.exceptions", MOD_INIT_NAME( django$urls$exceptions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.urls.resolvers", MOD_INIT_NAME( django$urls$resolvers ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.urls.utils", MOD_INIT_NAME( django$urls$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils", MOD_INIT_NAME( django$utils ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.utils._os", MOD_INIT_NAME( django$utils$_os ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.autoreload", MOD_INIT_NAME( django$utils$autoreload ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.baseconv", MOD_INIT_NAME( django$utils$baseconv ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.cache", MOD_INIT_NAME( django$utils$cache ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.crypto", MOD_INIT_NAME( django$utils$crypto ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.datastructures", MOD_INIT_NAME( django$utils$datastructures ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.dateformat", MOD_INIT_NAME( django$utils$dateformat ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.dateparse", MOD_INIT_NAME( django$utils$dateparse ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.dates", MOD_INIT_NAME( django$utils$dates ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.datetime_safe", MOD_INIT_NAME( django$utils$datetime_safe ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.deconstruct", MOD_INIT_NAME( django$utils$deconstruct ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.decorators", MOD_INIT_NAME( django$utils$decorators ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.deprecation", MOD_INIT_NAME( django$utils$deprecation ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.duration", MOD_INIT_NAME( django$utils$duration ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.encoding", MOD_INIT_NAME( django$utils$encoding ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.formats", MOD_INIT_NAME( django$utils$formats ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.functional", MOD_INIT_NAME( django$utils$functional ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.html", MOD_INIT_NAME( django$utils$html ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.html_parser", MOD_INIT_NAME( django$utils$html_parser ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.http", MOD_INIT_NAME( django$utils$http ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.inspect", MOD_INIT_NAME( django$utils$inspect ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.ipv6", MOD_INIT_NAME( django$utils$ipv6 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.itercompat", MOD_INIT_NAME( django$utils$itercompat ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.log", MOD_INIT_NAME( django$utils$log ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.lru_cache", MOD_INIT_NAME( django$utils$lru_cache ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.module_loading", MOD_INIT_NAME( django$utils$module_loading ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.numberformat", MOD_INIT_NAME( django$utils$numberformat ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.regex_helper", MOD_INIT_NAME( django$utils$regex_helper ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.safestring", MOD_INIT_NAME( django$utils$safestring ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.six", MOD_INIT_NAME( django$utils$six ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.termcolors", MOD_INIT_NAME( django$utils$termcolors ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.text", MOD_INIT_NAME( django$utils$text ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.timesince", MOD_INIT_NAME( django$utils$timesince ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.timezone", MOD_INIT_NAME( django$utils$timezone ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.translation", MOD_INIT_NAME( django$utils$translation ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.utils.translation.template", MOD_INIT_NAME( django$utils$translation$template ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.translation.trans_null", MOD_INIT_NAME( django$utils$translation$trans_null ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.translation.trans_real", MOD_INIT_NAME( django$utils$translation$trans_real ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.tree", MOD_INIT_NAME( django$utils$tree ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.utils.version", MOD_INIT_NAME( django$utils$version ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.views", MOD_INIT_NAME( django$views ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.views.debug", MOD_INIT_NAME( django$views$debug ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.views.generic", MOD_INIT_NAME( django$views$generic ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"django.views.generic.base", MOD_INIT_NAME( django$views$generic$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.views.generic.dates", MOD_INIT_NAME( django$views$generic$dates ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.views.generic.detail", MOD_INIT_NAME( django$views$generic$detail ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.views.generic.edit", MOD_INIT_NAME( django$views$generic$edit ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"django.views.generic.list", MOD_INIT_NAME( django$views$generic$list ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"http_client", MOD_INIT_NAME( http_client ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"http_client.base", MOD_INIT_NAME( http_client$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"idna", MOD_INIT_NAME( idna ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"idna.core", MOD_INIT_NAME( idna$core ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"idna.idnadata", MOD_INIT_NAME( idna$idnadata ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"idna.intranges", MOD_INIT_NAME( idna$intranges ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"idna.package_data", MOD_INIT_NAME( idna$package_data ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"idna.uts46data", MOD_INIT_NAME( idna$uts46data ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"jinja2", MOD_INIT_NAME( jinja2 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"jinja2._compat", MOD_INIT_NAME( jinja2$_compat ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"jinja2._identifier", MOD_INIT_NAME( jinja2$_identifier ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"jinja2.bccache", MOD_INIT_NAME( jinja2$bccache ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"jinja2.compiler", MOD_INIT_NAME( jinja2$compiler ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"jinja2.constants", MOD_INIT_NAME( jinja2$constants ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"jinja2.debug", MOD_INIT_NAME( jinja2$debug ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"jinja2.defaults", MOD_INIT_NAME( jinja2$defaults ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"jinja2.environment", MOD_INIT_NAME( jinja2$environment ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"jinja2.exceptions", MOD_INIT_NAME( jinja2$exceptions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"jinja2.filters", MOD_INIT_NAME( jinja2$filters ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"jinja2.idtracking", MOD_INIT_NAME( jinja2$idtracking ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"jinja2.lexer", MOD_INIT_NAME( jinja2$lexer ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"jinja2.loaders", MOD_INIT_NAME( jinja2$loaders ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"jinja2.nodes", MOD_INIT_NAME( jinja2$nodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"jinja2.optimizer", MOD_INIT_NAME( jinja2$optimizer ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"jinja2.parser", MOD_INIT_NAME( jinja2$parser ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"jinja2.runtime", MOD_INIT_NAME( jinja2$runtime ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"jinja2.tests", MOD_INIT_NAME( jinja2$tests ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"jinja2.utils", MOD_INIT_NAME( jinja2$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"jinja2.visitor", MOD_INIT_NAME( jinja2$visitor ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"markupsafe", MOD_INIT_NAME( markupsafe ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"markupsafe._compat", MOD_INIT_NAME( markupsafe$_compat ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"markupsafe._constants", MOD_INIT_NAME( markupsafe$_constants ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"markupsafe._native", MOD_INIT_NAME( markupsafe$_native ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib", MOD_INIT_NAME( oauthlib ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"oauthlib.common", MOD_INIT_NAME( oauthlib$common ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth1", MOD_INIT_NAME( oauthlib$oauth1 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"oauthlib.oauth1.rfc5849", MOD_INIT_NAME( oauthlib$oauth1$rfc5849 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"oauthlib.oauth1.rfc5849.endpoints", MOD_INIT_NAME( oauthlib$oauth1$rfc5849$endpoints ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"oauthlib.oauth1.rfc5849.endpoints.access_token", MOD_INIT_NAME( oauthlib$oauth1$rfc5849$endpoints$access_token ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth1.rfc5849.endpoints.authorization", MOD_INIT_NAME( oauthlib$oauth1$rfc5849$endpoints$authorization ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth1.rfc5849.endpoints.base", MOD_INIT_NAME( oauthlib$oauth1$rfc5849$endpoints$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth1.rfc5849.endpoints.pre_configured", MOD_INIT_NAME( oauthlib$oauth1$rfc5849$endpoints$pre_configured ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth1.rfc5849.endpoints.request_token", MOD_INIT_NAME( oauthlib$oauth1$rfc5849$endpoints$request_token ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth1.rfc5849.endpoints.resource", MOD_INIT_NAME( oauthlib$oauth1$rfc5849$endpoints$resource ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth1.rfc5849.endpoints.signature_only", MOD_INIT_NAME( oauthlib$oauth1$rfc5849$endpoints$signature_only ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth1.rfc5849.errors", MOD_INIT_NAME( oauthlib$oauth1$rfc5849$errors ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth1.rfc5849.parameters", MOD_INIT_NAME( oauthlib$oauth1$rfc5849$parameters ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth1.rfc5849.request_validator", MOD_INIT_NAME( oauthlib$oauth1$rfc5849$request_validator ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth1.rfc5849.signature", MOD_INIT_NAME( oauthlib$oauth1$rfc5849$signature ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth1.rfc5849.utils", MOD_INIT_NAME( oauthlib$oauth1$rfc5849$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth2", MOD_INIT_NAME( oauthlib$oauth2 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"oauthlib.oauth2.rfc6749", MOD_INIT_NAME( oauthlib$oauth2$rfc6749 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"oauthlib.oauth2.rfc6749.clients", MOD_INIT_NAME( oauthlib$oauth2$rfc6749$clients ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"oauthlib.oauth2.rfc6749.clients.backend_application", MOD_INIT_NAME( oauthlib$oauth2$rfc6749$clients$backend_application ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth2.rfc6749.clients.base", MOD_INIT_NAME( oauthlib$oauth2$rfc6749$clients$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth2.rfc6749.clients.legacy_application", MOD_INIT_NAME( oauthlib$oauth2$rfc6749$clients$legacy_application ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth2.rfc6749.clients.mobile_application", MOD_INIT_NAME( oauthlib$oauth2$rfc6749$clients$mobile_application ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth2.rfc6749.clients.service_application", MOD_INIT_NAME( oauthlib$oauth2$rfc6749$clients$service_application ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth2.rfc6749.clients.web_application", MOD_INIT_NAME( oauthlib$oauth2$rfc6749$clients$web_application ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth2.rfc6749.endpoints", MOD_INIT_NAME( oauthlib$oauth2$rfc6749$endpoints ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"oauthlib.oauth2.rfc6749.endpoints.authorization", MOD_INIT_NAME( oauthlib$oauth2$rfc6749$endpoints$authorization ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth2.rfc6749.endpoints.base", MOD_INIT_NAME( oauthlib$oauth2$rfc6749$endpoints$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth2.rfc6749.endpoints.pre_configured", MOD_INIT_NAME( oauthlib$oauth2$rfc6749$endpoints$pre_configured ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth2.rfc6749.endpoints.resource", MOD_INIT_NAME( oauthlib$oauth2$rfc6749$endpoints$resource ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth2.rfc6749.endpoints.revocation", MOD_INIT_NAME( oauthlib$oauth2$rfc6749$endpoints$revocation ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth2.rfc6749.endpoints.token", MOD_INIT_NAME( oauthlib$oauth2$rfc6749$endpoints$token ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth2.rfc6749.errors", MOD_INIT_NAME( oauthlib$oauth2$rfc6749$errors ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth2.rfc6749.grant_types", MOD_INIT_NAME( oauthlib$oauth2$rfc6749$grant_types ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"oauthlib.oauth2.rfc6749.grant_types.authorization_code", MOD_INIT_NAME( oauthlib$oauth2$rfc6749$grant_types$authorization_code ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth2.rfc6749.grant_types.base", MOD_INIT_NAME( oauthlib$oauth2$rfc6749$grant_types$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth2.rfc6749.grant_types.client_credentials", MOD_INIT_NAME( oauthlib$oauth2$rfc6749$grant_types$client_credentials ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth2.rfc6749.grant_types.implicit", MOD_INIT_NAME( oauthlib$oauth2$rfc6749$grant_types$implicit ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth2.rfc6749.grant_types.openid_connect", MOD_INIT_NAME( oauthlib$oauth2$rfc6749$grant_types$openid_connect ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth2.rfc6749.grant_types.refresh_token", MOD_INIT_NAME( oauthlib$oauth2$rfc6749$grant_types$refresh_token ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth2.rfc6749.grant_types.resource_owner_password_credentials", MOD_INIT_NAME( oauthlib$oauth2$rfc6749$grant_types$resource_owner_password_credentials ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth2.rfc6749.parameters", MOD_INIT_NAME( oauthlib$oauth2$rfc6749$parameters ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth2.rfc6749.request_validator", MOD_INIT_NAME( oauthlib$oauth2$rfc6749$request_validator ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth2.rfc6749.tokens", MOD_INIT_NAME( oauthlib$oauth2$rfc6749$tokens ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.oauth2.rfc6749.utils", MOD_INIT_NAME( oauthlib$oauth2$rfc6749$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.signals", MOD_INIT_NAME( oauthlib$signals ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"oauthlib.uri_validate", MOD_INIT_NAME( oauthlib$uri_validate ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pkg_resources", NULL, 2052279, 101681, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"pkg_resources.extern", NULL, 2153960, 2533, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"pycurl", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"pyexpat", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"pyperclip", MOD_INIT_NAME( pyperclip ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pyperclip.clipboards", MOD_INIT_NAME( pyperclip$clipboards ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyperclip.exceptions", MOD_INIT_NAME( pyperclip$exceptions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyperclip.windows", MOD_INIT_NAME( pyperclip$windows ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pythoncom", MOD_INIT_NAME( pythoncom ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pytz", MOD_INIT_NAME( pytz ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pytz.exceptions", MOD_INIT_NAME( pytz$exceptions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pytz.lazy", MOD_INIT_NAME( pytz$lazy ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pytz.tzfile", MOD_INIT_NAME( pytz$tzfile ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pytz.tzinfo", MOD_INIT_NAME( pytz$tzinfo ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pywintypes", MOD_INIT_NAME( pywintypes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests", MOD_INIT_NAME( requests ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"requests.__version__", MOD_INIT_NAME( requests$__version__ ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests._internal_utils", MOD_INIT_NAME( requests$_internal_utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.adapters", MOD_INIT_NAME( requests$adapters ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.api", MOD_INIT_NAME( requests$api ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.auth", MOD_INIT_NAME( requests$auth ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.certs", MOD_INIT_NAME( requests$certs ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.compat", MOD_INIT_NAME( requests$compat ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.cookies", MOD_INIT_NAME( requests$cookies ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.exceptions", MOD_INIT_NAME( requests$exceptions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.hooks", MOD_INIT_NAME( requests$hooks ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.models", MOD_INIT_NAME( requests$models ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.packages", MOD_INIT_NAME( requests$packages ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.sessions", MOD_INIT_NAME( requests$sessions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.status_codes", MOD_INIT_NAME( requests$status_codes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.structures", MOD_INIT_NAME( requests$structures ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests.utils", MOD_INIT_NAME( requests$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests_oauthlib", MOD_INIT_NAME( requests_oauthlib ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"requests_oauthlib.oauth1_auth", MOD_INIT_NAME( requests_oauthlib$oauth1_auth ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests_oauthlib.oauth1_session", MOD_INIT_NAME( requests_oauthlib$oauth1_session ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests_oauthlib.oauth2_auth", MOD_INIT_NAME( requests_oauthlib$oauth2_auth ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"requests_oauthlib.oauth2_session", MOD_INIT_NAME( requests_oauthlib$oauth2_session ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"select", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"sip", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"six", MOD_INIT_NAME( six ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tweepy", MOD_INIT_NAME( tweepy ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"tweepy.api", MOD_INIT_NAME( tweepy$api ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tweepy.auth", MOD_INIT_NAME( tweepy$auth ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tweepy.binder", MOD_INIT_NAME( tweepy$binder ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tweepy.cache", MOD_INIT_NAME( tweepy$cache ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tweepy.cursor", MOD_INIT_NAME( tweepy$cursor ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tweepy.error", MOD_INIT_NAME( tweepy$error ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tweepy.models", MOD_INIT_NAME( tweepy$models ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tweepy.parsers", MOD_INIT_NAME( tweepy$parsers ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tweepy.streaming", MOD_INIT_NAME( tweepy$streaming ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tweepy.utils", MOD_INIT_NAME( tweepy$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"unicodedata", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"urllib3", MOD_INIT_NAME( urllib3 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"urllib3._collections", MOD_INIT_NAME( urllib3$_collections ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.connection", MOD_INIT_NAME( urllib3$connection ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.connectionpool", MOD_INIT_NAME( urllib3$connectionpool ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.contrib", MOD_INIT_NAME( urllib3$contrib ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"urllib3.contrib.pyopenssl", MOD_INIT_NAME( urllib3$contrib$pyopenssl ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.contrib.socks", MOD_INIT_NAME( urllib3$contrib$socks ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.exceptions", MOD_INIT_NAME( urllib3$exceptions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.fields", MOD_INIT_NAME( urllib3$fields ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.filepost", MOD_INIT_NAME( urllib3$filepost ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.packages", MOD_INIT_NAME( urllib3$packages ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"urllib3.packages.backports", MOD_INIT_NAME( urllib3$packages$backports ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"urllib3.packages.backports.makefile", MOD_INIT_NAME( urllib3$packages$backports$makefile ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.packages.ordered_dict", MOD_INIT_NAME( urllib3$packages$ordered_dict ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.packages.six", MOD_INIT_NAME( urllib3$packages$six ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.packages.ssl_match_hostname", MOD_INIT_NAME( urllib3$packages$ssl_match_hostname ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"urllib3.packages.ssl_match_hostname._implementation", MOD_INIT_NAME( urllib3$packages$ssl_match_hostname$_implementation ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.poolmanager", MOD_INIT_NAME( urllib3$poolmanager ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.request", MOD_INIT_NAME( urllib3$request ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.response", MOD_INIT_NAME( urllib3$response ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.util", MOD_INIT_NAME( urllib3$util ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"urllib3.util.connection", MOD_INIT_NAME( urllib3$util$connection ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.util.request", MOD_INIT_NAME( urllib3$util$request ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.util.response", MOD_INIT_NAME( urllib3$util$response ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.util.retry", MOD_INIT_NAME( urllib3$util$retry ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.util.selectors", MOD_INIT_NAME( urllib3$util$selectors ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.util.ssl_", MOD_INIT_NAME( urllib3$util$ssl_ ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.util.timeout", MOD_INIT_NAME( urllib3$util$timeout ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.util.url", MOD_INIT_NAME( urllib3$util$url ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib3.util.wait", MOD_INIT_NAME( urllib3$util$wait ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"win32", MOD_INIT_NAME( win32 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"win32._com", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"win32._cryptography", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"win32api", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"win32com", MOD_INIT_NAME( win32com ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"win32com.gen_py", MOD_INIT_NAME( win32com$gen_py ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"win32com.shell", MOD_INIT_NAME( win32com$shell ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"win32com.shell.shell", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { (char *)"win32com.shell.shellcon", MOD_INIT_NAME( win32com$shell$shellcon ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"__future__", NULL, 2156493, 4326, NUITKA_BYTECODE_FLAG },
    { (char *)"_compat_pickle", NULL, 2160819, 6729, NUITKA_BYTECODE_FLAG },
    { (char *)"_dummy_thread", NULL, 2167548, 5073, NUITKA_BYTECODE_FLAG },
    { (char *)"_markupbase", NULL, 2172621, 8891, NUITKA_BYTECODE_FLAG },
    { (char *)"_osx_support", NULL, 2181512, 10500, NUITKA_BYTECODE_FLAG },
    { (char *)"_pyio", NULL, 2192012, 76021, NUITKA_BYTECODE_FLAG },
    { (char *)"_sitebuiltins", NULL, 2268033, 3681, NUITKA_BYTECODE_FLAG },
    { (char *)"_strptime", NULL, 2271714, 15805, NUITKA_BYTECODE_FLAG },
    { (char *)"_threading_local", NULL, 2287519, 6911, NUITKA_BYTECODE_FLAG },
    { (char *)"aifc", NULL, 2294430, 27817, NUITKA_BYTECODE_FLAG },
    { (char *)"argparse", NULL, 2322247, 65545, NUITKA_BYTECODE_FLAG },
    { (char *)"asynchat", NULL, 2387792, 8492, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio", NULL, 2396284, 879, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"asyncio.base_events", NULL, 2397163, 41671, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.base_subprocess", NULL, 2438834, 10070, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.compat", NULL, 2448904, 806, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.constants", NULL, 2449710, 254, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.coroutines", NULL, 2449964, 9129, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.events", NULL, 2459093, 26094, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.futures", NULL, 2485187, 16169, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.locks", NULL, 2501356, 16099, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.log", NULL, 2517455, 256, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.proactor_events", NULL, 2517711, 18051, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.protocols", NULL, 2535762, 6103, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.queues", NULL, 2541865, 8845, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.selector_events", NULL, 2550710, 32653, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.sslproto", NULL, 2583363, 21699, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.streams", NULL, 2605062, 20909, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.subprocess", NULL, 2625971, 7528, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.tasks", NULL, 2633499, 21554, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.test_utils", NULL, 2655053, 18155, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.transports", NULL, 2673208, 12485, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.windows_events", NULL, 2685693, 23166, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncio.windows_utils", NULL, 2708859, 5907, NUITKA_BYTECODE_FLAG },
    { (char *)"asyncore", NULL, 2714766, 17186, NUITKA_BYTECODE_FLAG },
    { (char *)"bdb", NULL, 2731952, 18571, NUITKA_BYTECODE_FLAG },
    { (char *)"binhex", NULL, 2750523, 13439, NUITKA_BYTECODE_FLAG },
    { (char *)"bisect", NULL, 2763962, 2846, NUITKA_BYTECODE_FLAG },
    { (char *)"cProfile", NULL, 2766808, 4618, NUITKA_BYTECODE_FLAG },
    { (char *)"calendar", NULL, 2771426, 27661, NUITKA_BYTECODE_FLAG },
    { (char *)"cgi", NULL, 2799087, 29877, NUITKA_BYTECODE_FLAG },
    { (char *)"cgitb", NULL, 2828964, 11015, NUITKA_BYTECODE_FLAG },
    { (char *)"chunk", NULL, 2839979, 5231, NUITKA_BYTECODE_FLAG },
    { (char *)"cmd", NULL, 2845210, 13420, NUITKA_BYTECODE_FLAG },
    { (char *)"code", NULL, 2858630, 9838, NUITKA_BYTECODE_FLAG },
    { (char *)"codeop", NULL, 2868468, 6466, NUITKA_BYTECODE_FLAG },
    { (char *)"colorsys", NULL, 2874934, 3653, NUITKA_BYTECODE_FLAG },
    { (char *)"compileall", NULL, 2878587, 8761, NUITKA_BYTECODE_FLAG },
    { (char *)"concurrent", NULL, 2887348, 151, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"concurrent.futures", NULL, 2887499, 699, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"concurrent.futures._base", NULL, 2888198, 20927, NUITKA_BYTECODE_FLAG },
    { (char *)"concurrent.futures.process", NULL, 2909125, 16360, NUITKA_BYTECODE_FLAG },
    { (char *)"concurrent.futures.thread", NULL, 2925485, 3925, NUITKA_BYTECODE_FLAG },
    { (char *)"configparser", NULL, 2929410, 48184, NUITKA_BYTECODE_FLAG },
    { (char *)"contextlib", NULL, 2977594, 10965, NUITKA_BYTECODE_FLAG },
    { (char *)"copy", NULL, 2988559, 8119, NUITKA_BYTECODE_FLAG },
    { (char *)"csv", NULL, 2996678, 12935, NUITKA_BYTECODE_FLAG },
    { (char *)"ctypes", NULL, 3009613, 17596, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"ctypes._endian", NULL, 3027209, 2079, NUITKA_BYTECODE_FLAG },
    { (char *)"ctypes.macholib", NULL, 3029288, 322, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"ctypes.macholib.dyld", NULL, 3029610, 4712, NUITKA_BYTECODE_FLAG },
    { (char *)"ctypes.macholib.dylib", NULL, 3034322, 2088, NUITKA_BYTECODE_FLAG },
    { (char *)"ctypes.macholib.framework", NULL, 3036410, 2387, NUITKA_BYTECODE_FLAG },
    { (char *)"ctypes.util", NULL, 3038797, 7505, NUITKA_BYTECODE_FLAG },
    { (char *)"ctypes.wintypes", NULL, 3046302, 5750, NUITKA_BYTECODE_FLAG },
    { (char *)"datetime", NULL, 3052052, 55440, NUITKA_BYTECODE_FLAG },
    { (char *)"dbm", NULL, 3107492, 4448, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"dbm.dumb", NULL, 3111940, 8220, NUITKA_BYTECODE_FLAG },
    { (char *)"decimal", NULL, 3120160, 172113, NUITKA_BYTECODE_FLAG },
    { (char *)"difflib", NULL, 3292273, 62255, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils", NULL, 3354528, 418, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"distutils._msvccompiler", NULL, 3354946, 13578, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.archive_util", NULL, 3368524, 6816, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.bcppcompiler", NULL, 3375340, 7257, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.ccompiler", NULL, 3382597, 34813, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.cmd", NULL, 3417410, 15647, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command", NULL, 3433057, 583, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"distutils.command.bdist", NULL, 3433640, 4053, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.bdist_dumb", NULL, 3437693, 3957, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.bdist_msi", NULL, 3441650, 21768, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.bdist_rpm", NULL, 3463418, 14144, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.bdist_wininst", NULL, 3477562, 8994, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.build", NULL, 3486556, 4294, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.build_clib", NULL, 3490850, 5391, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.build_ext", NULL, 3496241, 18026, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.build_py", NULL, 3514267, 11458, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.build_scripts", NULL, 3525725, 4700, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.check", NULL, 3530425, 5227, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.clean", NULL, 3535652, 2342, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.config", NULL, 3537994, 11023, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.install", NULL, 3549017, 14962, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.install_data", NULL, 3563979, 2534, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.install_egg_info", NULL, 3566513, 3194, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.install_headers", NULL, 3569707, 1839, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.install_lib", NULL, 3571546, 5611, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.install_scripts", NULL, 3577157, 2351, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.register", NULL, 3579508, 9205, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.sdist", NULL, 3588713, 14134, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.command.upload", NULL, 3602847, 5692, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.config", NULL, 3608539, 3814, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.core", NULL, 3612353, 7057, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.cygwinccompiler", NULL, 3619410, 9225, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.debug", NULL, 3628635, 223, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.dep_util", NULL, 3628858, 2865, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.dir_util", NULL, 3631723, 6207, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.dist", NULL, 3637930, 36464, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.errors", NULL, 3674394, 5729, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.extension", NULL, 3680123, 7416, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.fancy_getopt", NULL, 3687539, 11503, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.file_util", NULL, 3699042, 6308, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.filelist", NULL, 3705350, 10337, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.log", NULL, 3715687, 2490, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.msvc9compiler", NULL, 3718177, 19183, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.msvccompiler", NULL, 3737360, 15953, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.spawn", NULL, 3753313, 5379, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.sysconfig", NULL, 3758692, 13030, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.text_file", NULL, 3771722, 8904, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.unixccompiler", NULL, 3780626, 7265, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.util", NULL, 3787891, 16537, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.version", NULL, 3804428, 7785, NUITKA_BYTECODE_FLAG },
    { (char *)"distutils.versionpredicate", NULL, 3812213, 5381, NUITKA_BYTECODE_FLAG },
    { (char *)"doctest", NULL, 3817594, 79749, NUITKA_BYTECODE_FLAG },
    { (char *)"dummy_threading", NULL, 3897343, 1211, NUITKA_BYTECODE_FLAG },
    { (char *)"email", NULL, 3898554, 1773, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"email._encoded_words", NULL, 3900327, 6058, NUITKA_BYTECODE_FLAG },
    { (char *)"email._header_value_parser", NULL, 3906385, 87250, NUITKA_BYTECODE_FLAG },
    { (char *)"email._parseaddr", NULL, 3993635, 13750, NUITKA_BYTECODE_FLAG },
    { (char *)"email._policybase", NULL, 4007385, 15202, NUITKA_BYTECODE_FLAG },
    { (char *)"email.base64mime", NULL, 4022587, 3381, NUITKA_BYTECODE_FLAG },
    { (char *)"email.charset", NULL, 4025968, 12068, NUITKA_BYTECODE_FLAG },
    { (char *)"email.contentmanager", NULL, 4038036, 8110, NUITKA_BYTECODE_FLAG },
    { (char *)"email.encoders", NULL, 4046146, 1756, NUITKA_BYTECODE_FLAG },
    { (char *)"email.errors", NULL, 4047902, 6287, NUITKA_BYTECODE_FLAG },
    { (char *)"email.feedparser", NULL, 4054189, 11632, NUITKA_BYTECODE_FLAG },
    { (char *)"email.generator", NULL, 4065821, 13505, NUITKA_BYTECODE_FLAG },
    { (char *)"email.header", NULL, 4079326, 17695, NUITKA_BYTECODE_FLAG },
    { (char *)"email.headerregistry", NULL, 4097021, 22629, NUITKA_BYTECODE_FLAG },
    { (char *)"email.iterators", NULL, 4119650, 2040, NUITKA_BYTECODE_FLAG },
    { (char *)"email.message", NULL, 4121690, 39252, NUITKA_BYTECODE_FLAG },
    { (char *)"email.mime", NULL, 4160942, 151, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"email.mime.application", NULL, 4161093, 1473, NUITKA_BYTECODE_FLAG },
    { (char *)"email.mime.audio", NULL, 4162566, 2690, NUITKA_BYTECODE_FLAG },
    { (char *)"email.mime.base", NULL, 4165256, 1030, NUITKA_BYTECODE_FLAG },
    { (char *)"email.mime.image", NULL, 4166286, 1932, NUITKA_BYTECODE_FLAG },
    { (char *)"email.mime.message", NULL, 4168218, 1350, NUITKA_BYTECODE_FLAG },
    { (char *)"email.mime.multipart", NULL, 4169568, 1565, NUITKA_BYTECODE_FLAG },
    { (char *)"email.mime.nonmultipart", NULL, 4171133, 807, NUITKA_BYTECODE_FLAG },
    { (char *)"email.mime.text", NULL, 4171940, 1333, NUITKA_BYTECODE_FLAG },
    { (char *)"email.parser", NULL, 4173273, 5922, NUITKA_BYTECODE_FLAG },
    { (char *)"email.policy", NULL, 4179195, 9864, NUITKA_BYTECODE_FLAG },
    { (char *)"email.quoprimime", NULL, 4189059, 8121, NUITKA_BYTECODE_FLAG },
    { (char *)"email.utils", NULL, 4197180, 10470, NUITKA_BYTECODE_FLAG },
    { (char *)"filecmp", NULL, 4207650, 9098, NUITKA_BYTECODE_FLAG },
    { (char *)"fileinput", NULL, 4216748, 13849, NUITKA_BYTECODE_FLAG },
    { (char *)"fnmatch", NULL, 4230597, 3143, NUITKA_BYTECODE_FLAG },
    { (char *)"formatter", NULL, 4233740, 18823, NUITKA_BYTECODE_FLAG },
    { (char *)"fractions", NULL, 4252563, 20067, NUITKA_BYTECODE_FLAG },
    { (char *)"ftplib", NULL, 4272630, 30210, NUITKA_BYTECODE_FLAG },
    { (char *)"getopt", NULL, 4302840, 6712, NUITKA_BYTECODE_FLAG },
    { (char *)"getpass", NULL, 4309552, 4513, NUITKA_BYTECODE_FLAG },
    { (char *)"gettext", NULL, 4314065, 15686, NUITKA_BYTECODE_FLAG },
    { (char *)"glob", NULL, 4329751, 4214, NUITKA_BYTECODE_FLAG },
    { (char *)"gzip", NULL, 4333965, 17592, NUITKA_BYTECODE_FLAG },
    { (char *)"hashlib", NULL, 4351557, 6288, NUITKA_BYTECODE_FLAG },
    { (char *)"hmac", NULL, 4357845, 5143, NUITKA_BYTECODE_FLAG },
    { (char *)"html", NULL, 4362988, 3644, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"html.entities", NULL, 4366632, 55452, NUITKA_BYTECODE_FLAG },
    { (char *)"html.parser", NULL, 4422084, 12242, NUITKA_BYTECODE_FLAG },
    { (char *)"http", NULL, 4434326, 6700, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"http.client", NULL, 4441026, 33669, NUITKA_BYTECODE_FLAG },
    { (char *)"http.cookiejar", NULL, 4474695, 58135, NUITKA_BYTECODE_FLAG },
    { (char *)"http.cookies", NULL, 4532830, 17240, NUITKA_BYTECODE_FLAG },
    { (char *)"http.server", NULL, 4550070, 34579, NUITKA_BYTECODE_FLAG },
    { (char *)"imaplib", NULL, 4584649, 44806, NUITKA_BYTECODE_FLAG },
    { (char *)"imghdr", NULL, 4629455, 4510, NUITKA_BYTECODE_FLAG },
    { (char *)"imp", NULL, 4633965, 10486, NUITKA_BYTECODE_FLAG },
    { (char *)"importlib.abc", NULL, 4644451, 11766, NUITKA_BYTECODE_FLAG },
    { (char *)"importlib.util", NULL, 4656217, 9689, NUITKA_BYTECODE_FLAG },
    { (char *)"ipaddress", NULL, 4665906, 66583, NUITKA_BYTECODE_FLAG },
    { (char *)"json", NULL, 4732489, 12241, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"json.decoder", NULL, 4744730, 10686, NUITKA_BYTECODE_FLAG },
    { (char *)"json.encoder", NULL, 4755416, 12009, NUITKA_BYTECODE_FLAG },
    { (char *)"json.scanner", NULL, 4767425, 2224, NUITKA_BYTECODE_FLAG },
    { (char *)"json.tool", NULL, 4769649, 1694, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3", NULL, 4771343, 148, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"lib2to3.btm_matcher", NULL, 4771491, 5328, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.btm_utils", NULL, 4776819, 6798, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixer_base", NULL, 4783617, 6515, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixer_util", NULL, 4790132, 13364, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes", NULL, 4803496, 154, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"lib2to3.fixes.fix_apply", NULL, 4803650, 1879, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_asserts", NULL, 4805529, 1374, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_basestring", NULL, 4806903, 699, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_buffer", NULL, 4807602, 851, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_dict", NULL, 4808453, 3674, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_except", NULL, 4812127, 3051, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_exec", NULL, 4815178, 1276, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_execfile", NULL, 4816454, 1856, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_exitfunc", NULL, 4818310, 2471, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_filter", NULL, 4820781, 2106, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_funcattrs", NULL, 4822887, 1018, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_future", NULL, 4823905, 826, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_getcwdu", NULL, 4824731, 829, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_has_key", NULL, 4825560, 3178, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_idioms", NULL, 4828738, 4158, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_import", NULL, 4832896, 3024, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_imports", NULL, 4835920, 4734, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_imports2", NULL, 4840654, 579, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_input", NULL, 4841233, 1015, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_intern", NULL, 4842248, 1237, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_isinstance", NULL, 4843485, 1686, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_itertools", NULL, 4845171, 1632, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_itertools_imports", NULL, 4846803, 1772, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_long", NULL, 4848575, 747, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_map", NULL, 4849322, 2852, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_metaclass", NULL, 4852174, 5959, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_methodattrs", NULL, 4858133, 990, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_ne", NULL, 4859123, 858, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_next", NULL, 4859981, 3313, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_nonzero", NULL, 4863294, 983, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_numliterals", NULL, 4864277, 1114, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_operator", NULL, 4865391, 4497, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_paren", NULL, 4869888, 1445, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_print", NULL, 4871333, 2593, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_raise", NULL, 4873926, 2448, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_raw_input", NULL, 4876374, 836, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_reduce", NULL, 4877210, 1169, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_reload", NULL, 4878379, 1237, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_renames", NULL, 4879616, 2123, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_repr", NULL, 4881739, 904, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_set_literal", NULL, 4882643, 1812, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_standarderror", NULL, 4884455, 756, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_sys_exc", NULL, 4885211, 1502, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_throw", NULL, 4886713, 1952, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_tuple_params", NULL, 4888665, 5063, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_types", NULL, 4893728, 2000, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_unicode", NULL, 4895728, 1660, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_urllib", NULL, 4897388, 6522, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_ws_comma", NULL, 4903910, 1222, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_xrange", NULL, 4905132, 2725, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_xreadlines", NULL, 4907857, 1178, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.fixes.fix_zip", NULL, 4909035, 1232, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.main", NULL, 4910267, 9160, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.patcomp", NULL, 4919427, 6344, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pgen2", NULL, 4925771, 186, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"lib2to3.pgen2.driver", NULL, 4925957, 4778, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pgen2.grammar", NULL, 4930735, 7128, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pgen2.literals", NULL, 4937863, 1757, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pgen2.parse", NULL, 4939620, 6722, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pgen2.pgen", NULL, 4946342, 11070, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pgen2.token", NULL, 4957412, 2037, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pgen2.tokenize", NULL, 4959449, 15968, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pygram", NULL, 4975417, 1271, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.pytree", NULL, 4976688, 26881, NUITKA_BYTECODE_FLAG },
    { (char *)"lib2to3.refactor", NULL, 5003569, 22815, NUITKA_BYTECODE_FLAG },
    { (char *)"logging", NULL, 5026384, 61461, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"logging.config", NULL, 5087845, 25425, NUITKA_BYTECODE_FLAG },
    { (char *)"logging.handlers", NULL, 5113270, 45233, NUITKA_BYTECODE_FLAG },
    { (char *)"lzma", NULL, 5158503, 12492, NUITKA_BYTECODE_FLAG },
    { (char *)"macpath", NULL, 5170995, 6155, NUITKA_BYTECODE_FLAG },
    { (char *)"macurl2path", NULL, 5177150, 2096, NUITKA_BYTECODE_FLAG },
    { (char *)"mailbox", NULL, 5179246, 69809, NUITKA_BYTECODE_FLAG },
    { (char *)"mailcap", NULL, 5249055, 7162, NUITKA_BYTECODE_FLAG },
    { (char *)"mimetypes", NULL, 5256217, 16659, NUITKA_BYTECODE_FLAG },
    { (char *)"modulefinder", NULL, 5272876, 17271, NUITKA_BYTECODE_FLAG },
    { (char *)"msilib", NULL, 5290147, 17248, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"msilib.schema", NULL, 5307395, 54188, NUITKA_BYTECODE_FLAG },
    { (char *)"msilib.sequence", NULL, 5361583, 4004, NUITKA_BYTECODE_FLAG },
    { (char *)"msilib.text", NULL, 5365587, 9937, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing", NULL, 5375524, 575, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"multiprocessing.connection", NULL, 5376099, 27199, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.context", NULL, 5403298, 13529, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.dummy", NULL, 5416827, 4059, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"multiprocessing.dummy.connection", NULL, 5420886, 2679, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.forkserver", NULL, 5423565, 7276, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.heap", NULL, 5430841, 6779, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.managers", NULL, 5437620, 35406, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.pool", NULL, 5473026, 22736, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.popen_spawn_win32", NULL, 5495762, 3072, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.process", NULL, 5498834, 8839, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.queues", NULL, 5507673, 9818, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.reduction", NULL, 5517491, 7777, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.resource_sharer", NULL, 5525268, 5646, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.semaphore_tracker", NULL, 5530914, 3734, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.sharedctypes", NULL, 5534648, 7500, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.spawn", NULL, 5542148, 7064, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.synchronize", NULL, 5549212, 12287, NUITKA_BYTECODE_FLAG },
    { (char *)"multiprocessing.util", NULL, 5561499, 10398, NUITKA_BYTECODE_FLAG },
    { (char *)"netrc", NULL, 5571897, 4258, NUITKA_BYTECODE_FLAG },
    { (char *)"nntplib", NULL, 5576155, 36089, NUITKA_BYTECODE_FLAG },
    { (char *)"nturl2path", NULL, 5612244, 1707, NUITKA_BYTECODE_FLAG },
    { (char *)"numbers", NULL, 5613951, 12679, NUITKA_BYTECODE_FLAG },
    { (char *)"optparse", NULL, 5626630, 51270, NUITKA_BYTECODE_FLAG },
    { (char *)"pathlib", NULL, 5677900, 44127, NUITKA_BYTECODE_FLAG },
    { (char *)"pdb", NULL, 5722027, 49396, NUITKA_BYTECODE_FLAG },
    { (char *)"pickle", NULL, 5771423, 46963, NUITKA_BYTECODE_FLAG },
    { (char *)"pickletools", NULL, 5818386, 70079, NUITKA_BYTECODE_FLAG },
    { (char *)"pipes", NULL, 5888465, 8368, NUITKA_BYTECODE_FLAG },
    { (char *)"pkgutil", NULL, 5896833, 17484, NUITKA_BYTECODE_FLAG },
    { (char *)"plat-aix4.IN", NULL, 5914317, 5133, NUITKA_BYTECODE_FLAG },
    { (char *)"plat-darwin.IN", NULL, 5919450, 19203, NUITKA_BYTECODE_FLAG },
    { (char *)"plat-freebsd4.IN", NULL, 5938653, 11573, NUITKA_BYTECODE_FLAG },
    { (char *)"plat-freebsd5.IN", NULL, 5950226, 11573, NUITKA_BYTECODE_FLAG },
    { (char *)"plat-freebsd6.IN", NULL, 5961799, 18586, NUITKA_BYTECODE_FLAG },
    { (char *)"plat-freebsd7.IN", NULL, 5980385, 19186, NUITKA_BYTECODE_FLAG },
    { (char *)"plat-freebsd8.IN", NULL, 5999571, 19186, NUITKA_BYTECODE_FLAG },
    { (char *)"plat-linux.CDROM", NULL, 6018757, 6142, NUITKA_BYTECODE_FLAG },
    { (char *)"plat-linux.DLFCN", NULL, 6024899, 2262, NUITKA_BYTECODE_FLAG },
    { (char *)"plat-linux.TYPES", NULL, 6027161, 4868, NUITKA_BYTECODE_FLAG },
    { (char *)"plat-netbsd1.IN", NULL, 6032029, 1841, NUITKA_BYTECODE_FLAG },
    { (char *)"plat-sunos5.CDIO", NULL, 6033870, 2343, NUITKA_BYTECODE_FLAG },
    { (char *)"plat-unixware7.IN", NULL, 6036213, 23340, NUITKA_BYTECODE_FLAG },
    { (char *)"plat-unixware7.STROPTS", NULL, 6059553, 7924, NUITKA_BYTECODE_FLAG },
    { (char *)"platform", NULL, 6067477, 30089, NUITKA_BYTECODE_FLAG },
    { (char *)"plistlib", NULL, 6097566, 29831, NUITKA_BYTECODE_FLAG },
    { (char *)"poplib", NULL, 6127397, 13997, NUITKA_BYTECODE_FLAG },
    { (char *)"posixpath", NULL, 6141394, 11166, NUITKA_BYTECODE_FLAG },
    { (char *)"pprint", NULL, 6152560, 17491, NUITKA_BYTECODE_FLAG },
    { (char *)"profile", NULL, 6170051, 15098, NUITKA_BYTECODE_FLAG },
    { (char *)"pstats", NULL, 6185149, 23798, NUITKA_BYTECODE_FLAG },
    { (char *)"py_compile", NULL, 6208947, 6890, NUITKA_BYTECODE_FLAG },
    { (char *)"pyclbr", NULL, 6215837, 9111, NUITKA_BYTECODE_FLAG },
    { (char *)"pydoc", NULL, 6224948, 90416, NUITKA_BYTECODE_FLAG },
    { (char *)"pydoc_data", NULL, 6315364, 151, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"pydoc_data.topics", NULL, 6315515, 388112, NUITKA_BYTECODE_FLAG },
    { (char *)"queue", NULL, 6703627, 9206, NUITKA_BYTECODE_FLAG },
    { (char *)"random", NULL, 6712833, 19339, NUITKA_BYTECODE_FLAG },
    { (char *)"rlcompleter", NULL, 6732172, 5794, NUITKA_BYTECODE_FLAG },
    { (char *)"runpy", NULL, 6737966, 8656, NUITKA_BYTECODE_FLAG },
    { (char *)"sched", NULL, 6746622, 6378, NUITKA_BYTECODE_FLAG },
    { (char *)"selectors", NULL, 6753000, 18974, NUITKA_BYTECODE_FLAG },
    { (char *)"shelve", NULL, 6771974, 9952, NUITKA_BYTECODE_FLAG },
    { (char *)"shlex", NULL, 6781926, 7365, NUITKA_BYTECODE_FLAG },
    { (char *)"shutil", NULL, 6789291, 32651, NUITKA_BYTECODE_FLAG },
    { (char *)"signal", NULL, 6821942, 2759, NUITKA_BYTECODE_FLAG },
    { (char *)"site", NULL, 6824701, 14295, NUITKA_BYTECODE_FLAG },
    { (char *)"smtpd", NULL, 6838996, 29313, NUITKA_BYTECODE_FLAG },
    { (char *)"smtplib", NULL, 6868309, 37060, NUITKA_BYTECODE_FLAG },
    { (char *)"sndhdr", NULL, 6905369, 6917, NUITKA_BYTECODE_FLAG },
    { (char *)"socket", NULL, 6912286, 23085, NUITKA_BYTECODE_FLAG },
    { (char *)"socketserver", NULL, 6935371, 23208, NUITKA_BYTECODE_FLAG },
    { (char *)"sqlite3", NULL, 6958579, 181, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"sqlite3.dbapi2", NULL, 6958760, 2716, NUITKA_BYTECODE_FLAG },
    { (char *)"sqlite3.dump", NULL, 6961476, 2057, NUITKA_BYTECODE_FLAG },
    { (char *)"ssl", NULL, 6963533, 35848, NUITKA_BYTECODE_FLAG },
    { (char *)"statistics", NULL, 6999381, 17110, NUITKA_BYTECODE_FLAG },
    { (char *)"string", NULL, 7016491, 8622, NUITKA_BYTECODE_FLAG },
    { (char *)"subprocess", NULL, 7025113, 36884, NUITKA_BYTECODE_FLAG },
    { (char *)"sunau", NULL, 7061997, 18213, NUITKA_BYTECODE_FLAG },
    { (char *)"symbol", NULL, 7080210, 2742, NUITKA_BYTECODE_FLAG },
    { (char *)"symtable", NULL, 7082952, 11029, NUITKA_BYTECODE_FLAG },
    { (char *)"sysconfig", NULL, 7093981, 16865, NUITKA_BYTECODE_FLAG },
    { (char *)"tabnanny", NULL, 7110846, 7717, NUITKA_BYTECODE_FLAG },
    { (char *)"tarfile", NULL, 7118563, 69094, NUITKA_BYTECODE_FLAG },
    { (char *)"telnetlib", NULL, 7187657, 19243, NUITKA_BYTECODE_FLAG },
    { (char *)"tempfile", NULL, 7206900, 23646, NUITKA_BYTECODE_FLAG },
    { (char *)"test", NULL, 7230546, 145, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"test.support", NULL, 7230691, 73472, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"textwrap", NULL, 7304163, 14359, NUITKA_BYTECODE_FLAG },
    { (char *)"this", NULL, 7318522, 1328, NUITKA_BYTECODE_FLAG },
    { (char *)"timeit", NULL, 7319850, 11022, NUITKA_BYTECODE_FLAG },
    { (char *)"tkinter", NULL, 7330872, 184385, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"tkinter.colorchooser", NULL, 7515257, 1219, NUITKA_BYTECODE_FLAG },
    { (char *)"tkinter.commondialog", NULL, 7516476, 1291, NUITKA_BYTECODE_FLAG },
    { (char *)"tkinter.constants", NULL, 7517767, 1819, NUITKA_BYTECODE_FLAG },
    { (char *)"tkinter.dialog", NULL, 7519586, 1637, NUITKA_BYTECODE_FLAG },
    { (char *)"tkinter.dnd", NULL, 7521223, 11842, NUITKA_BYTECODE_FLAG },
    { (char *)"tkinter.filedialog", NULL, 7533065, 13439, NUITKA_BYTECODE_FLAG },
    { (char *)"tkinter.font", NULL, 7546504, 6692, NUITKA_BYTECODE_FLAG },
    { (char *)"tkinter.messagebox", NULL, 7553196, 3292, NUITKA_BYTECODE_FLAG },
    { (char *)"tkinter.scrolledtext", NULL, 7556488, 2351, NUITKA_BYTECODE_FLAG },
    { (char *)"tkinter.simpledialog", NULL, 7558839, 11406, NUITKA_BYTECODE_FLAG },
    { (char *)"tkinter.tix", NULL, 7570245, 88917, NUITKA_BYTECODE_FLAG },
    { (char *)"tkinter.ttk", NULL, 7659162, 58313, NUITKA_BYTECODE_FLAG },
    { (char *)"trace", NULL, 7717475, 23951, NUITKA_BYTECODE_FLAG },
    { (char *)"tracemalloc", NULL, 7741426, 17035, NUITKA_BYTECODE_FLAG },
    { (char *)"turtle", NULL, 7758461, 138999, NUITKA_BYTECODE_FLAG },
    { (char *)"typing", NULL, 7897460, 79374, NUITKA_BYTECODE_FLAG },
    { (char *)"unittest", NULL, 7976834, 3128, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"unittest.case", NULL, 7979962, 50734, NUITKA_BYTECODE_FLAG },
    { (char *)"unittest.loader", NULL, 8030696, 15134, NUITKA_BYTECODE_FLAG },
    { (char *)"unittest.main", NULL, 8045830, 7754, NUITKA_BYTECODE_FLAG },
    { (char *)"unittest.mock", NULL, 8053584, 65768, NUITKA_BYTECODE_FLAG },
    { (char *)"unittest.result", NULL, 8119352, 7786, NUITKA_BYTECODE_FLAG },
    { (char *)"unittest.runner", NULL, 8127138, 7511, NUITKA_BYTECODE_FLAG },
    { (char *)"unittest.signals", NULL, 8134649, 2389, NUITKA_BYTECODE_FLAG },
    { (char *)"unittest.suite", NULL, 8137038, 9925, NUITKA_BYTECODE_FLAG },
    { (char *)"unittest.util", NULL, 8146963, 5239, NUITKA_BYTECODE_FLAG },
    { (char *)"urllib", NULL, 8152202, 147, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"urllib.error", NULL, 8152349, 2935, NUITKA_BYTECODE_FLAG },
    { (char *)"urllib.parse", NULL, 8155284, 30216, NUITKA_BYTECODE_FLAG },
    { (char *)"urllib.request", NULL, 8185500, 76426, NUITKA_BYTECODE_FLAG },
    { (char *)"urllib.response", NULL, 8261926, 3407, NUITKA_BYTECODE_FLAG },
    { (char *)"urllib.robotparser", NULL, 8265333, 6725, NUITKA_BYTECODE_FLAG },
    { (char *)"uu", NULL, 8272058, 3967, NUITKA_BYTECODE_FLAG },
    { (char *)"uuid", NULL, 8276025, 21686, NUITKA_BYTECODE_FLAG },
    { (char *)"venv", NULL, 8297711, 16344, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"wave", NULL, 8314055, 19019, NUITKA_BYTECODE_FLAG },
    { (char *)"webbrowser", NULL, 8333074, 17424, NUITKA_BYTECODE_FLAG },
    { (char *)"wsgiref", NULL, 8350498, 745, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"wsgiref.handlers", NULL, 8351243, 17191, NUITKA_BYTECODE_FLAG },
    { (char *)"wsgiref.headers", NULL, 8368434, 8165, NUITKA_BYTECODE_FLAG },
    { (char *)"wsgiref.simple_server", NULL, 8376599, 5738, NUITKA_BYTECODE_FLAG },
    { (char *)"wsgiref.util", NULL, 8382337, 5602, NUITKA_BYTECODE_FLAG },
    { (char *)"wsgiref.validate", NULL, 8387939, 15658, NUITKA_BYTECODE_FLAG },
    { (char *)"xdrlib", NULL, 8403597, 8978, NUITKA_BYTECODE_FLAG },
    { (char *)"xml", NULL, 8412575, 719, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"xml.dom", NULL, 8413294, 5787, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"xml.dom.NodeFilter", NULL, 8419081, 1027, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.dom.domreg", NULL, 8420108, 2952, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.dom.expatbuilder", NULL, 8423060, 29691, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.dom.minicompat", NULL, 8452751, 2980, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.dom.minidom", NULL, 8455731, 61143, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.dom.pulldom", NULL, 8516874, 11593, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.dom.xmlbuilder", NULL, 8528467, 14530, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.etree", NULL, 8542997, 150, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"xml.etree.ElementInclude", NULL, 8543147, 1764, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.etree.ElementPath", NULL, 8544911, 6727, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.etree.ElementTree", NULL, 8551638, 47975, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.etree.cElementTree", NULL, 8599613, 194, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.parsers", NULL, 8599807, 326, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"xml.parsers.expat", NULL, 8600133, 367, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.sax", NULL, 8600500, 3362, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"xml.sax._exceptions", NULL, 8603862, 5696, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.sax.expatreader", NULL, 8609558, 13547, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.sax.handler", NULL, 8623105, 12518, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.sax.saxutils", NULL, 8635623, 13762, NUITKA_BYTECODE_FLAG },
    { (char *)"xml.sax.xmlreader", NULL, 8649385, 17542, NUITKA_BYTECODE_FLAG },
    { (char *)"xmlrpc", NULL, 8666927, 147, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"xmlrpc.client", NULL, 8667074, 36815, NUITKA_BYTECODE_FLAG },
    { (char *)"xmlrpc.server", NULL, 8703889, 31270, NUITKA_BYTECODE_FLAG },
    { (char *)"zipapp", NULL, 8735159, 6039, NUITKA_BYTECODE_FLAG },
    { (char *)"zipfile", NULL, 8741198, 49807, NUITKA_BYTECODE_FLAG },
    { NULL, NULL, 0, 0, 0 }
};

void setupMetaPathBasedLoader( void )
{
    static bool init_done = false;

    if ( init_done == false )
    {
        registerMetaPathBasedUnfreezer( meta_path_loader_entries );
        init_done = true;
    }
}
