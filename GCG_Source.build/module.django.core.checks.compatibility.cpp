/* Generated code for Python source for module 'django.core.checks.compatibility'
 * created by Nuitka version 0.5.28.2
 *
 * This code is in part copyright 2017 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The _module_django$core$checks$compatibility is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$core$checks$compatibility;
PyDictObject *moduledict_django$core$checks$compatibility;

/* The module constants used, if any. */
extern PyObject *const_str_plain_environ;
static PyObject *const_str_digest_685f9d4e972bd4e73b524ee5164ce4e9;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
static PyObject *const_tuple_d669d558ce6abafbfe775d3297a5fa97_tuple;
extern PyObject *const_str_digest_445dca6cbd45aee8d57b3699ee355976;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_NUITKA_PACKAGE_django_core_checks;
extern PyObject *const_str_plain_NUITKA_PACKAGE_django;
static PyObject *const_str_digest_2f96e429d08cfe81c918ad94cc3beef3;
static PyObject *const_str_digest_14796dc1d3d0ff6fee2e4e645757d355;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_c15243b3ba68498da186d5d65ae367ca_tuple;
static PyObject *const_str_digest_ed99129dc0149691d78ca22541b38111;
extern PyObject *const_str_plain_get;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_NUITKA_PACKAGE_django_core;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_join;
extern PyObject *const_tuple_51a679e52dc30b2a16a12d2160142036_tuple;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain_compatibility;
extern PyObject *const_tuple_b868c6b0937f28ff9b15f6cc52ff2098_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_09cc214448c6ce750e4709438fa406cb;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_685f9d4e972bd4e73b524ee5164ce4e9 = UNSTREAM_STRING( &constant_bin[ 761972 ], 25, 0 );
    const_tuple_d669d558ce6abafbfe775d3297a5fa97_tuple = PyTuple_New( 2 );
    const_str_digest_14796dc1d3d0ff6fee2e4e645757d355 = UNSTREAM_STRING( &constant_bin[ 761997 ], 47, 1 );
    PyTuple_SET_ITEM( const_tuple_d669d558ce6abafbfe775d3297a5fa97_tuple, 0, const_str_digest_14796dc1d3d0ff6fee2e4e645757d355 ); Py_INCREF( const_str_digest_14796dc1d3d0ff6fee2e4e645757d355 );
    PyTuple_SET_ITEM( const_tuple_d669d558ce6abafbfe775d3297a5fa97_tuple, 1, const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 ); Py_INCREF( const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 );
    const_str_digest_2f96e429d08cfe81c918ad94cc3beef3 = UNSTREAM_STRING( &constant_bin[ 762044 ], 44, 0 );
    const_str_digest_ed99129dc0149691d78ca22541b38111 = UNSTREAM_STRING( &constant_bin[ 762088 ], 41, 0 );
    const_str_digest_09cc214448c6ce750e4709438fa406cb = UNSTREAM_STRING( &constant_bin[ 761977 ], 20, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$core$checks$compatibility( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_5facffc3a9f37a5dd03152475531a0dc;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_2f96e429d08cfe81c918ad94cc3beef3 );
    codeobj_5facffc3a9f37a5dd03152475531a0dc = MAKE_CODEOBJ( module_filename_obj, const_str_digest_ed99129dc0149691d78ca22541b38111, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$core$checks$compatibility =
{
    PyModuleDef_HEAD_INIT,
    "django.core.checks.compatibility",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#if PYTHON_VERSION >= 300
extern PyObject *metapath_based_loader;
#endif
#if PYTHON_VERSION >= 330
extern PyObject *const_str_plain___loader__;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( django$core$checks$compatibility )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$core$checks$compatibility );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.core.checks.compatibility: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.core.checks.compatibility: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$core$checks$compatibility" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$core$checks$compatibility = Py_InitModule4(
        "django.core.checks.compatibility",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$core$checks$compatibility = PyModule_Create( &mdef_django$core$checks$compatibility );
#endif

    moduledict_django$core$checks$compatibility = MODULE_DICT( module_django$core$checks$compatibility );

    CHECK_OBJECT( module_django$core$checks$compatibility );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_445dca6cbd45aee8d57b3699ee355976, module_django$core$checks$compatibility );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$core$checks$compatibility, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$core$checks$compatibility, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$core$checks$compatibility, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_list_element_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    struct Nuitka_FrameObject *frame_5facffc3a9f37a5dd03152475531a0dc;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$core$checks$compatibility, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$core$checks$compatibility, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_5facffc3a9f37a5dd03152475531a0dc = MAKE_MODULE_FRAME( codeobj_5facffc3a9f37a5dd03152475531a0dc, module_django$core$checks$compatibility );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_5facffc3a9f37a5dd03152475531a0dc );
    assert( Py_REFCNT( frame_5facffc3a9f37a5dd03152475531a0dc ) == 2 );

    // Framed code:
    tmp_assign_source_3 = PyList_New( 5 );
    frame_5facffc3a9f37a5dd03152475531a0dc->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("os");
        if (likely( module != NULL ))
        {
            tmp_source_name_1 = PyObject_GetAttr( module, const_str_plain_path );
        }
        else
        {
            tmp_source_name_1 = NULL;
        }
    }

    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dirname );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = module_filename_obj;
    frame_5facffc3a9f37a5dd03152475531a0dc->m_frame.f_lineno = 1;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 0, tmp_list_element_1 );
    frame_5facffc3a9f37a5dd03152475531a0dc->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("os");
        if (likely( module != NULL ))
        {
            tmp_source_name_2 = PyObject_GetAttr( module, const_str_plain_path );
        }
        else
        {
            tmp_source_name_2 = NULL;
        }
    }

    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_join );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    frame_5facffc3a9f37a5dd03152475531a0dc->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("os");
        if (likely( module != NULL ))
        {
            tmp_called_instance_1 = PyObject_GetAttr( module, const_str_plain_environ );
        }
        else
        {
            tmp_called_instance_1 = NULL;
        }
    }

    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    frame_5facffc3a9f37a5dd03152475531a0dc->m_frame.f_lineno = 1;
    tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_c15243b3ba68498da186d5d65ae367ca_tuple, 0 ) );

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = const_str_digest_685f9d4e972bd4e73b524ee5164ce4e9;
    frame_5facffc3a9f37a5dd03152475531a0dc->m_frame.f_lineno = 1;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 1, tmp_list_element_1 );
    frame_5facffc3a9f37a5dd03152475531a0dc->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("os");
        if (likely( module != NULL ))
        {
            tmp_source_name_3 = PyObject_GetAttr( module, const_str_plain_path );
        }
        else
        {
            tmp_source_name_3 = NULL;
        }
    }

    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_join );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    frame_5facffc3a9f37a5dd03152475531a0dc->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("os");
        if (likely( module != NULL ))
        {
            tmp_called_instance_2 = PyObject_GetAttr( module, const_str_plain_environ );
        }
        else
        {
            tmp_called_instance_2 = NULL;
        }
    }

    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    frame_5facffc3a9f37a5dd03152475531a0dc->m_frame.f_lineno = 1;
    tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_b868c6b0937f28ff9b15f6cc52ff2098_tuple, 0 ) );

    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = const_str_digest_09cc214448c6ce750e4709438fa406cb;
    frame_5facffc3a9f37a5dd03152475531a0dc->m_frame.f_lineno = 1;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 2, tmp_list_element_1 );
    frame_5facffc3a9f37a5dd03152475531a0dc->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("os");
        if (likely( module != NULL ))
        {
            tmp_source_name_4 = PyObject_GetAttr( module, const_str_plain_path );
        }
        else
        {
            tmp_source_name_4 = NULL;
        }
    }

    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_join );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    frame_5facffc3a9f37a5dd03152475531a0dc->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("os");
        if (likely( module != NULL ))
        {
            tmp_called_instance_3 = PyObject_GetAttr( module, const_str_plain_environ );
        }
        else
        {
            tmp_called_instance_3 = NULL;
        }
    }

    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    frame_5facffc3a9f37a5dd03152475531a0dc->m_frame.f_lineno = 1;
    tmp_args_element_name_6 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_51a679e52dc30b2a16a12d2160142036_tuple, 0 ) );

    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = const_str_plain_compatibility;
    frame_5facffc3a9f37a5dd03152475531a0dc->m_frame.f_lineno = 1;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 3, tmp_list_element_1 );
    frame_5facffc3a9f37a5dd03152475531a0dc->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("os");
        if (likely( module != NULL ))
        {
            tmp_called_instance_4 = PyObject_GetAttr( module, const_str_plain_environ );
        }
        else
        {
            tmp_called_instance_4 = NULL;
        }
    }

    if ( tmp_called_instance_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    frame_5facffc3a9f37a5dd03152475531a0dc->m_frame.f_lineno = 1;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_d669d558ce6abafbfe775d3297a5fa97_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 4, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_django$core$checks$compatibility, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$core$checks$compatibility, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_4 );
    frame_5facffc3a9f37a5dd03152475531a0dc->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("importlib._bootstrap");
        if (likely( module != NULL ))
        {
            tmp_called_name_5 = PyObject_GetAttr( module, const_str_plain_ModuleSpec );
        }
        else
        {
            tmp_called_name_5 = NULL;
        }
    }

    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = const_str_digest_445dca6cbd45aee8d57b3699ee355976;
    tmp_args_element_name_9 = metapath_based_loader;
    frame_5facffc3a9f37a5dd03152475531a0dc->m_frame.f_lineno = 1;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$compatibility, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_5 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5facffc3a9f37a5dd03152475531a0dc );
#endif
    popFrameStack();

    assertFrameObject( frame_5facffc3a9f37a5dd03152475531a0dc );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5facffc3a9f37a5dd03152475531a0dc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5facffc3a9f37a5dd03152475531a0dc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5facffc3a9f37a5dd03152475531a0dc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5facffc3a9f37a5dd03152475531a0dc, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_6 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$core$checks$compatibility, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_445dca6cbd45aee8d57b3699ee355976;
    UPDATE_STRING_DICT0( moduledict_django$core$checks$compatibility, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_7 );

    return MOD_RETURN_VALUE( module_django$core$checks$compatibility );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
