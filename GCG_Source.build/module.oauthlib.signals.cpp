/* Generated code for Python source for module 'oauthlib.signals'
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

/* The _module_oauthlib$signals is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_oauthlib$signals;
PyDictObject *moduledict_oauthlib$signals;

/* The module constants used, if any. */
static PyObject *const_str_digest_6c1e032c83a86e7829470f9cfce628ee;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_plain_blinker;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_temporarily_connected_to;
extern PyObject *const_str_plain_kw;
extern PyObject *const_str_plain_doc;
static PyObject *const_str_digest_ebbd1c8b5469cd8af367f7dfa1acaeac;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_oauthlib;
static PyObject *const_str_plain__signals;
extern PyObject *const_dict_empty;
static PyObject *const_tuple_str_plain_Namespace_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain__fail;
static PyObject *const_str_plain_receivers_for;
static PyObject *const_tuple_str_plain_a_str_plain_kw_tuple;
extern PyObject *const_str_plain_args;
static PyObject *const_str_digest_a6035213223b590064563e891ba5b637;
extern PyObject *const_int_0;
extern PyObject *const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_tuple;
static PyObject *const_tuple_34e32d92c85cfa7a44bdfb74d600ddc1_tuple;
static PyObject *const_str_plain_connected_to;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_plain_signals_available;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_64815b12503f64365c03af3a2d17ef84;
extern PyObject *const_str_plain_Namespace;
extern PyObject *const_str_digest_807c5037194adfc51b55727d09f27c9b;
extern PyObject *const_str_plain_a;
static PyObject *const_str_plain__FakeSignal;
static PyObject *const_str_plain_has_receivers_for;
static PyObject *const_str_digest_8f5f1a92d623e57b010b309a4861ed6a;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_signal;
extern PyObject *const_str_plain_scope_changed;
static PyObject *const_str_digest_91f15a7ef2020ac07b214fed43282c4d;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_digest_9f654810c0c29172915cc13eec221d63;
static PyObject *const_tuple_str_plain_self_str_plain_name_str_plain_doc_tuple;
extern PyObject *const_str_plain_disconnect;
static PyObject *const_str_digest_0914621779f8bbf6663e059ad7c5f5f5;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_angle_lambda;
static PyObject *const_tuple_str_digest_0914621779f8bbf6663e059ad7c5f5f5_tuple;
extern PyObject *const_str_plain_name;
static PyObject *const_str_digest_286f153dd06a348e557da77e4a94d5a2;
extern PyObject *const_str_plain_send;
extern PyObject *const_str_plain_connect;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_digest_d402256a9aa3cc2846bc14b122ebe5c2;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_6c1e032c83a86e7829470f9cfce628ee = UNSTREAM_STRING( &constant_bin[ 1763355 ], 274, 0 );
    const_str_plain_blinker = UNSTREAM_STRING( &constant_bin[ 1763358 ], 7, 1 );
    const_str_plain_temporarily_connected_to = UNSTREAM_STRING( &constant_bin[ 1763629 ], 24, 1 );
    const_str_digest_ebbd1c8b5469cd8af367f7dfa1acaeac = UNSTREAM_STRING( &constant_bin[ 1763653 ], 79, 0 );
    const_str_plain__signals = UNSTREAM_STRING( &constant_bin[ 763620 ], 8, 1 );
    const_tuple_str_plain_Namespace_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Namespace_tuple, 0, const_str_plain_Namespace ); Py_INCREF( const_str_plain_Namespace );
    const_str_plain__fail = UNSTREAM_STRING( &constant_bin[ 741248 ], 5, 1 );
    const_str_plain_receivers_for = UNSTREAM_STRING( &constant_bin[ 1763732 ], 13, 1 );
    const_tuple_str_plain_a_str_plain_kw_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_kw_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_kw_tuple, 1, const_str_plain_kw ); Py_INCREF( const_str_plain_kw );
    const_str_digest_a6035213223b590064563e891ba5b637 = UNSTREAM_STRING( &constant_bin[ 1763745 ], 17, 0 );
    const_tuple_34e32d92c85cfa7a44bdfb74d600ddc1_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_34e32d92c85cfa7a44bdfb74d600ddc1_tuple, 0, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    PyTuple_SET_ITEM( const_tuple_34e32d92c85cfa7a44bdfb74d600ddc1_tuple, 1, const_str_plain___qualname__ ); Py_INCREF( const_str_plain___qualname__ );
    PyTuple_SET_ITEM( const_tuple_34e32d92c85cfa7a44bdfb74d600ddc1_tuple, 2, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_34e32d92c85cfa7a44bdfb74d600ddc1_tuple, 3, const_str_plain___doc__ ); Py_INCREF( const_str_plain___doc__ );
    PyTuple_SET_ITEM( const_tuple_34e32d92c85cfa7a44bdfb74d600ddc1_tuple, 4, const_str_plain___init__ ); Py_INCREF( const_str_plain___init__ );
    PyTuple_SET_ITEM( const_tuple_34e32d92c85cfa7a44bdfb74d600ddc1_tuple, 5, const_str_plain__fail ); Py_INCREF( const_str_plain__fail );
    PyTuple_SET_ITEM( const_tuple_34e32d92c85cfa7a44bdfb74d600ddc1_tuple, 6, const_str_plain_send ); Py_INCREF( const_str_plain_send );
    PyTuple_SET_ITEM( const_tuple_34e32d92c85cfa7a44bdfb74d600ddc1_tuple, 7, const_str_plain_connect ); Py_INCREF( const_str_plain_connect );
    PyTuple_SET_ITEM( const_tuple_34e32d92c85cfa7a44bdfb74d600ddc1_tuple, 8, const_str_plain_disconnect ); Py_INCREF( const_str_plain_disconnect );
    const_str_plain_has_receivers_for = UNSTREAM_STRING( &constant_bin[ 1763762 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_34e32d92c85cfa7a44bdfb74d600ddc1_tuple, 9, const_str_plain_has_receivers_for ); Py_INCREF( const_str_plain_has_receivers_for );
    PyTuple_SET_ITEM( const_tuple_34e32d92c85cfa7a44bdfb74d600ddc1_tuple, 10, const_str_plain_receivers_for ); Py_INCREF( const_str_plain_receivers_for );
    PyTuple_SET_ITEM( const_tuple_34e32d92c85cfa7a44bdfb74d600ddc1_tuple, 11, const_str_plain_temporarily_connected_to ); Py_INCREF( const_str_plain_temporarily_connected_to );
    const_str_plain_connected_to = UNSTREAM_STRING( &constant_bin[ 1763641 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_34e32d92c85cfa7a44bdfb74d600ddc1_tuple, 12, const_str_plain_connected_to ); Py_INCREF( const_str_plain_connected_to );
    const_str_plain_signals_available = UNSTREAM_STRING( &constant_bin[ 1763779 ], 17, 1 );
    const_str_digest_64815b12503f64365c03af3a2d17ef84 = UNSTREAM_STRING( &constant_bin[ 1763796 ], 16, 0 );
    const_str_plain__FakeSignal = UNSTREAM_STRING( &constant_bin[ 1763745 ], 11, 1 );
    const_str_digest_8f5f1a92d623e57b010b309a4861ed6a = UNSTREAM_STRING( &constant_bin[ 1763812 ], 19, 0 );
    const_str_digest_91f15a7ef2020ac07b214fed43282c4d = UNSTREAM_STRING( &constant_bin[ 1763831 ], 25, 0 );
    const_str_digest_9f654810c0c29172915cc13eec221d63 = UNSTREAM_STRING( &constant_bin[ 1763856 ], 207, 0 );
    const_tuple_str_plain_self_str_plain_name_str_plain_doc_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_name_str_plain_doc_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_name_str_plain_doc_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_name_str_plain_doc_tuple, 2, const_str_plain_doc ); Py_INCREF( const_str_plain_doc );
    const_str_digest_0914621779f8bbf6663e059ad7c5f5f5 = UNSTREAM_STRING( &constant_bin[ 1764063 ], 13, 0 );
    const_tuple_str_digest_0914621779f8bbf6663e059ad7c5f5f5_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_0914621779f8bbf6663e059ad7c5f5f5_tuple, 0, const_str_digest_0914621779f8bbf6663e059ad7c5f5f5 ); Py_INCREF( const_str_digest_0914621779f8bbf6663e059ad7c5f5f5 );
    const_str_digest_286f153dd06a348e557da77e4a94d5a2 = UNSTREAM_STRING( &constant_bin[ 1764076 ], 20, 0 );
    const_str_digest_d402256a9aa3cc2846bc14b122ebe5c2 = UNSTREAM_STRING( &constant_bin[ 1764096 ], 20, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_oauthlib$signals( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_6c9f2079763d94e219f6b47e8984705d;
static PyCodeObject *codeobj_0e8334ea0e29e03503ae1d32b6bbb472;
static PyCodeObject *codeobj_a248f54d6e7e3a3395b37335a6144d1b;
static PyCodeObject *codeobj_0a88e69d34639eb14856a91077a6d466;
static PyCodeObject *codeobj_f7e3f984bc497a30c0b5e1917429815d;
static PyCodeObject *codeobj_8fdcfe4efc76a970cd2bcc6c9df97821;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_8f5f1a92d623e57b010b309a4861ed6a );
    codeobj_6c9f2079763d94e219f6b47e8984705d = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 30, const_tuple_str_plain_a_str_plain_kw_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_0e8334ea0e29e03503ae1d32b6bbb472 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_91f15a7ef2020ac07b214fed43282c4d, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_a248f54d6e7e3a3395b37335a6144d1b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__FakeSignal, 16, const_tuple_34e32d92c85cfa7a44bdfb74d600ddc1_tuple, 0, 0, CO_NOFREE );
    codeobj_0a88e69d34639eb14856a91077a6d466 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 23, const_tuple_str_plain_self_str_plain_name_str_plain_doc_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f7e3f984bc497a30c0b5e1917429815d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fail, 26, const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_8fdcfe4efc76a970cd2bcc6c9df97821 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_signal, 13, const_tuple_str_plain_self_str_plain_name_str_plain_doc_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_oauthlib$signals$$$function_1_signal( PyObject *defaults );


static PyObject *MAKE_FUNCTION_oauthlib$signals$$$function_2___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_oauthlib$signals$$$function_3__fail(  );


static PyObject *MAKE_FUNCTION_oauthlib$signals$$$function_4_lambda(  );


// The module function definitions.
static PyObject *impl_oauthlib$signals$$$function_1_signal( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_doc = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_8fdcfe4efc76a970cd2bcc6c9df97821 = NULL;

    struct Nuitka_FrameObject *frame_8fdcfe4efc76a970cd2bcc6c9df97821;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8fdcfe4efc76a970cd2bcc6c9df97821, codeobj_8fdcfe4efc76a970cd2bcc6c9df97821, module_oauthlib$signals, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8fdcfe4efc76a970cd2bcc6c9df97821 = cache_frame_8fdcfe4efc76a970cd2bcc6c9df97821;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8fdcfe4efc76a970cd2bcc6c9df97821 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8fdcfe4efc76a970cd2bcc6c9df97821 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_oauthlib$signals, (Nuitka_StringObject *)const_str_plain__FakeSignal );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__FakeSignal );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_FakeSignal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 14;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_name;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_doc;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_8fdcfe4efc76a970cd2bcc6c9df97821->m_frame.f_lineno = 14;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8fdcfe4efc76a970cd2bcc6c9df97821 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8fdcfe4efc76a970cd2bcc6c9df97821 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8fdcfe4efc76a970cd2bcc6c9df97821 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8fdcfe4efc76a970cd2bcc6c9df97821, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8fdcfe4efc76a970cd2bcc6c9df97821->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8fdcfe4efc76a970cd2bcc6c9df97821, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8fdcfe4efc76a970cd2bcc6c9df97821,
        type_description_1,
        par_self,
        par_name,
        par_doc
    );


    // Release cached frame.
    if ( frame_8fdcfe4efc76a970cd2bcc6c9df97821 == cache_frame_8fdcfe4efc76a970cd2bcc6c9df97821 )
    {
        Py_DECREF( frame_8fdcfe4efc76a970cd2bcc6c9df97821 );
    }
    cache_frame_8fdcfe4efc76a970cd2bcc6c9df97821 = NULL;

    assertFrameObject( frame_8fdcfe4efc76a970cd2bcc6c9df97821 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauthlib$signals$$$function_1_signal );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( par_doc );
    par_doc = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( par_doc );
    par_doc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( oauthlib$signals$$$function_1_signal );
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


static PyObject *impl_oauthlib$signals$$$function_2___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_doc = python_pars[ 2 ];
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
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_0a88e69d34639eb14856a91077a6d466 = NULL;

    struct Nuitka_FrameObject *frame_0a88e69d34639eb14856a91077a6d466;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0a88e69d34639eb14856a91077a6d466, codeobj_0a88e69d34639eb14856a91077a6d466, module_oauthlib$signals, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0a88e69d34639eb14856a91077a6d466 = cache_frame_0a88e69d34639eb14856a91077a6d466;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0a88e69d34639eb14856a91077a6d466 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0a88e69d34639eb14856a91077a6d466 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_name;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_name, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_doc;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "doc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain___doc__, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0a88e69d34639eb14856a91077a6d466 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0a88e69d34639eb14856a91077a6d466 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0a88e69d34639eb14856a91077a6d466, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0a88e69d34639eb14856a91077a6d466->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0a88e69d34639eb14856a91077a6d466, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0a88e69d34639eb14856a91077a6d466,
        type_description_1,
        par_self,
        par_name,
        par_doc
    );


    // Release cached frame.
    if ( frame_0a88e69d34639eb14856a91077a6d466 == cache_frame_0a88e69d34639eb14856a91077a6d466 )
    {
        Py_DECREF( frame_0a88e69d34639eb14856a91077a6d466 );
    }
    cache_frame_0a88e69d34639eb14856a91077a6d466 = NULL;

    assertFrameObject( frame_0a88e69d34639eb14856a91077a6d466 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauthlib$signals$$$function_2___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( par_doc );
    par_doc = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( par_doc );
    par_doc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( oauthlib$signals$$$function_2___init__ );
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


static PyObject *impl_oauthlib$signals$$$function_3__fail( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    static struct Nuitka_FrameObject *cache_frame_f7e3f984bc497a30c0b5e1917429815d = NULL;

    struct Nuitka_FrameObject *frame_f7e3f984bc497a30c0b5e1917429815d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f7e3f984bc497a30c0b5e1917429815d, codeobj_f7e3f984bc497a30c0b5e1917429815d, module_oauthlib$signals, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f7e3f984bc497a30c0b5e1917429815d = cache_frame_f7e3f984bc497a30c0b5e1917429815d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f7e3f984bc497a30c0b5e1917429815d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f7e3f984bc497a30c0b5e1917429815d ) == 2 ); // Frame stack

    // Framed code:
    tmp_make_exception_arg_1 = const_str_digest_ebbd1c8b5469cd8af367f7dfa1acaeac;
    frame_f7e3f984bc497a30c0b5e1917429815d->m_frame.f_lineno = 27;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 27;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f7e3f984bc497a30c0b5e1917429815d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f7e3f984bc497a30c0b5e1917429815d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f7e3f984bc497a30c0b5e1917429815d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f7e3f984bc497a30c0b5e1917429815d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f7e3f984bc497a30c0b5e1917429815d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f7e3f984bc497a30c0b5e1917429815d,
        type_description_1,
        par_self,
        par_args,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_f7e3f984bc497a30c0b5e1917429815d == cache_frame_f7e3f984bc497a30c0b5e1917429815d )
    {
        Py_DECREF( frame_f7e3f984bc497a30c0b5e1917429815d );
    }
    cache_frame_f7e3f984bc497a30c0b5e1917429815d = NULL;

    assertFrameObject( frame_f7e3f984bc497a30c0b5e1917429815d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauthlib$signals$$$function_3__fail );
    return NULL;
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( oauthlib$signals$$$function_3__fail );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_oauthlib$signals$$$function_4_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_kw = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauthlib$signals$$$function_4_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_kw );
    par_kw = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( oauthlib$signals$$$function_4_lambda );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_oauthlib$signals$$$function_1_signal( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$signals$$$function_1_signal,
        const_str_plain_signal,
#if PYTHON_VERSION >= 330
        const_str_digest_64815b12503f64365c03af3a2d17ef84,
#endif
        codeobj_8fdcfe4efc76a970cd2bcc6c9df97821,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_oauthlib$signals,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$signals$$$function_2___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$signals$$$function_2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_d402256a9aa3cc2846bc14b122ebe5c2,
#endif
        codeobj_0a88e69d34639eb14856a91077a6d466,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_oauthlib$signals,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$signals$$$function_3__fail(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$signals$$$function_3__fail,
        const_str_plain__fail,
#if PYTHON_VERSION >= 330
        const_str_digest_a6035213223b590064563e891ba5b637,
#endif
        codeobj_f7e3f984bc497a30c0b5e1917429815d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_oauthlib$signals,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$signals$$$function_4_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$signals$$$function_4_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        const_str_digest_286f153dd06a348e557da77e4a94d5a2,
#endif
        codeobj_6c9f2079763d94e219f6b47e8984705d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_oauthlib$signals,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_oauthlib$signals =
{
    PyModuleDef_HEAD_INIT,
    "oauthlib.signals",   /* m_name */
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

MOD_INIT_DECL( oauthlib$signals )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_oauthlib$signals );
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
    puts("oauthlib.signals: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("oauthlib.signals: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initoauthlib$signals" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_oauthlib$signals = Py_InitModule4(
        "oauthlib.signals",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_oauthlib$signals = PyModule_Create( &mdef_oauthlib$signals );
#endif

    moduledict_oauthlib$signals = MODULE_DICT( module_oauthlib$signals );

    CHECK_OBJECT( module_oauthlib$signals );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_807c5037194adfc51b55727d09f27c9b, module_oauthlib$signals );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_oauthlib$signals, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_oauthlib$signals, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_oauthlib$signals, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_0_var___qualname__ = NULL;
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var_signal = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_1_var___qualname__ = NULL;
    PyObject *outline_1_var___module__ = NULL;
    PyObject *outline_1_var___doc__ = NULL;
    PyObject *outline_1_var___init__ = NULL;
    PyObject *outline_1_var__fail = NULL;
    PyObject *outline_1_var_send = NULL;
    PyObject *outline_1_var_connect = NULL;
    PyObject *outline_1_var_disconnect = NULL;
    PyObject *outline_1_var_has_receivers_for = NULL;
    PyObject *outline_1_var_receivers_for = NULL;
    PyObject *outline_1_var_temporarily_connected_to = NULL;
    PyObject *outline_1_var_connected_to = NULL;
    PyObject *tmp__FakeSignal$assign_unpack_1__assign_source = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
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
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    static struct Nuitka_FrameObject *cache_frame_a248f54d6e7e3a3395b37335a6144d1b_2 = NULL;

    struct Nuitka_FrameObject *frame_a248f54d6e7e3a3395b37335a6144d1b_2;

    struct Nuitka_FrameObject *frame_0e8334ea0e29e03503ae1d32b6bbb472;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    // Locals dictionary setup.
PyObject *locals_dict_1 = PyDict_New();

    // Locals dictionary setup.
PyObject *locals_dict_2 = PyDict_New();


    // Module code.
    tmp_assign_source_1 = const_str_digest_9f654810c0c29172915cc13eec221d63;
    UPDATE_STRING_DICT0( moduledict_oauthlib$signals, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_oauthlib$signals, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_oauthlib$signals, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_0e8334ea0e29e03503ae1d32b6bbb472 = MAKE_MODULE_FRAME( codeobj_0e8334ea0e29e03503ae1d32b6bbb472, module_oauthlib$signals );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_0e8334ea0e29e03503ae1d32b6bbb472 );
    assert( Py_REFCNT( frame_0e8334ea0e29e03503ae1d32b6bbb472 ) == 2 );

    // Framed code:
    frame_0e8334ea0e29e03503ae1d32b6bbb472->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_807c5037194adfc51b55727d09f27c9b;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_0e8334ea0e29e03503ae1d32b6bbb472->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_oauthlib$signals, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_oauthlib$signals, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_oauthlib;
    UPDATE_STRING_DICT0( moduledict_oauthlib$signals, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_assign_source_7 = Py_False;
    UPDATE_STRING_DICT0( moduledict_oauthlib$signals, (Nuitka_StringObject *)const_str_plain_signals_available, tmp_assign_source_7 );
    // Tried code:
    tmp_name_name_1 = const_str_plain_blinker;
    tmp_globals_name_1 = (PyObject *)moduledict_oauthlib$signals;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_Namespace_tuple;
    tmp_level_name_1 = const_int_0;
    frame_0e8334ea0e29e03503ae1d32b6bbb472->m_frame.f_lineno = 9;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Namespace );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$signals, (Nuitka_StringObject *)const_str_plain_Namespace, tmp_assign_source_8 );
    tmp_assign_source_9 = Py_True;
    UPDATE_STRING_DICT0( moduledict_oauthlib$signals, (Nuitka_StringObject *)const_str_plain_signals_available, tmp_assign_source_9 );
    goto try_end_1;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_0e8334ea0e29e03503ae1d32b6bbb472, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_0e8334ea0e29e03503ae1d32b6bbb472, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_10 = const_tuple_type_object_tuple;
    assert( tmp_class_creation_1__bases == NULL );
    Py_INCREF( tmp_assign_source_10 );
    tmp_class_creation_1__bases = tmp_assign_source_10;

    tmp_assign_source_11 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_11;

    // Tried code:
    tmp_compare_left_2 = const_str_plain_metaclass;
    tmp_compare_right_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_3;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_3;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_3;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_3;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_12 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 12;

        goto try_except_handler_3;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_12;

    tmp_compare_left_3 = const_str_plain_metaclass;
    tmp_compare_right_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_3;
    }
    branch_no_2:;
    tmp_hasattr_source_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_3;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_source_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___prepare__ );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_3;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_Namespace;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_0e8334ea0e29e03503ae1d32b6bbb472->m_frame.f_lineno = 12;
    tmp_assign_source_13 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_3;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_13 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_13;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_1);
    locals_dict_1 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_15 = const_str_digest_807c5037194adfc51b55727d09f27c9b;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_15 );
    outline_0_var___module__ = tmp_assign_source_15;

    tmp_assign_source_16 = const_str_plain_Namespace;
    assert( outline_0_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_16 );
    outline_0_var___qualname__ = tmp_assign_source_16;

    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_17 = MAKE_FUNCTION_oauthlib$signals$$$function_1_signal( tmp_defaults_1 );
    assert( outline_0_var_signal == NULL );
    outline_0_var_signal = tmp_assign_source_17;

    // Tried code:
    tmp_called_name_3 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_2 = const_str_plain_Namespace;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = locals_dict_1;
    Py_INCREF( tmp_tuple_element_2 );
    if ( outline_0_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain___qualname__,
            outline_0_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain___qualname__
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 12;

        goto try_except_handler_4;
    }
    if ( outline_0_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain___module__,
            outline_0_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain___module__
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 12;

        goto try_except_handler_4;
    }
    if ( outline_0_var_signal != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_signal,
            outline_0_var_signal
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_signal
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_signal
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 12;

        goto try_except_handler_4;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_0e8334ea0e29e03503ae1d32b6bbb472->m_frame.f_lineno = 12;
    tmp_assign_source_18 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_4;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_18;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauthlib$signals );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_4:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    Py_XDECREF( outline_0_var_signal );
    outline_0_var_signal = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    Py_XDECREF( outline_0_var_signal );
    outline_0_var_signal = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( oauthlib$signals );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 12;
    goto try_except_handler_3;
    outline_result_1:;
    tmp_assign_source_14 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_oauthlib$signals, (Nuitka_StringObject *)const_str_plain_Namespace, tmp_assign_source_14 );
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    tmp_assign_source_19 = const_tuple_type_object_tuple;
    assert( tmp_class_creation_2__bases == NULL );
    Py_INCREF( tmp_assign_source_19 );
    tmp_class_creation_2__bases = tmp_assign_source_19;

    tmp_assign_source_20 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_20;

    // Tried code:
    tmp_compare_left_4 = const_str_plain_metaclass;
    tmp_compare_right_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_4 );
    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    assert( !(tmp_cmp_In_3 == -1) );
    if ( tmp_cmp_In_3 == 1 )
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_dict_name_2 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_2 );
    tmp_key_name_2 = const_str_plain_metaclass;
    tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_5;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_cond_value_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_5;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_subscribed_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_0;
    tmp_type_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_type_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_5;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_5;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_5:;
    condexpr_end_4:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_bases_name_2 );
    tmp_assign_source_21 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_2 );

        exception_lineno = 16;

        goto try_except_handler_5;
    }
    Py_DECREF( tmp_metaclass_name_2 );
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_21;

    tmp_compare_left_5 = const_str_plain_metaclass;
    tmp_compare_right_5 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_5 );
    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    assert( !(tmp_cmp_In_4 == -1) );
    if ( tmp_cmp_In_4 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_5;
    }
    branch_no_3:;
    tmp_hasattr_source_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_2 );
    tmp_hasattr_attr_2 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_2, tmp_hasattr_attr_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_5;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    tmp_source_name_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_5;
    }
    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_3 = const_str_plain__FakeSignal;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_3 );
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_0e8334ea0e29e03503ae1d32b6bbb472->m_frame.f_lineno = 16;
    tmp_assign_source_22 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_5;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_22 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_22;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_2);
    locals_dict_2 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_24 = const_str_digest_807c5037194adfc51b55727d09f27c9b;
    assert( outline_1_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_24 );
    outline_1_var___module__ = tmp_assign_source_24;

    tmp_assign_source_25 = const_str_digest_6c1e032c83a86e7829470f9cfce628ee;
    assert( outline_1_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_25 );
    outline_1_var___doc__ = tmp_assign_source_25;

    tmp_assign_source_26 = const_str_plain__FakeSignal;
    assert( outline_1_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_26 );
    outline_1_var___qualname__ = tmp_assign_source_26;

    tmp_defaults_2 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_27 = MAKE_FUNCTION_oauthlib$signals$$$function_2___init__( tmp_defaults_2 );
    assert( outline_1_var___init__ == NULL );
    outline_1_var___init__ = tmp_assign_source_27;

    tmp_assign_source_28 = MAKE_FUNCTION_oauthlib$signals$$$function_3__fail(  );
    assert( outline_1_var__fail == NULL );
    outline_1_var__fail = tmp_assign_source_28;

    tmp_assign_source_29 = MAKE_FUNCTION_oauthlib$signals$$$function_4_lambda(  );
    assert( outline_1_var_send == NULL );
    outline_1_var_send = tmp_assign_source_29;

    tmp_assign_source_30 = outline_1_var__fail;

    CHECK_OBJECT( tmp_assign_source_30 );
    assert( tmp__FakeSignal$assign_unpack_1__assign_source == NULL );
    Py_INCREF( tmp_assign_source_30 );
    tmp__FakeSignal$assign_unpack_1__assign_source = tmp_assign_source_30;

    tmp_assign_source_31 = tmp__FakeSignal$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_31 );
    assert( outline_1_var_connect == NULL );
    Py_INCREF( tmp_assign_source_31 );
    outline_1_var_connect = tmp_assign_source_31;

    tmp_assign_source_32 = tmp__FakeSignal$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_32 );
    assert( outline_1_var_disconnect == NULL );
    Py_INCREF( tmp_assign_source_32 );
    outline_1_var_disconnect = tmp_assign_source_32;

    tmp_assign_source_33 = tmp__FakeSignal$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_33 );
    assert( outline_1_var_has_receivers_for == NULL );
    Py_INCREF( tmp_assign_source_33 );
    outline_1_var_has_receivers_for = tmp_assign_source_33;

    tmp_assign_source_34 = tmp__FakeSignal$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_34 );
    assert( outline_1_var_receivers_for == NULL );
    Py_INCREF( tmp_assign_source_34 );
    outline_1_var_receivers_for = tmp_assign_source_34;

    tmp_assign_source_35 = tmp__FakeSignal$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_35 );
    assert( outline_1_var_temporarily_connected_to == NULL );
    Py_INCREF( tmp_assign_source_35 );
    outline_1_var_temporarily_connected_to = tmp_assign_source_35;

    tmp_assign_source_36 = tmp__FakeSignal$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_36 );
    assert( outline_1_var_connected_to == NULL );
    Py_INCREF( tmp_assign_source_36 );
    outline_1_var_connected_to = tmp_assign_source_36;

    CHECK_OBJECT( (PyObject *)tmp__FakeSignal$assign_unpack_1__assign_source );
    Py_DECREF( tmp__FakeSignal$assign_unpack_1__assign_source );
    tmp__FakeSignal$assign_unpack_1__assign_source = NULL;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a248f54d6e7e3a3395b37335a6144d1b_2, codeobj_a248f54d6e7e3a3395b37335a6144d1b, module_oauthlib$signals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a248f54d6e7e3a3395b37335a6144d1b_2 = cache_frame_a248f54d6e7e3a3395b37335a6144d1b_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a248f54d6e7e3a3395b37335a6144d1b_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a248f54d6e7e3a3395b37335a6144d1b_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_result = outline_1_var__fail != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( outline_1_var__fail );
        outline_1_var__fail = NULL;
    }

    if ( tmp_result == false )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_fail" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_2 = "Noooooooooooo";
        goto frame_exception_exit_2;
    }


#if 0
    RESTORE_FRAME_EXCEPTION( frame_a248f54d6e7e3a3395b37335a6144d1b_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a248f54d6e7e3a3395b37335a6144d1b_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a248f54d6e7e3a3395b37335a6144d1b_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a248f54d6e7e3a3395b37335a6144d1b_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a248f54d6e7e3a3395b37335a6144d1b_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a248f54d6e7e3a3395b37335a6144d1b_2,
        type_description_2,
        NULL,
        outline_1_var___qualname__,
        outline_1_var___module__,
        outline_1_var___doc__,
        outline_1_var___init__,
        outline_1_var__fail,
        outline_1_var_send,
        outline_1_var_connect,
        outline_1_var_disconnect,
        outline_1_var_has_receivers_for,
        outline_1_var_receivers_for,
        outline_1_var_temporarily_connected_to,
        outline_1_var_connected_to
    );


    // Release cached frame.
    if ( frame_a248f54d6e7e3a3395b37335a6144d1b_2 == cache_frame_a248f54d6e7e3a3395b37335a6144d1b_2 )
    {
        Py_DECREF( frame_a248f54d6e7e3a3395b37335a6144d1b_2 );
    }
    cache_frame_a248f54d6e7e3a3395b37335a6144d1b_2 = NULL;

    assertFrameObject( frame_a248f54d6e7e3a3395b37335a6144d1b_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_6;
    skip_nested_handling_1:;
    tmp_called_name_5 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_5 );
    tmp_args_name_4 = PyTuple_New( 3 );
    tmp_tuple_element_4 = const_str_plain__FakeSignal;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = locals_dict_2;
    Py_INCREF( tmp_tuple_element_4 );
    if ( outline_1_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_4,
            const_str_plain___qualname__,
            outline_1_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_4,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_4,
                const_str_plain___qualname__
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_4 );

        exception_lineno = 16;

        goto try_except_handler_6;
    }
    if ( outline_1_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_4,
            const_str_plain___module__,
            outline_1_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_4,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_4,
                const_str_plain___module__
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_4 );

        exception_lineno = 16;

        goto try_except_handler_6;
    }
    if ( outline_1_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_4,
            const_str_plain___doc__,
            outline_1_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_4,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_4,
                const_str_plain___doc__
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_4 );

        exception_lineno = 16;

        goto try_except_handler_6;
    }
    if ( outline_1_var___init__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_4,
            const_str_plain___init__,
            outline_1_var___init__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_4,
            const_str_plain___init__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_4,
                const_str_plain___init__
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_4 );

        exception_lineno = 16;

        goto try_except_handler_6;
    }
    if ( outline_1_var__fail != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_4,
            const_str_plain__fail,
            outline_1_var__fail
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_4,
            const_str_plain__fail
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_4,
                const_str_plain__fail
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_4 );

        exception_lineno = 16;

        goto try_except_handler_6;
    }
    if ( outline_1_var_send != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_4,
            const_str_plain_send,
            outline_1_var_send
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_4,
            const_str_plain_send
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_4,
                const_str_plain_send
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_4 );

        exception_lineno = 16;

        goto try_except_handler_6;
    }
    if ( outline_1_var_connect != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_4,
            const_str_plain_connect,
            outline_1_var_connect
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_4,
            const_str_plain_connect
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_4,
                const_str_plain_connect
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_4 );

        exception_lineno = 16;

        goto try_except_handler_6;
    }
    if ( outline_1_var_disconnect != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_4,
            const_str_plain_disconnect,
            outline_1_var_disconnect
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_4,
            const_str_plain_disconnect
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_4,
                const_str_plain_disconnect
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_4 );

        exception_lineno = 16;

        goto try_except_handler_6;
    }
    if ( outline_1_var_has_receivers_for != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_4,
            const_str_plain_has_receivers_for,
            outline_1_var_has_receivers_for
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_4,
            const_str_plain_has_receivers_for
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_4,
                const_str_plain_has_receivers_for
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_4 );

        exception_lineno = 16;

        goto try_except_handler_6;
    }
    if ( outline_1_var_receivers_for != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_4,
            const_str_plain_receivers_for,
            outline_1_var_receivers_for
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_4,
            const_str_plain_receivers_for
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_4,
                const_str_plain_receivers_for
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_4 );

        exception_lineno = 16;

        goto try_except_handler_6;
    }
    if ( outline_1_var_temporarily_connected_to != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_4,
            const_str_plain_temporarily_connected_to,
            outline_1_var_temporarily_connected_to
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_4,
            const_str_plain_temporarily_connected_to
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_4,
                const_str_plain_temporarily_connected_to
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_4 );

        exception_lineno = 16;

        goto try_except_handler_6;
    }
    if ( outline_1_var_connected_to != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_4,
            const_str_plain_connected_to,
            outline_1_var_connected_to
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_4,
            const_str_plain_connected_to
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_4,
                const_str_plain_connected_to
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_tuple_element_4 );

        exception_lineno = 16;

        goto try_except_handler_6;
    }
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_4 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_0e8334ea0e29e03503ae1d32b6bbb472->m_frame.f_lineno = 16;
    tmp_assign_source_37 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_6;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_37;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauthlib$signals );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_6:;
    CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
    Py_DECREF( outline_1_var___class__ );
    outline_1_var___class__ = NULL;

    Py_XDECREF( outline_1_var___qualname__ );
    outline_1_var___qualname__ = NULL;

    Py_XDECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    Py_XDECREF( outline_1_var___doc__ );
    outline_1_var___doc__ = NULL;

    Py_XDECREF( outline_1_var___init__ );
    outline_1_var___init__ = NULL;

    Py_XDECREF( outline_1_var__fail );
    outline_1_var__fail = NULL;

    Py_XDECREF( outline_1_var_send );
    outline_1_var_send = NULL;

    Py_XDECREF( outline_1_var_connect );
    outline_1_var_connect = NULL;

    Py_XDECREF( outline_1_var_disconnect );
    outline_1_var_disconnect = NULL;

    Py_XDECREF( outline_1_var_has_receivers_for );
    outline_1_var_has_receivers_for = NULL;

    Py_XDECREF( outline_1_var_receivers_for );
    outline_1_var_receivers_for = NULL;

    Py_XDECREF( outline_1_var_temporarily_connected_to );
    outline_1_var_temporarily_connected_to = NULL;

    Py_XDECREF( outline_1_var_connected_to );
    outline_1_var_connected_to = NULL;

    goto outline_result_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_1_var___qualname__ );
    outline_1_var___qualname__ = NULL;

    Py_XDECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    Py_XDECREF( outline_1_var___doc__ );
    outline_1_var___doc__ = NULL;

    Py_XDECREF( outline_1_var___init__ );
    outline_1_var___init__ = NULL;

    Py_XDECREF( outline_1_var__fail );
    outline_1_var__fail = NULL;

    Py_XDECREF( outline_1_var_send );
    outline_1_var_send = NULL;

    Py_XDECREF( outline_1_var_connect );
    outline_1_var_connect = NULL;

    Py_XDECREF( outline_1_var_disconnect );
    outline_1_var_disconnect = NULL;

    Py_XDECREF( outline_1_var_has_receivers_for );
    outline_1_var_has_receivers_for = NULL;

    Py_XDECREF( outline_1_var_receivers_for );
    outline_1_var_receivers_for = NULL;

    Py_XDECREF( outline_1_var_temporarily_connected_to );
    outline_1_var_temporarily_connected_to = NULL;

    Py_XDECREF( outline_1_var_connected_to );
    outline_1_var_connected_to = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( oauthlib$signals );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 16;
    goto try_except_handler_5;
    outline_result_2:;
    tmp_assign_source_23 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_oauthlib$signals, (Nuitka_StringObject *)const_str_plain__FakeSignal, tmp_assign_source_23 );
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 8;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0e8334ea0e29e03503ae1d32b6bbb472->m_frame) frame_0e8334ea0e29e03503ae1d32b6bbb472->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    branch_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( oauthlib$signals );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_oauthlib$signals, (Nuitka_StringObject *)const_str_plain_Namespace );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Namespace );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Namespace" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;

        goto frame_exception_exit_1;
    }

    frame_0e8334ea0e29e03503ae1d32b6bbb472->m_frame.f_lineno = 37;
    tmp_assign_source_38 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$signals, (Nuitka_StringObject *)const_str_plain__signals, tmp_assign_source_38 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_oauthlib$signals, (Nuitka_StringObject *)const_str_plain__signals );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__signals );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_signals" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;

        goto frame_exception_exit_1;
    }

    frame_0e8334ea0e29e03503ae1d32b6bbb472->m_frame.f_lineno = 41;
    tmp_assign_source_39 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_signal, &PyTuple_GET_ITEM( const_tuple_str_digest_0914621779f8bbf6663e059ad7c5f5f5_tuple, 0 ) );

    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$signals, (Nuitka_StringObject *)const_str_plain_scope_changed, tmp_assign_source_39 );

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_0e8334ea0e29e03503ae1d32b6bbb472 );
#endif
    popFrameStack();

    assertFrameObject( frame_0e8334ea0e29e03503ae1d32b6bbb472 );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_0e8334ea0e29e03503ae1d32b6bbb472 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0e8334ea0e29e03503ae1d32b6bbb472, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0e8334ea0e29e03503ae1d32b6bbb472->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0e8334ea0e29e03503ae1d32b6bbb472, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;

    return MOD_RETURN_VALUE( module_oauthlib$signals );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
