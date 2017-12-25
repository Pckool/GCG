/* Generated code for Python source for module 'bson'
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

/* The _module_bson is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_bson;
PyDictObject *moduledict_bson;

/* The module constants used, if any. */
extern PyObject *const_str_plain_recvbytes;
extern PyObject *const_str_plain_encode_document;
static PyObject *const_str_digest_1044a01ae3b92ae88c34d1e2bf6d4ec9;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_bson;
extern PyObject *const_str_plain___package__;
static PyObject *const_tuple_str_plain_ObjectId_tuple;
extern PyObject *const_str_plain_sendobj;
static PyObject *const_str_plain_NUITKA_PACKAGE_bson;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_d5990040f87f76b29129183e586e2367;
extern PyObject *const_str_plain_BSONCoding;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_socket;
extern PyObject *const_dict_empty;
static PyObject *const_tuple_str_plain_socket_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_decode_document;
static PyObject *const_list_str_plain_loads_str_plain_dumps_list;
extern PyObject *const_str_plain_path;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_encode_object;
static PyObject *const_str_plain_objectid;
static PyObject *const_str_digest_0e93bc6217589cbfad5bb741f64a751e;
extern PyObject *const_str_plain_recvobj;
extern PyObject *const_str_plain_dumps;
static PyObject *const_str_plain_patch_socket;
static PyObject *const_str_digest_213377eb535d3cecc139aca25b5ec238;
extern PyObject *const_str_plain_network;
extern PyObject *const_str_plain_on_unknown;
extern PyObject *const_str_plain_ObjectId;
static PyObject *const_tuple_str_plain_obj_str_plain_generator_str_plain_on_unknown_tuple;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_loads;
static PyObject *const_str_digest_9a0152e931bc5c3883f617259f8bca90;
extern PyObject *const_str_plain_get;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_generator;
extern PyObject *const_str_plain_generator_func;
static PyObject *const_tuple_2406019a2692b969282a3a64643fe605_tuple;
extern PyObject *const_tuple_str_plain_data_tuple;
extern PyObject *const_str_plain_obj;
extern PyObject *const_str_plain___loader__;
static PyObject *const_str_digest_175a4d58cda2a338bf9c8079b25aa636;
extern PyObject *const_str_plain_dirname;
static PyObject *const_tuple_str_plain_recvbytes_str_plain_recvobj_str_plain_sendobj_tuple;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_tuple_762334e87f882287af0972dbfe02bf8b_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_codec;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_1044a01ae3b92ae88c34d1e2bf6d4ec9 = UNSTREAM_STRING( &constant_bin[ 123648 ], 50, 0 );
    const_tuple_str_plain_ObjectId_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ObjectId_tuple, 0, const_str_plain_ObjectId ); Py_INCREF( const_str_plain_ObjectId );
    const_str_plain_NUITKA_PACKAGE_bson = UNSTREAM_STRING( &constant_bin[ 123698 ], 19, 1 );
    const_str_digest_d5990040f87f76b29129183e586e2367 = UNSTREAM_STRING( &constant_bin[ 123717 ], 521, 0 );
    const_tuple_str_plain_socket_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_socket_tuple, 0, const_str_plain_socket ); Py_INCREF( const_str_plain_socket );
    const_list_str_plain_loads_str_plain_dumps_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_loads_str_plain_dumps_list, 0, const_str_plain_loads ); Py_INCREF( const_str_plain_loads );
    PyList_SET_ITEM( const_list_str_plain_loads_str_plain_dumps_list, 1, const_str_plain_dumps ); Py_INCREF( const_str_plain_dumps );
    const_str_plain_objectid = UNSTREAM_STRING( &constant_bin[ 124238 ], 8, 1 );
    const_str_digest_0e93bc6217589cbfad5bb741f64a751e = UNSTREAM_STRING( &constant_bin[ 124246 ], 13, 0 );
    const_str_plain_patch_socket = UNSTREAM_STRING( &constant_bin[ 124259 ], 12, 1 );
    const_str_digest_213377eb535d3cecc139aca25b5ec238 = UNSTREAM_STRING( &constant_bin[ 124271 ], 248, 0 );
    const_tuple_str_plain_obj_str_plain_generator_str_plain_on_unknown_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_obj_str_plain_generator_str_plain_on_unknown_tuple, 0, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    PyTuple_SET_ITEM( const_tuple_str_plain_obj_str_plain_generator_str_plain_on_unknown_tuple, 1, const_str_plain_generator ); Py_INCREF( const_str_plain_generator );
    PyTuple_SET_ITEM( const_tuple_str_plain_obj_str_plain_generator_str_plain_on_unknown_tuple, 2, const_str_plain_on_unknown ); Py_INCREF( const_str_plain_on_unknown );
    const_str_digest_9a0152e931bc5c3883f617259f8bca90 = UNSTREAM_STRING( &constant_bin[ 124519 ], 528, 0 );
    const_tuple_2406019a2692b969282a3a64643fe605_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_2406019a2692b969282a3a64643fe605_tuple, 0, const_str_plain_socket ); Py_INCREF( const_str_plain_socket );
    PyTuple_SET_ITEM( const_tuple_2406019a2692b969282a3a64643fe605_tuple, 1, const_str_plain_recvbytes ); Py_INCREF( const_str_plain_recvbytes );
    PyTuple_SET_ITEM( const_tuple_2406019a2692b969282a3a64643fe605_tuple, 2, const_str_plain_recvobj ); Py_INCREF( const_str_plain_recvobj );
    PyTuple_SET_ITEM( const_tuple_2406019a2692b969282a3a64643fe605_tuple, 3, const_str_plain_sendobj ); Py_INCREF( const_str_plain_sendobj );
    const_str_digest_175a4d58cda2a338bf9c8079b25aa636 = UNSTREAM_STRING( &constant_bin[ 125047 ], 16, 0 );
    const_tuple_str_plain_recvbytes_str_plain_recvobj_str_plain_sendobj_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_recvbytes_str_plain_recvobj_str_plain_sendobj_tuple, 0, const_str_plain_recvbytes ); Py_INCREF( const_str_plain_recvbytes );
    PyTuple_SET_ITEM( const_tuple_str_plain_recvbytes_str_plain_recvobj_str_plain_sendobj_tuple, 1, const_str_plain_recvobj ); Py_INCREF( const_str_plain_recvobj );
    PyTuple_SET_ITEM( const_tuple_str_plain_recvbytes_str_plain_recvobj_str_plain_sendobj_tuple, 2, const_str_plain_sendobj ); Py_INCREF( const_str_plain_sendobj );
    const_tuple_762334e87f882287af0972dbfe02bf8b_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_762334e87f882287af0972dbfe02bf8b_tuple, 0, const_str_plain_NUITKA_PACKAGE_bson ); Py_INCREF( const_str_plain_NUITKA_PACKAGE_bson );
    PyTuple_SET_ITEM( const_tuple_762334e87f882287af0972dbfe02bf8b_tuple, 1, const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 ); Py_INCREF( const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 );
    const_str_plain_codec = UNSTREAM_STRING( &constant_bin[ 59093 ], 5, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_bson( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_0d2339105536847df54b013f668354c0;
static PyCodeObject *codeobj_4414d0e2f94874f39f02f238dc6bac7d;
static PyCodeObject *codeobj_4526fbe9df82264b482a0fd5f5c2a813;
static PyCodeObject *codeobj_aab2ceac8d274391bfa33514b63f69b7;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_175a4d58cda2a338bf9c8079b25aa636 );
    codeobj_0d2339105536847df54b013f668354c0 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_0e93bc6217589cbfad5bb741f64a751e, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_4414d0e2f94874f39f02f238dc6bac7d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dumps, 28, const_tuple_str_plain_obj_str_plain_generator_str_plain_on_unknown_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4526fbe9df82264b482a0fd5f5c2a813 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_loads, 43, const_tuple_str_plain_data_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_aab2ceac8d274391bfa33514b63f69b7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_patch_socket, 50, const_tuple_2406019a2692b969282a3a64643fe605_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_bson$$$function_1_dumps( PyObject *defaults );


static PyObject *MAKE_FUNCTION_bson$$$function_2_loads(  );


static PyObject *MAKE_FUNCTION_bson$$$function_3_patch_socket(  );


// The module function definitions.
static PyObject *impl_bson$$$function_1_dumps( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[ 0 ];
    PyObject *par_generator = python_pars[ 1 ];
    PyObject *par_on_unknown = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static struct Nuitka_FrameObject *cache_frame_4414d0e2f94874f39f02f238dc6bac7d = NULL;

    struct Nuitka_FrameObject *frame_4414d0e2f94874f39f02f238dc6bac7d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4414d0e2f94874f39f02f238dc6bac7d, codeobj_4414d0e2f94874f39f02f238dc6bac7d, module_bson, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4414d0e2f94874f39f02f238dc6bac7d = cache_frame_4414d0e2f94874f39f02f238dc6bac7d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4414d0e2f94874f39f02f238dc6bac7d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4414d0e2f94874f39f02f238dc6bac7d ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_obj;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_bson, (Nuitka_StringObject *)const_str_plain_BSONCoding );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BSONCoding );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BSONCoding" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_bson, (Nuitka_StringObject *)const_str_plain_encode_object );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encode_object );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "encode_object" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_obj;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyList_New( 0 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_key_1 = const_str_plain_generator_func;
    tmp_dict_value_1 = par_generator;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_on_unknown;
    tmp_dict_value_2 = par_on_unknown;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_4414d0e2f94874f39f02f238dc6bac7d->m_frame.f_lineno = 37;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_bson, (Nuitka_StringObject *)const_str_plain_encode_document );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_encode_document );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "encode_document" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_obj;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = PyList_New( 0 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 2 );
    tmp_dict_key_3 = const_str_plain_generator_func;
    tmp_dict_value_3 = par_generator;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_on_unknown;
    tmp_dict_value_4 = par_on_unknown;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    frame_4414d0e2f94874f39f02f238dc6bac7d->m_frame.f_lineno = 39;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4414d0e2f94874f39f02f238dc6bac7d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4414d0e2f94874f39f02f238dc6bac7d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4414d0e2f94874f39f02f238dc6bac7d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4414d0e2f94874f39f02f238dc6bac7d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4414d0e2f94874f39f02f238dc6bac7d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4414d0e2f94874f39f02f238dc6bac7d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4414d0e2f94874f39f02f238dc6bac7d,
        type_description_1,
        par_obj,
        par_generator,
        par_on_unknown
    );


    // Release cached frame.
    if ( frame_4414d0e2f94874f39f02f238dc6bac7d == cache_frame_4414d0e2f94874f39f02f238dc6bac7d )
    {
        Py_DECREF( frame_4414d0e2f94874f39f02f238dc6bac7d );
    }
    cache_frame_4414d0e2f94874f39f02f238dc6bac7d = NULL;

    assertFrameObject( frame_4414d0e2f94874f39f02f238dc6bac7d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( bson$$$function_1_dumps );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_obj );
    par_obj = NULL;

    Py_XDECREF( par_generator );
    par_generator = NULL;

    Py_XDECREF( par_on_unknown );
    par_on_unknown = NULL;

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

    Py_XDECREF( par_obj );
    par_obj = NULL;

    Py_XDECREF( par_generator );
    par_generator = NULL;

    Py_XDECREF( par_on_unknown );
    par_on_unknown = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( bson$$$function_1_dumps );
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


static PyObject *impl_bson$$$function_2_loads( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[ 0 ];
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_4526fbe9df82264b482a0fd5f5c2a813 = NULL;

    struct Nuitka_FrameObject *frame_4526fbe9df82264b482a0fd5f5c2a813;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4526fbe9df82264b482a0fd5f5c2a813, codeobj_4526fbe9df82264b482a0fd5f5c2a813, module_bson, sizeof(void *) );
    frame_4526fbe9df82264b482a0fd5f5c2a813 = cache_frame_4526fbe9df82264b482a0fd5f5c2a813;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4526fbe9df82264b482a0fd5f5c2a813 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4526fbe9df82264b482a0fd5f5c2a813 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_bson, (Nuitka_StringObject *)const_str_plain_decode_document );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_decode_document );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "decode_document" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_data;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = const_int_0;
    frame_4526fbe9df82264b482a0fd5f5c2a813->m_frame.f_lineno = 47;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_pos_1;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4526fbe9df82264b482a0fd5f5c2a813 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4526fbe9df82264b482a0fd5f5c2a813 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4526fbe9df82264b482a0fd5f5c2a813 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4526fbe9df82264b482a0fd5f5c2a813, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4526fbe9df82264b482a0fd5f5c2a813->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4526fbe9df82264b482a0fd5f5c2a813, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4526fbe9df82264b482a0fd5f5c2a813,
        type_description_1,
        par_data
    );


    // Release cached frame.
    if ( frame_4526fbe9df82264b482a0fd5f5c2a813 == cache_frame_4526fbe9df82264b482a0fd5f5c2a813 )
    {
        Py_DECREF( frame_4526fbe9df82264b482a0fd5f5c2a813 );
    }
    cache_frame_4526fbe9df82264b482a0fd5f5c2a813 = NULL;

    assertFrameObject( frame_4526fbe9df82264b482a0fd5f5c2a813 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( bson$$$function_2_loads );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_data );
    par_data = NULL;

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

    Py_XDECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( bson$$$function_2_loads );
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


static PyObject *impl_bson$$$function_3_patch_socket( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_socket = NULL;
    PyObject *var_recvbytes = NULL;
    PyObject *var_recvobj = NULL;
    PyObject *var_sendobj = NULL;
    PyObject *tmp_import_from_1__module = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_aab2ceac8d274391bfa33514b63f69b7 = NULL;

    struct Nuitka_FrameObject *frame_aab2ceac8d274391bfa33514b63f69b7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_aab2ceac8d274391bfa33514b63f69b7, codeobj_aab2ceac8d274391bfa33514b63f69b7, module_bson, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_aab2ceac8d274391bfa33514b63f69b7 = cache_frame_aab2ceac8d274391bfa33514b63f69b7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_aab2ceac8d274391bfa33514b63f69b7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_aab2ceac8d274391bfa33514b63f69b7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_plain_socket;
    tmp_globals_name_1 = (PyObject *)moduledict_bson;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_socket_tuple;
    tmp_level_name_1 = const_int_0;
    frame_aab2ceac8d274391bfa33514b63f69b7->m_frame.f_lineno = 65;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_socket );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_socket == NULL );
    var_socket = tmp_assign_source_1;

    tmp_name_name_2 = const_str_plain_network;
    tmp_globals_name_2 = (PyObject *)moduledict_bson;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_recvbytes_str_plain_recvobj_str_plain_sendobj_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_aab2ceac8d274391bfa33514b63f69b7->m_frame.f_lineno = 66;
    tmp_assign_source_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_2;

    // Tried code:
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_recvbytes );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( var_recvbytes == NULL );
    var_recvbytes = tmp_assign_source_3;

    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_recvobj );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( var_recvobj == NULL );
    var_recvobj = tmp_assign_source_4;

    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_sendobj );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( var_sendobj == NULL );
    var_sendobj = tmp_assign_source_5;

    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_assattr_name_1 = var_recvbytes;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "recvbytes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = var_socket;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_recvbytes, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = var_recvobj;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "recvobj" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = var_socket;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_recvobj, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = var_sendobj;

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sendobj" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = var_socket;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_sendobj, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aab2ceac8d274391bfa33514b63f69b7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aab2ceac8d274391bfa33514b63f69b7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aab2ceac8d274391bfa33514b63f69b7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aab2ceac8d274391bfa33514b63f69b7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aab2ceac8d274391bfa33514b63f69b7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_aab2ceac8d274391bfa33514b63f69b7,
        type_description_1,
        var_socket,
        var_recvbytes,
        var_recvobj,
        var_sendobj
    );


    // Release cached frame.
    if ( frame_aab2ceac8d274391bfa33514b63f69b7 == cache_frame_aab2ceac8d274391bfa33514b63f69b7 )
    {
        Py_DECREF( frame_aab2ceac8d274391bfa33514b63f69b7 );
    }
    cache_frame_aab2ceac8d274391bfa33514b63f69b7 = NULL;

    assertFrameObject( frame_aab2ceac8d274391bfa33514b63f69b7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( bson$$$function_3_patch_socket );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_socket );
    var_socket = NULL;

    Py_XDECREF( var_recvbytes );
    var_recvbytes = NULL;

    Py_XDECREF( var_recvobj );
    var_recvobj = NULL;

    Py_XDECREF( var_sendobj );
    var_sendobj = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_socket );
    var_socket = NULL;

    Py_XDECREF( var_recvbytes );
    var_recvbytes = NULL;

    Py_XDECREF( var_recvobj );
    var_recvobj = NULL;

    Py_XDECREF( var_sendobj );
    var_sendobj = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( bson$$$function_3_patch_socket );
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



static PyObject *MAKE_FUNCTION_bson$$$function_1_dumps( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bson$$$function_1_dumps,
        const_str_plain_dumps,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4414d0e2f94874f39f02f238dc6bac7d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_bson,
        const_str_digest_213377eb535d3cecc139aca25b5ec238,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_bson$$$function_2_loads(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bson$$$function_2_loads,
        const_str_plain_loads,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4526fbe9df82264b482a0fd5f5c2a813,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_bson,
        const_str_digest_1044a01ae3b92ae88c34d1e2bf6d4ec9,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_bson$$$function_3_patch_socket(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bson$$$function_3_patch_socket,
        const_str_plain_patch_socket,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_aab2ceac8d274391bfa33514b63f69b7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_bson,
        const_str_digest_d5990040f87f76b29129183e586e2367,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_bson =
{
    PyModuleDef_HEAD_INIT,
    "bson",   /* m_name */
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

MOD_INIT_DECL( bson )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_bson );
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
    puts("bson: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("bson: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initbson" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_bson = Py_InitModule4(
        "bson",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_bson = PyModule_Create( &mdef_bson );
#endif

    moduledict_bson = MODULE_DICT( module_bson );

    CHECK_OBJECT( module_bson );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_bson, module_bson );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_bson, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_bson, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_bson, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_defaults_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_star_imported_1;
    struct Nuitka_FrameObject *frame_0d2339105536847df54b013f668354c0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_9a0152e931bc5c3883f617259f8bca90;
    UPDATE_STRING_DICT0( moduledict_bson, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_bson, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_0d2339105536847df54b013f668354c0 = MAKE_MODULE_FRAME( codeobj_0d2339105536847df54b013f668354c0, module_bson );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_0d2339105536847df54b013f668354c0 );
    assert( Py_REFCNT( frame_0d2339105536847df54b013f668354c0 ) == 2 );

    // Framed code:
    tmp_assign_source_3 = PyList_New( 2 );
    frame_0d2339105536847df54b013f668354c0->m_frame.f_lineno = 1;
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
    frame_0d2339105536847df54b013f668354c0->m_frame.f_lineno = 1;
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
    frame_0d2339105536847df54b013f668354c0->m_frame.f_lineno = 1;
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

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    frame_0d2339105536847df54b013f668354c0->m_frame.f_lineno = 1;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_762334e87f882287af0972dbfe02bf8b_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 1, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_bson, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_bson, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_4 );
    frame_0d2339105536847df54b013f668354c0->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("importlib._bootstrap");
        if (likely( module != NULL ))
        {
            tmp_called_name_2 = PyObject_GetAttr( module, const_str_plain_ModuleSpec );
        }
        else
        {
            tmp_called_name_2 = NULL;
        }
    }

    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = const_str_plain_bson;
    tmp_args_element_name_3 = metapath_based_loader;
    frame_0d2339105536847df54b013f668354c0->m_frame.f_lineno = 1;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_bson, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_5 );
    tmp_assign_source_6 = Py_None;
    UPDATE_STRING_DICT0( moduledict_bson, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_plain_bson;
    UPDATE_STRING_DICT0( moduledict_bson, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_7 );
    tmp_name_name_1 = const_str_plain_codec;
    tmp_globals_name_1 = (PyObject *)moduledict_bson;
    tmp_locals_name_1 = (PyObject *)moduledict_bson;
    tmp_fromlist_name_1 = const_tuple_str_chr_42_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_0d2339105536847df54b013f668354c0->m_frame.f_lineno = 22;
    tmp_star_imported_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_bson, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    tmp_name_name_2 = const_str_plain_objectid;
    tmp_globals_name_2 = (PyObject *)moduledict_bson;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_ObjectId_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_0d2339105536847df54b013f668354c0->m_frame.f_lineno = 23;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_ObjectId );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_bson, (Nuitka_StringObject *)const_str_plain_ObjectId, tmp_assign_source_8 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0d2339105536847df54b013f668354c0 );
#endif
    popFrameStack();

    assertFrameObject( frame_0d2339105536847df54b013f668354c0 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0d2339105536847df54b013f668354c0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0d2339105536847df54b013f668354c0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0d2339105536847df54b013f668354c0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0d2339105536847df54b013f668354c0, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_9 = LIST_COPY( const_list_str_plain_loads_str_plain_dumps_list );
    UPDATE_STRING_DICT1( moduledict_bson, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_9 );
    tmp_defaults_1 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_10 = MAKE_FUNCTION_bson$$$function_1_dumps( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_bson, (Nuitka_StringObject *)const_str_plain_dumps, tmp_assign_source_10 );
    tmp_assign_source_11 = MAKE_FUNCTION_bson$$$function_2_loads(  );
    UPDATE_STRING_DICT1( moduledict_bson, (Nuitka_StringObject *)const_str_plain_loads, tmp_assign_source_11 );
    tmp_assign_source_12 = MAKE_FUNCTION_bson$$$function_3_patch_socket(  );
    UPDATE_STRING_DICT1( moduledict_bson, (Nuitka_StringObject *)const_str_plain_patch_socket, tmp_assign_source_12 );

    return MOD_RETURN_VALUE( module_bson );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
