/* Generated code for Python source for module 'django.utils.deconstruct'
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

/* The _module_django$utils$deconstruct is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$utils$deconstruct;
PyDictObject *moduledict_django$utils$deconstruct;

/* The module constants used, if any. */
extern PyObject *const_str_plain_import_module;
static PyObject *const_str_digest_9b542c74524ab1ce55744192ddfa1543;
extern PyObject *const_tuple_str_plain_get_docs_version_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_digest_008d53cedae29312ed070a5095766aa9;
extern PyObject *const_str_digest_61be801c284be1478447e9bda4dd3f75;
extern PyObject *const_int_pos_1;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain___new__;
extern PyObject *const_str_digest_ed0b1506d7d0837d1fa525619fe67bf0;
static PyObject *const_str_digest_6400f9d952ebb3c1ffdc2aa51f4c9dc6;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_deconstruct;
extern PyObject *const_str_plain_module_name;
extern PyObject *const_str_plain_importlib;
extern PyObject *const_str_plain_pop;
extern PyObject *const_str_plain_args;
static PyObject *const_tuple_bccf8d8332081fb7aec21407b29bb6e8_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_decorator;
extern PyObject *const_str_plain_path;
static PyObject *const_str_digest_1df90b082a8b1b47368f3810bb1c6bfe;
extern PyObject *const_str_plain__constructor_args;
static PyObject *const_tuple_str_plain_klass_str_plain___new___str_plain_deconstruct_tuple;
static PyObject *const_str_digest_819f884210911a4c4ed99c2a43437dba;
static PyObject *const_tuple_e1b55ddd7bf68d51ce213114ec3c7489_tuple;
static PyObject *const_tuple_395540d84969e6d2f8a5968ec8f9368f_tuple;
extern PyObject *const_str_plain_module;
extern PyObject *const_str_plain_deconstructible;
extern PyObject *const_tuple_str_dot_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_digest_467c9722f19d9d40d148689532cdc0b1;
extern PyObject *const_str_digest_3114c7847ed30512509505e34fc4f6e0;
extern PyObject *const_str_plain_cls;
extern PyObject *const_tuple_str_plain_import_module_tuple;
extern PyObject *const_str_plain_obj;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_get_docs_version;
static PyObject *const_tuple_str_plain_path_none_tuple;
static PyObject *const_str_digest_e0baf0a0d8dd4eccc9a420ee3733dfb1;
extern PyObject *const_str_plain_rpartition;
static PyObject *const_str_digest_573a6142194d93c8748cbe46801a1514;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_klass;
static PyObject *const_str_digest_087edf77d58306004d53b8b2cbc3e6bd;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_dot;
extern PyObject *const_str_plain__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_9b542c74524ab1ce55744192ddfa1543 = UNSTREAM_STRING( &constant_bin[ 1162485 ], 122, 0 );
    const_str_digest_008d53cedae29312ed070a5095766aa9 = UNSTREAM_STRING( &constant_bin[ 1162607 ], 51, 0 );
    const_str_digest_6400f9d952ebb3c1ffdc2aa51f4c9dc6 = UNSTREAM_STRING( &constant_bin[ 1162658 ], 27, 0 );
    const_tuple_bccf8d8332081fb7aec21407b29bb6e8_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_bccf8d8332081fb7aec21407b29bb6e8_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_bccf8d8332081fb7aec21407b29bb6e8_tuple, 1, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_bccf8d8332081fb7aec21407b29bb6e8_tuple, 2, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_bccf8d8332081fb7aec21407b29bb6e8_tuple, 3, const_str_plain_decorator ); Py_INCREF( const_str_plain_decorator );
    const_str_digest_1df90b082a8b1b47368f3810bb1c6bfe = UNSTREAM_STRING( &constant_bin[ 1162607 ], 34, 0 );
    const_tuple_str_plain_klass_str_plain___new___str_plain_deconstruct_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_klass_str_plain___new___str_plain_deconstruct_tuple, 0, const_str_plain_klass ); Py_INCREF( const_str_plain_klass );
    PyTuple_SET_ITEM( const_tuple_str_plain_klass_str_plain___new___str_plain_deconstruct_tuple, 1, const_str_plain___new__ ); Py_INCREF( const_str_plain___new__ );
    PyTuple_SET_ITEM( const_tuple_str_plain_klass_str_plain___new___str_plain_deconstruct_tuple, 2, const_str_plain_deconstruct ); Py_INCREF( const_str_plain_deconstruct );
    const_str_digest_819f884210911a4c4ed99c2a43437dba = UNSTREAM_STRING( &constant_bin[ 1162685 ], 265, 0 );
    const_tuple_e1b55ddd7bf68d51ce213114ec3c7489_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_e1b55ddd7bf68d51ce213114ec3c7489_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_e1b55ddd7bf68d51ce213114ec3c7489_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_e1b55ddd7bf68d51ce213114ec3c7489_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_e1b55ddd7bf68d51ce213114ec3c7489_tuple, 3, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    PyTuple_SET_ITEM( const_tuple_e1b55ddd7bf68d51ce213114ec3c7489_tuple, 4, const_str_plain_klass ); Py_INCREF( const_str_plain_klass );
    const_tuple_395540d84969e6d2f8a5968ec8f9368f_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_395540d84969e6d2f8a5968ec8f9368f_tuple, 0, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    PyTuple_SET_ITEM( const_tuple_395540d84969e6d2f8a5968ec8f9368f_tuple, 1, const_str_plain_module_name ); Py_INCREF( const_str_plain_module_name );
    PyTuple_SET_ITEM( const_tuple_395540d84969e6d2f8a5968ec8f9368f_tuple, 2, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    PyTuple_SET_ITEM( const_tuple_395540d84969e6d2f8a5968ec8f9368f_tuple, 3, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_395540d84969e6d2f8a5968ec8f9368f_tuple, 4, const_str_plain_module ); Py_INCREF( const_str_plain_module );
    PyTuple_SET_ITEM( const_tuple_395540d84969e6d2f8a5968ec8f9368f_tuple, 5, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    const_tuple_str_plain_path_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_path_none_tuple, 0, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_str_plain_path_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_e0baf0a0d8dd4eccc9a420ee3733dfb1 = UNSTREAM_STRING( &constant_bin[ 1162950 ], 55, 0 );
    const_str_digest_573a6142194d93c8748cbe46801a1514 = UNSTREAM_STRING( &constant_bin[ 1163005 ], 33, 0 );
    const_str_digest_087edf77d58306004d53b8b2cbc3e6bd = UNSTREAM_STRING( &constant_bin[ 1163038 ], 172, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$utils$deconstruct( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_58156d54b2a7c8ee09912b8f0cc8700d;
static PyCodeObject *codeobj_f9a898dd516d43c651afd30372d71895;
static PyCodeObject *codeobj_0190158c8cfaeb47e782dd89f166c0e3;
static PyCodeObject *codeobj_ed49103103bf2ebaa5fe47390ad0715d;
static PyCodeObject *codeobj_3fdaf389fc61e6361a08698592ccc4be;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_6400f9d952ebb3c1ffdc2aa51f4c9dc6 );
    codeobj_58156d54b2a7c8ee09912b8f0cc8700d = MAKE_CODEOBJ( module_filename_obj, const_str_digest_573a6142194d93c8748cbe46801a1514, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_f9a898dd516d43c651afd30372d71895 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___new__, 16, const_tuple_e1b55ddd7bf68d51ce213114ec3c7489_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS );
    codeobj_0190158c8cfaeb47e782dd89f166c0e3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_deconstruct, 22, const_tuple_395540d84969e6d2f8a5968ec8f9368f_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_ed49103103bf2ebaa5fe47390ad0715d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_deconstructible, 6, const_tuple_bccf8d8332081fb7aec21407b29bb6e8_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_3fdaf389fc61e6361a08698592ccc4be = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decorator, 15, const_tuple_str_plain_klass_str_plain___new___str_plain_deconstruct_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_7_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_django$utils$deconstruct$$$function_1_deconstructible(  );


static PyObject *MAKE_FUNCTION_django$utils$deconstruct$$$function_1_deconstructible$$$function_1_decorator( struct Nuitka_CellObject *closure_path );


static PyObject *MAKE_FUNCTION_django$utils$deconstruct$$$function_1_deconstructible$$$function_1_decorator$$$function_1___new__( struct Nuitka_CellObject *closure_klass );


static PyObject *MAKE_FUNCTION_django$utils$deconstruct$$$function_1_deconstructible$$$function_1_decorator$$$function_2_deconstruct( struct Nuitka_CellObject *closure_path );


// The module function definitions.
static PyObject *impl_django$utils$deconstruct$$$function_1_deconstructible( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    struct Nuitka_CellObject *var_path = PyCell_EMPTY();
    PyObject *var_decorator = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_ed49103103bf2ebaa5fe47390ad0715d = NULL;

    struct Nuitka_FrameObject *frame_ed49103103bf2ebaa5fe47390ad0715d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ed49103103bf2ebaa5fe47390ad0715d, codeobj_ed49103103bf2ebaa5fe47390ad0715d, module_django$utils$deconstruct, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ed49103103bf2ebaa5fe47390ad0715d = cache_frame_ed49103103bf2ebaa5fe47390ad0715d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ed49103103bf2ebaa5fe47390ad0715d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ed49103103bf2ebaa5fe47390ad0715d ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_ed49103103bf2ebaa5fe47390ad0715d->m_frame.f_lineno = 13;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_path_none_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        type_description_1 = "ooco";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = PyCell_GET( var_path );
        PyCell_SET( var_path, tmp_assign_source_1 );
        Py_XDECREF( old );
    }

    tmp_assign_source_2 = MAKE_FUNCTION_django$utils$deconstruct$$$function_1_deconstructible$$$function_1_decorator( var_path );
    assert( var_decorator == NULL );
    var_decorator = tmp_assign_source_2;

    tmp_cond_value_1 = par_args;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        type_description_1 = "ooco";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "ooco";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_return_value = var_decorator;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "decorator" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        type_description_1 = "ooco";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_dircall_arg1_1 = var_decorator;

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "decorator" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "ooco";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = par_args;

    if ( tmp_dircall_arg2_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "ooco";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg3_1 = par_kwargs;

    if ( tmp_dircall_arg3_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "ooco";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_7_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "ooco";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed49103103bf2ebaa5fe47390ad0715d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed49103103bf2ebaa5fe47390ad0715d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed49103103bf2ebaa5fe47390ad0715d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ed49103103bf2ebaa5fe47390ad0715d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ed49103103bf2ebaa5fe47390ad0715d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ed49103103bf2ebaa5fe47390ad0715d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ed49103103bf2ebaa5fe47390ad0715d,
        type_description_1,
        par_args,
        par_kwargs,
        var_path,
        var_decorator
    );


    // Release cached frame.
    if ( frame_ed49103103bf2ebaa5fe47390ad0715d == cache_frame_ed49103103bf2ebaa5fe47390ad0715d )
    {
        Py_DECREF( frame_ed49103103bf2ebaa5fe47390ad0715d );
    }
    cache_frame_ed49103103bf2ebaa5fe47390ad0715d = NULL;

    assertFrameObject( frame_ed49103103bf2ebaa5fe47390ad0715d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$deconstruct$$$function_1_deconstructible );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_path );
    Py_DECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_decorator );
    var_decorator = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_path );
    Py_DECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_decorator );
    var_decorator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$deconstruct$$$function_1_deconstructible );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_django$utils$deconstruct$$$function_1_deconstructible$$$function_1_decorator( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_klass = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *var___new__ = NULL;
    PyObject *var_deconstruct = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_staticmethod_arg_1;
    static struct Nuitka_FrameObject *cache_frame_3fdaf389fc61e6361a08698592ccc4be = NULL;

    struct Nuitka_FrameObject *frame_3fdaf389fc61e6361a08698592ccc4be;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = MAKE_FUNCTION_django$utils$deconstruct$$$function_1_deconstructible$$$function_1_decorator$$$function_1___new__( par_klass );
    assert( var___new__ == NULL );
    var___new__ = tmp_assign_source_1;

    tmp_assign_source_2 = MAKE_FUNCTION_django$utils$deconstruct$$$function_1_deconstructible$$$function_1_decorator$$$function_2_deconstruct( self->m_closure[0] );
    assert( var_deconstruct == NULL );
    var_deconstruct = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3fdaf389fc61e6361a08698592ccc4be, codeobj_3fdaf389fc61e6361a08698592ccc4be, module_django$utils$deconstruct, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3fdaf389fc61e6361a08698592ccc4be = cache_frame_3fdaf389fc61e6361a08698592ccc4be;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3fdaf389fc61e6361a08698592ccc4be );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3fdaf389fc61e6361a08698592ccc4be ) == 2 ); // Frame stack

    // Framed code:
    tmp_staticmethod_arg_1 = var___new__;

    CHECK_OBJECT( tmp_staticmethod_arg_1 );
    tmp_assattr_name_1 = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "coo";
        goto frame_exception_exit_1;
    }
    if ( par_klass == NULL )
    {
        tmp_assattr_target_1 = NULL;
    }
    else
    {
        tmp_assattr_target_1 = PyCell_GET( par_klass );
    }

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "klass" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        type_description_1 = "coo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___new__, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 50;
        type_description_1 = "coo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_assattr_name_2 = var_deconstruct;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "deconstruct" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "coo";
        goto frame_exception_exit_1;
    }

    if ( par_klass == NULL )
    {
        tmp_assattr_target_2 = NULL;
    }
    else
    {
        tmp_assattr_target_2 = PyCell_GET( par_klass );
    }

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "klass" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "coo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_deconstruct, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "coo";
        goto frame_exception_exit_1;
    }
    if ( par_klass == NULL )
    {
        tmp_return_value = NULL;
    }
    else
    {
        tmp_return_value = PyCell_GET( par_klass );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "klass" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "coo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fdaf389fc61e6361a08698592ccc4be );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fdaf389fc61e6361a08698592ccc4be );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fdaf389fc61e6361a08698592ccc4be );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3fdaf389fc61e6361a08698592ccc4be, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3fdaf389fc61e6361a08698592ccc4be->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3fdaf389fc61e6361a08698592ccc4be, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3fdaf389fc61e6361a08698592ccc4be,
        type_description_1,
        par_klass,
        var___new__,
        var_deconstruct
    );


    // Release cached frame.
    if ( frame_3fdaf389fc61e6361a08698592ccc4be == cache_frame_3fdaf389fc61e6361a08698592ccc4be )
    {
        Py_DECREF( frame_3fdaf389fc61e6361a08698592ccc4be );
    }
    cache_frame_3fdaf389fc61e6361a08698592ccc4be = NULL;

    assertFrameObject( frame_3fdaf389fc61e6361a08698592ccc4be );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$deconstruct$$$function_1_deconstructible$$$function_1_decorator );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_klass );
    Py_DECREF( par_klass );
    par_klass = NULL;

    Py_XDECREF( var___new__ );
    var___new__ = NULL;

    Py_XDECREF( var_deconstruct );
    var_deconstruct = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_klass );
    Py_DECREF( par_klass );
    par_klass = NULL;

    Py_XDECREF( var___new__ );
    var___new__ = NULL;

    Py_XDECREF( var_deconstruct );
    var_deconstruct = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$deconstruct$$$function_1_deconstructible$$$function_1_decorator );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_django$utils$deconstruct$$$function_1_deconstructible$$$function_1_decorator$$$function_1___new__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_obj = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_object_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_name_1;
    static struct Nuitka_FrameObject *cache_frame_f9a898dd516d43c651afd30372d71895 = NULL;

    struct Nuitka_FrameObject *frame_f9a898dd516d43c651afd30372d71895;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f9a898dd516d43c651afd30372d71895, codeobj_f9a898dd516d43c651afd30372d71895, module_django$utils$deconstruct, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f9a898dd516d43c651afd30372d71895 = cache_frame_f9a898dd516d43c651afd30372d71895;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f9a898dd516d43c651afd30372d71895 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f9a898dd516d43c651afd30372d71895 ) == 2 ); // Frame stack

    // Framed code:
    if ( self->m_closure[0] == NULL )
    {
        tmp_type_name_1 = NULL;
    }
    else
    {
        tmp_type_name_1 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "klass" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 18;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_cls;

    CHECK_OBJECT( tmp_object_name_1 );
    tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___new__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_cls;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 18;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }

    frame_f9a898dd516d43c651afd30372d71895->m_frame.f_lineno = 18;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }
    assert( var_obj == NULL );
    var_obj = tmp_assign_source_1;

    tmp_assattr_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_args;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 19;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assattr_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_kwargs;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 19;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assattr_name_1, 1, tmp_tuple_element_1 );
    tmp_assattr_target_1 = var_obj;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__constructor_args, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 19;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_return_value = var_obj;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "obj" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 20;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f9a898dd516d43c651afd30372d71895 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f9a898dd516d43c651afd30372d71895 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f9a898dd516d43c651afd30372d71895 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f9a898dd516d43c651afd30372d71895, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f9a898dd516d43c651afd30372d71895->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f9a898dd516d43c651afd30372d71895, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f9a898dd516d43c651afd30372d71895,
        type_description_1,
        par_cls,
        par_args,
        par_kwargs,
        var_obj,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_f9a898dd516d43c651afd30372d71895 == cache_frame_f9a898dd516d43c651afd30372d71895 )
    {
        Py_DECREF( frame_f9a898dd516d43c651afd30372d71895 );
    }
    cache_frame_f9a898dd516d43c651afd30372d71895 = NULL;

    assertFrameObject( frame_f9a898dd516d43c651afd30372d71895 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$deconstruct$$$function_1_deconstructible$$$function_1_decorator$$$function_1___new__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_obj );
    var_obj = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_obj );
    var_obj = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$deconstruct$$$function_1_deconstructible$$$function_1_decorator$$$function_1___new__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_django$utils$deconstruct$$$function_1_deconstructible$$$function_1_decorator$$$function_2_deconstruct( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[ 0 ];
    PyObject *var_module_name = NULL;
    PyObject *var__ = NULL;
    PyObject *var_name = NULL;
    PyObject *var_module = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_make_exception_arg_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    static struct Nuitka_FrameObject *cache_frame_0190158c8cfaeb47e782dd89f166c0e3 = NULL;

    struct Nuitka_FrameObject *frame_0190158c8cfaeb47e782dd89f166c0e3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0190158c8cfaeb47e782dd89f166c0e3, codeobj_0190158c8cfaeb47e782dd89f166c0e3, module_django$utils$deconstruct, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0190158c8cfaeb47e782dd89f166c0e3 = cache_frame_0190158c8cfaeb47e782dd89f166c0e3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0190158c8cfaeb47e782dd89f166c0e3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0190158c8cfaeb47e782dd89f166c0e3 ) == 2 ); // Frame stack

    // Framed code:
    if ( self->m_closure[0] == NULL )
    {
        tmp_cond_value_1 = NULL;
    }
    else
    {
        tmp_cond_value_1 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "path" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 28;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    // Tried code:
    if ( self->m_closure[0] == NULL )
    {
        tmp_called_instance_1 = NULL;
    }
    else
    {
        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "path" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        type_description_1 = "oooooc";
        goto try_except_handler_2;
    }

    frame_0190158c8cfaeb47e782dd89f166c0e3->m_frame.f_lineno = 29;
    tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_rpartition, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "oooooc";
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "oooooc";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "oooooc";
        exception_lineno = 29;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
    if ( tmp_assign_source_3 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "oooooc";
        exception_lineno = 29;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
    if ( tmp_assign_source_4 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "oooooc";
        exception_lineno = 29;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_iterator_name_1 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "oooooc";
                exception_lineno = 29;
                goto try_except_handler_3;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooooc";
        exception_lineno = 29;
        goto try_except_handler_3;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_module_name == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_module_name = tmp_assign_source_5;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_6 );
    assert( var__ == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var__ = tmp_assign_source_6;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;

    CHECK_OBJECT( tmp_assign_source_7 );
    assert( var_name == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_name = tmp_assign_source_7;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_1 = par_obj;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___module__ );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }
    assert( var_module_name == NULL );
    var_module_name = tmp_assign_source_8;

    tmp_source_name_3 = par_obj;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "obj" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }
    assert( var_name == NULL );
    var_name = tmp_assign_source_9;

    branch_end_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$utils$deconstruct, (Nuitka_StringObject *)const_str_plain_import_module );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_import_module );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "import_module" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = var_module_name;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "module_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }

    frame_0190158c8cfaeb47e782dd89f166c0e3->m_frame.f_lineno = 34;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }
    assert( var_module == NULL );
    var_module = tmp_assign_source_10;

    tmp_hasattr_source_1 = var_module;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = var_name;

    if ( tmp_hasattr_attr_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }

    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_left_name_1 = const_str_digest_819f884210911a4c4ed99c2a43437dba;
    tmp_right_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = var_name;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_module_name;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "module_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$utils$deconstruct, (Nuitka_StringObject *)const_str_plain_get_docs_version );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_docs_version );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_docs_version" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }

    frame_0190158c8cfaeb47e782dd89f166c0e3->m_frame.f_lineno = 43;
    tmp_tuple_element_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 43;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 2, tmp_tuple_element_1 );
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }
    frame_0190158c8cfaeb47e782dd89f166c0e3->m_frame.f_lineno = 36;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 36;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooc";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_return_value = PyTuple_New( 3 );
    if ( self->m_closure[0] == NULL )
    {
        tmp_or_left_value_1 = NULL;
    }
    else
    {
        tmp_or_left_value_1 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_or_left_value_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "path" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }

    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 45;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_left_name_2 = const_str_digest_3114c7847ed30512509505e34fc4f6e0;
    tmp_right_name_2 = PyTuple_New( 2 );
    tmp_source_name_5 = par_obj;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "obj" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_5 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 45;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___module__ );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 45;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_name;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_3 );
    tmp_or_right_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 45;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_2 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_tuple_element_2 = tmp_or_left_value_1;
    or_end_1:;
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
    tmp_source_name_6 = par_obj;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "obj" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__constructor_args );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 46;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 46;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
    tmp_source_name_7 = par_obj;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "obj" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__constructor_args );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 47;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_pos_1;
    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 47;
        type_description_1 = "oooooc";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_2 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0190158c8cfaeb47e782dd89f166c0e3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0190158c8cfaeb47e782dd89f166c0e3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0190158c8cfaeb47e782dd89f166c0e3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0190158c8cfaeb47e782dd89f166c0e3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0190158c8cfaeb47e782dd89f166c0e3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0190158c8cfaeb47e782dd89f166c0e3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0190158c8cfaeb47e782dd89f166c0e3,
        type_description_1,
        par_obj,
        var_module_name,
        var__,
        var_name,
        var_module,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_0190158c8cfaeb47e782dd89f166c0e3 == cache_frame_0190158c8cfaeb47e782dd89f166c0e3 )
    {
        Py_DECREF( frame_0190158c8cfaeb47e782dd89f166c0e3 );
    }
    cache_frame_0190158c8cfaeb47e782dd89f166c0e3 = NULL;

    assertFrameObject( frame_0190158c8cfaeb47e782dd89f166c0e3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$utils$deconstruct$$$function_1_deconstructible$$$function_1_decorator$$$function_2_deconstruct );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_obj );
    par_obj = NULL;

    Py_XDECREF( var_module_name );
    var_module_name = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_module );
    var_module = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_obj );
    par_obj = NULL;

    Py_XDECREF( var_module_name );
    var_module_name = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_module );
    var_module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$utils$deconstruct$$$function_1_deconstructible$$$function_1_decorator$$$function_2_deconstruct );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_django$utils$deconstruct$$$function_1_deconstructible(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$deconstruct$$$function_1_deconstructible,
        const_str_plain_deconstructible,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ed49103103bf2ebaa5fe47390ad0715d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$deconstruct,
        const_str_digest_087edf77d58306004d53b8b2cbc3e6bd,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$deconstruct$$$function_1_deconstructible$$$function_1_decorator( struct Nuitka_CellObject *closure_path )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$deconstruct$$$function_1_deconstructible$$$function_1_decorator,
        const_str_plain_decorator,
#if PYTHON_VERSION >= 330
        const_str_digest_1df90b082a8b1b47368f3810bb1c6bfe,
#endif
        codeobj_3fdaf389fc61e6361a08698592ccc4be,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$deconstruct,
        Py_None,
        1
    );

result->m_closure[0] = closure_path;
Py_INCREF( result->m_closure[0] );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$deconstruct$$$function_1_deconstructible$$$function_1_decorator$$$function_1___new__( struct Nuitka_CellObject *closure_klass )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$deconstruct$$$function_1_deconstructible$$$function_1_decorator$$$function_1___new__,
        const_str_plain___new__,
#if PYTHON_VERSION >= 330
        const_str_digest_008d53cedae29312ed070a5095766aa9,
#endif
        codeobj_f9a898dd516d43c651afd30372d71895,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$deconstruct,
        Py_None,
        1
    );

result->m_closure[0] = closure_klass;
Py_INCREF( result->m_closure[0] );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$utils$deconstruct$$$function_1_deconstructible$$$function_1_decorator$$$function_2_deconstruct( struct Nuitka_CellObject *closure_path )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$utils$deconstruct$$$function_1_deconstructible$$$function_1_decorator$$$function_2_deconstruct,
        const_str_plain_deconstruct,
#if PYTHON_VERSION >= 330
        const_str_digest_e0baf0a0d8dd4eccc9a420ee3733dfb1,
#endif
        codeobj_0190158c8cfaeb47e782dd89f166c0e3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$utils$deconstruct,
        const_str_digest_9b542c74524ab1ce55744192ddfa1543,
        1
    );

result->m_closure[0] = closure_path;
Py_INCREF( result->m_closure[0] );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$utils$deconstruct =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.deconstruct",   /* m_name */
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

MOD_INIT_DECL( django$utils$deconstruct )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$utils$deconstruct );
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
    puts("django.utils.deconstruct: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.utils.deconstruct: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$utils$deconstruct" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$utils$deconstruct = Py_InitModule4(
        "django.utils.deconstruct",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$utils$deconstruct = PyModule_Create( &mdef_django$utils$deconstruct );
#endif

    moduledict_django$utils$deconstruct = MODULE_DICT( module_django$utils$deconstruct );

    CHECK_OBJECT( module_django$utils$deconstruct );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_61be801c284be1478447e9bda4dd3f75, module_django$utils$deconstruct );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$utils$deconstruct, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$utils$deconstruct, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$utils$deconstruct, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_called_name_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    struct Nuitka_FrameObject *frame_58156d54b2a7c8ee09912b8f0cc8700d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$utils$deconstruct, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$utils$deconstruct, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$utils$deconstruct, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_58156d54b2a7c8ee09912b8f0cc8700d = MAKE_MODULE_FRAME( codeobj_58156d54b2a7c8ee09912b8f0cc8700d, module_django$utils$deconstruct );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_58156d54b2a7c8ee09912b8f0cc8700d );
    assert( Py_REFCNT( frame_58156d54b2a7c8ee09912b8f0cc8700d ) == 2 );

    // Framed code:
    frame_58156d54b2a7c8ee09912b8f0cc8700d->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("importlib._bootstrap");
        if (likely( module != NULL ))
        {
            tmp_called_name_1 = PyObject_GetAttr( module, const_str_plain_ModuleSpec );
        }
        else
        {
            tmp_called_name_1 = NULL;
        }
    }

    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_61be801c284be1478447e9bda4dd3f75;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_58156d54b2a7c8ee09912b8f0cc8700d->m_frame.f_lineno = 1;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$deconstruct, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$utils$deconstruct, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_467c9722f19d9d40d148689532cdc0b1;
    UPDATE_STRING_DICT0( moduledict_django$utils$deconstruct, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_plain_importlib;
    tmp_globals_name_1 = (PyObject *)moduledict_django$utils$deconstruct;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_import_module_tuple;
    tmp_level_name_1 = const_int_0;
    frame_58156d54b2a7c8ee09912b8f0cc8700d->m_frame.f_lineno = 1;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_import_module );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$deconstruct, (Nuitka_StringObject *)const_str_plain_import_module, tmp_assign_source_7 );
    tmp_name_name_2 = const_str_digest_ed0b1506d7d0837d1fa525619fe67bf0;
    tmp_globals_name_2 = (PyObject *)moduledict_django$utils$deconstruct;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_get_docs_version_tuple;
    tmp_level_name_2 = const_int_0;
    frame_58156d54b2a7c8ee09912b8f0cc8700d->m_frame.f_lineno = 3;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_get_docs_version );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$utils$deconstruct, (Nuitka_StringObject *)const_str_plain_get_docs_version, tmp_assign_source_8 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_58156d54b2a7c8ee09912b8f0cc8700d );
#endif
    popFrameStack();

    assertFrameObject( frame_58156d54b2a7c8ee09912b8f0cc8700d );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_58156d54b2a7c8ee09912b8f0cc8700d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_58156d54b2a7c8ee09912b8f0cc8700d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_58156d54b2a7c8ee09912b8f0cc8700d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_58156d54b2a7c8ee09912b8f0cc8700d, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_9 = MAKE_FUNCTION_django$utils$deconstruct$$$function_1_deconstructible(  );
    UPDATE_STRING_DICT1( moduledict_django$utils$deconstruct, (Nuitka_StringObject *)const_str_plain_deconstructible, tmp_assign_source_9 );

    return MOD_RETURN_VALUE( module_django$utils$deconstruct );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
