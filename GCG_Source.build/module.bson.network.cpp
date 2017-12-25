/* Generated code for Python source for module 'bson.network'
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

/* The _module_bson$network is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_bson$network;
PyDictObject *moduledict_bson$network;

/* The module constants used, if any. */
extern PyObject *const_str_plain_recvbytes;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_data;
static PyObject *const_str_digest_49d84db869cabc2387313568058d9a2f;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_5e3e9cf1f92a4742f1775d08d2adde4a;
extern PyObject *const_str_plain_bson;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_sendobj;
static PyObject *const_str_plain_bytes_needed;
extern PyObject *const_str_plain_chunk;
extern PyObject *const_str_plain_sendall;
extern PyObject *const_str_plain_retval;
extern PyObject *const_int_pos_1;
extern PyObject *const_tuple_int_pos_4_tuple;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_92531a480a30e670e974fa58c0151b5f;
extern PyObject *const_str_plain_min;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_struct;
extern PyObject *const_str_plain_unpack;
extern PyObject *const_str_plain_six;
extern PyObject *const_str_plain_getvalue;
static PyObject *const_tuple_str_plain_unpack_tuple;
extern PyObject *const_str_plain_BytesIO;
extern PyObject *const_str_plain_recvobj;
extern PyObject *const_str_plain_dumps;
static PyObject *const_str_digest_ccef04f7871c04a30303a2a7733baa31;
extern PyObject *const_str_digest_c6ccceacb61480b9230ce3733fbc80d1;
static PyObject *const_tuple_str_plain_dumps_str_plain_loads_tuple;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_write;
static PyObject *const_tuple_7c5c55718429d267bc32ff53af45261b_tuple;
static PyObject *const_str_plain_sock_buf;
static PyObject *const_tuple_str_plain_BytesIO_str_plain_b_tuple;
static PyObject *const_str_plain__bintoint;
extern PyObject *const_str_plain_loads;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_message_length;
static PyObject *const_str_digest_ef3f305d7b7eb655d07c382ec1bd7f10;
extern PyObject *const_tuple_str_plain_self_str_plain_obj_str_plain_data_tuple;
static PyObject *const_str_plain_bytes_count;
extern PyObject *const_int_pos_4;
extern PyObject *const_tuple_str_plain_data_tuple;
static PyObject *const_str_plain_part_count;
extern PyObject *const_str_plain_obj;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_recv;
extern PyObject *const_int_pos_32768;
static PyObject *const_str_digest_42240a9e41df3abe4b4574d3a0c80ab5;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_tuple_e15126941f4fece028fa0f6bb146f4b8_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_49d84db869cabc2387313568058d9a2f = UNSTREAM_STRING( &constant_bin[ 126318 ], 209, 0 );
    const_str_digest_5e3e9cf1f92a4742f1775d08d2adde4a = UNSTREAM_STRING( &constant_bin[ 126527 ], 12, 0 );
    const_str_plain_bytes_needed = UNSTREAM_STRING( &constant_bin[ 123903 ], 12, 1 );
    const_str_digest_92531a480a30e670e974fa58c0151b5f = UNSTREAM_STRING( &constant_bin[ 126539 ], 15, 0 );
    const_tuple_str_plain_unpack_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_unpack_tuple, 0, const_str_plain_unpack ); Py_INCREF( const_str_plain_unpack );
    const_str_digest_ccef04f7871c04a30303a2a7733baa31 = UNSTREAM_STRING( &constant_bin[ 126554 ], 272, 0 );
    const_tuple_str_plain_dumps_str_plain_loads_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_dumps_str_plain_loads_tuple, 0, const_str_plain_dumps ); Py_INCREF( const_str_plain_dumps );
    PyTuple_SET_ITEM( const_tuple_str_plain_dumps_str_plain_loads_tuple, 1, const_str_plain_loads ); Py_INCREF( const_str_plain_loads );
    const_tuple_7c5c55718429d267bc32ff53af45261b_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_7c5c55718429d267bc32ff53af45261b_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_sock_buf = UNSTREAM_STRING( &constant_bin[ 123917 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_7c5c55718429d267bc32ff53af45261b_tuple, 1, const_str_plain_sock_buf ); Py_INCREF( const_str_plain_sock_buf );
    const_str_plain_message_length = UNSTREAM_STRING( &constant_bin[ 126826 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_7c5c55718429d267bc32ff53af45261b_tuple, 2, const_str_plain_message_length ); Py_INCREF( const_str_plain_message_length );
    PyTuple_SET_ITEM( const_tuple_7c5c55718429d267bc32ff53af45261b_tuple, 3, const_str_plain_retval ); Py_INCREF( const_str_plain_retval );
    const_tuple_str_plain_BytesIO_str_plain_b_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_BytesIO_str_plain_b_tuple, 0, const_str_plain_BytesIO ); Py_INCREF( const_str_plain_BytesIO );
    PyTuple_SET_ITEM( const_tuple_str_plain_BytesIO_str_plain_b_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    const_str_plain__bintoint = UNSTREAM_STRING( &constant_bin[ 126840 ], 9, 1 );
    const_str_digest_ef3f305d7b7eb655d07c382ec1bd7f10 = UNSTREAM_STRING( &constant_bin[ 126849 ], 45, 0 );
    const_str_plain_bytes_count = UNSTREAM_STRING( &constant_bin[ 126894 ], 11, 1 );
    const_str_plain_part_count = UNSTREAM_STRING( &constant_bin[ 126905 ], 10, 1 );
    const_str_digest_42240a9e41df3abe4b4574d3a0c80ab5 = UNSTREAM_STRING( &constant_bin[ 126915 ], 21, 0 );
    const_tuple_e15126941f4fece028fa0f6bb146f4b8_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_e15126941f4fece028fa0f6bb146f4b8_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_e15126941f4fece028fa0f6bb146f4b8_tuple, 1, const_str_plain_bytes_needed ); Py_INCREF( const_str_plain_bytes_needed );
    PyTuple_SET_ITEM( const_tuple_e15126941f4fece028fa0f6bb146f4b8_tuple, 2, const_str_plain_sock_buf ); Py_INCREF( const_str_plain_sock_buf );
    PyTuple_SET_ITEM( const_tuple_e15126941f4fece028fa0f6bb146f4b8_tuple, 3, const_str_plain_bytes_count ); Py_INCREF( const_str_plain_bytes_count );
    PyTuple_SET_ITEM( const_tuple_e15126941f4fece028fa0f6bb146f4b8_tuple, 4, const_str_plain_chunk ); Py_INCREF( const_str_plain_chunk );
    PyTuple_SET_ITEM( const_tuple_e15126941f4fece028fa0f6bb146f4b8_tuple, 5, const_str_plain_part_count ); Py_INCREF( const_str_plain_part_count );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_bson$network( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_15db626aaaeaea181f6f51e956948eb4;
static PyCodeObject *codeobj_30576f75c42ece3f1609cc2ef8c7c81c;
static PyCodeObject *codeobj_25ce5e0a11170015b7136a60c16766e0;
static PyCodeObject *codeobj_7b15593191498c6587822c3090824afe;
static PyCodeObject *codeobj_7fe3e853a75abbcc3b2d74357f876a04;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_92531a480a30e670e974fa58c0151b5f );
    codeobj_15db626aaaeaea181f6f51e956948eb4 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_42240a9e41df3abe4b4574d3a0c80ab5, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_30576f75c42ece3f1609cc2ef8c7c81c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__bintoint, 9, const_tuple_str_plain_data_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_25ce5e0a11170015b7136a60c16766e0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_recvbytes, 42, const_tuple_e15126941f4fece028fa0f6bb146f4b8_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7b15593191498c6587822c3090824afe = MAKE_CODEOBJ( module_filename_obj, const_str_plain_recvobj, 21, const_tuple_7c5c55718429d267bc32ff53af45261b_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7fe3e853a75abbcc3b2d74357f876a04 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sendobj, 13, const_tuple_str_plain_self_str_plain_obj_str_plain_data_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_bson$network$$$function_1__bintoint(  );


static PyObject *MAKE_FUNCTION_bson$network$$$function_2_sendobj(  );


static PyObject *MAKE_FUNCTION_bson$network$$$function_3_recvobj(  );


static PyObject *MAKE_FUNCTION_bson$network$$$function_4_recvbytes( PyObject *defaults );


// The module function definitions.
static PyObject *impl_bson$network$$$function_1__bintoint( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_30576f75c42ece3f1609cc2ef8c7c81c = NULL;

    struct Nuitka_FrameObject *frame_30576f75c42ece3f1609cc2ef8c7c81c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_30576f75c42ece3f1609cc2ef8c7c81c, codeobj_30576f75c42ece3f1609cc2ef8c7c81c, module_bson$network, sizeof(void *) );
    frame_30576f75c42ece3f1609cc2ef8c7c81c = cache_frame_30576f75c42ece3f1609cc2ef8c7c81c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_30576f75c42ece3f1609cc2ef8c7c81c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_30576f75c42ece3f1609cc2ef8c7c81c ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_bson$network, (Nuitka_StringObject *)const_str_plain_unpack );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unpack );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unpack" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 10;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_digest_c6ccceacb61480b9230ce3733fbc80d1;
    tmp_args_element_name_2 = par_data;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_30576f75c42ece3f1609cc2ef8c7c81c->m_frame.f_lineno = 10;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_30576f75c42ece3f1609cc2ef8c7c81c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_30576f75c42ece3f1609cc2ef8c7c81c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_30576f75c42ece3f1609cc2ef8c7c81c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_30576f75c42ece3f1609cc2ef8c7c81c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_30576f75c42ece3f1609cc2ef8c7c81c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_30576f75c42ece3f1609cc2ef8c7c81c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_30576f75c42ece3f1609cc2ef8c7c81c,
        type_description_1,
        par_data
    );


    // Release cached frame.
    if ( frame_30576f75c42ece3f1609cc2ef8c7c81c == cache_frame_30576f75c42ece3f1609cc2ef8c7c81c )
    {
        Py_DECREF( frame_30576f75c42ece3f1609cc2ef8c7c81c );
    }
    cache_frame_30576f75c42ece3f1609cc2ef8c7c81c = NULL;

    assertFrameObject( frame_30576f75c42ece3f1609cc2ef8c7c81c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( bson$network$$$function_1__bintoint );
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
    NUITKA_CANNOT_GET_HERE( bson$network$$$function_1__bintoint );
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


static PyObject *impl_bson$network$$$function_2_sendobj( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_obj = python_pars[ 1 ];
    PyObject *var_data = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7fe3e853a75abbcc3b2d74357f876a04 = NULL;

    struct Nuitka_FrameObject *frame_7fe3e853a75abbcc3b2d74357f876a04;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7fe3e853a75abbcc3b2d74357f876a04, codeobj_7fe3e853a75abbcc3b2d74357f876a04, module_bson$network, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7fe3e853a75abbcc3b2d74357f876a04 = cache_frame_7fe3e853a75abbcc3b2d74357f876a04;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7fe3e853a75abbcc3b2d74357f876a04 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7fe3e853a75abbcc3b2d74357f876a04 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_bson$network, (Nuitka_StringObject *)const_str_plain_dumps );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dumps );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "dumps" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 17;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_obj;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_7fe3e853a75abbcc3b2d74357f876a04->m_frame.f_lineno = 17;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_data == NULL );
    var_data = tmp_assign_source_1;

    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 18;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sendall );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_data;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 18;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_7fe3e853a75abbcc3b2d74357f876a04->m_frame.f_lineno = 18;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7fe3e853a75abbcc3b2d74357f876a04 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7fe3e853a75abbcc3b2d74357f876a04 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7fe3e853a75abbcc3b2d74357f876a04, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7fe3e853a75abbcc3b2d74357f876a04->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7fe3e853a75abbcc3b2d74357f876a04, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7fe3e853a75abbcc3b2d74357f876a04,
        type_description_1,
        par_self,
        par_obj,
        var_data
    );


    // Release cached frame.
    if ( frame_7fe3e853a75abbcc3b2d74357f876a04 == cache_frame_7fe3e853a75abbcc3b2d74357f876a04 )
    {
        Py_DECREF( frame_7fe3e853a75abbcc3b2d74357f876a04 );
    }
    cache_frame_7fe3e853a75abbcc3b2d74357f876a04 = NULL;

    assertFrameObject( frame_7fe3e853a75abbcc3b2d74357f876a04 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( bson$network$$$function_2_sendobj );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_obj );
    par_obj = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

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

    Py_XDECREF( par_obj );
    par_obj = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( bson$network$$$function_2_sendobj );
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


static PyObject *impl_bson$network$$$function_3_recvobj( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_sock_buf = NULL;
    PyObject *var_message_length = NULL;
    PyObject *var_retval = NULL;
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
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_7b15593191498c6587822c3090824afe = NULL;

    struct Nuitka_FrameObject *frame_7b15593191498c6587822c3090824afe;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7b15593191498c6587822c3090824afe, codeobj_7b15593191498c6587822c3090824afe, module_bson$network, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7b15593191498c6587822c3090824afe = cache_frame_7b15593191498c6587822c3090824afe;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7b15593191498c6587822c3090824afe );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7b15593191498c6587822c3090824afe ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_7b15593191498c6587822c3090824afe->m_frame.f_lineno = 29;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_recvbytes, &PyTuple_GET_ITEM( const_tuple_int_pos_4_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_sock_buf == NULL );
    var_sock_buf = tmp_assign_source_1;

    tmp_compare_left_1 = var_sock_buf;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_bson$network, (Nuitka_StringObject *)const_str_plain__bintoint );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__bintoint );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_bintoint" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_2 = var_sock_buf;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sock_buf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_7b15593191498c6587822c3090824afe->m_frame.f_lineno = 33;
    tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_getvalue );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_7b15593191498c6587822c3090824afe->m_frame.f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_message_length == NULL );
    var_message_length = tmp_assign_source_2;

    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_recvbytes );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = var_message_length;

    if ( tmp_left_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "message_length" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = const_int_pos_4;
    tmp_args_element_name_2 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 34;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_sock_buf;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sock_buf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_7b15593191498c6587822c3090824afe->m_frame.f_lineno = 34;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_sock_buf;
        var_sock_buf = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_compare_left_2 = var_sock_buf;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_bson$network, (Nuitka_StringObject *)const_str_plain_loads );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_loads );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "loads" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_3 = var_sock_buf;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sock_buf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_7b15593191498c6587822c3090824afe->m_frame.f_lineno = 38;
    tmp_args_element_name_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_getvalue );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_7b15593191498c6587822c3090824afe->m_frame.f_lineno = 38;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_retval == NULL );
    var_retval = tmp_assign_source_4;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b15593191498c6587822c3090824afe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b15593191498c6587822c3090824afe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b15593191498c6587822c3090824afe );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7b15593191498c6587822c3090824afe, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7b15593191498c6587822c3090824afe->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7b15593191498c6587822c3090824afe, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7b15593191498c6587822c3090824afe,
        type_description_1,
        par_self,
        var_sock_buf,
        var_message_length,
        var_retval
    );


    // Release cached frame.
    if ( frame_7b15593191498c6587822c3090824afe == cache_frame_7b15593191498c6587822c3090824afe )
    {
        Py_DECREF( frame_7b15593191498c6587822c3090824afe );
    }
    cache_frame_7b15593191498c6587822c3090824afe = NULL;

    assertFrameObject( frame_7b15593191498c6587822c3090824afe );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_retval;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( bson$network$$$function_3_recvobj );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_sock_buf );
    var_sock_buf = NULL;

    Py_XDECREF( var_message_length );
    var_message_length = NULL;

    Py_XDECREF( var_retval );
    var_retval = NULL;

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

    Py_XDECREF( var_sock_buf );
    var_sock_buf = NULL;

    Py_XDECREF( var_message_length );
    var_message_length = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( bson$network$$$function_3_recvobj );
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


static PyObject *impl_bson$network$$$function_4_recvbytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_bytes_needed = python_pars[ 1 ];
    PyObject *par_sock_buf = python_pars[ 2 ];
    PyObject *var_bytes_count = NULL;
    PyObject *var_chunk = NULL;
    PyObject *var_part_count = NULL;
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
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Lt_1;
    int tmp_cmp_Lt_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    bool tmp_is_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_25ce5e0a11170015b7136a60c16766e0 = NULL;

    struct Nuitka_FrameObject *frame_25ce5e0a11170015b7136a60c16766e0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_25ce5e0a11170015b7136a60c16766e0, codeobj_25ce5e0a11170015b7136a60c16766e0, module_bson$network, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_25ce5e0a11170015b7136a60c16766e0 = cache_frame_25ce5e0a11170015b7136a60c16766e0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_25ce5e0a11170015b7136a60c16766e0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_25ce5e0a11170015b7136a60c16766e0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_sock_buf;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_bson$network, (Nuitka_StringObject *)const_str_plain_BytesIO );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BytesIO );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BytesIO" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_25ce5e0a11170015b7136a60c16766e0->m_frame.f_lineno = 52;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_sock_buf;
        par_sock_buf = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_assign_source_2 = const_int_0;
    assert( var_bytes_count == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_bytes_count = tmp_assign_source_2;

    loop_start_1:;
    tmp_compare_left_2 = var_bytes_count;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bytes_count" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = par_bytes_needed;

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bytes_needed" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    goto loop_end_1;
    branch_no_2:;
    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_recv );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_min );
    assert( tmp_called_name_3 != NULL );
    tmp_left_name_1 = par_bytes_needed;

    if ( tmp_left_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bytes_needed" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = var_bytes_count;

    if ( tmp_right_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bytes_count" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 55;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = const_int_pos_32768;
    frame_25ce5e0a11170015b7136a60c16766e0->m_frame.f_lineno = 55;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 55;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_25ce5e0a11170015b7136a60c16766e0->m_frame.f_lineno = 55;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_chunk;
        var_chunk = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_len_arg_1 = var_chunk;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_assign_source_4 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_part_count;
        var_part_count = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_type_arg_1 = var_chunk;

    if ( tmp_type_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "chunk" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_3 = BUILTIN_TYPE1( tmp_type_arg_1 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = (PyObject *)&PyUnicode_Type;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 58;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_bson$network, (Nuitka_StringObject *)const_str_plain_b );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "b" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = var_chunk;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "chunk" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_25ce5e0a11170015b7136a60c16766e0->m_frame.f_lineno = 59;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_chunk;
        var_chunk = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    branch_no_3:;
    tmp_compare_left_4 = var_part_count;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "part_count" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = const_int_pos_1;
    tmp_cmp_Lt_2 = RICH_COMPARE_BOOL_LT( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Lt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_4:;
    tmp_left_name_2 = var_bytes_count;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bytes_count" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = var_part_count;

    if ( tmp_right_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "part_count" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_6 = tmp_left_name_2;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    var_bytes_count = tmp_assign_source_6;

    tmp_source_name_2 = par_sock_buf;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sock_buf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_write );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = var_chunk;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "chunk" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_25ce5e0a11170015b7136a60c16766e0->m_frame.f_lineno = 65;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = par_sock_buf;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sock_buf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_25ce5e0a11170015b7136a60c16766e0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_25ce5e0a11170015b7136a60c16766e0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_25ce5e0a11170015b7136a60c16766e0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_25ce5e0a11170015b7136a60c16766e0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_25ce5e0a11170015b7136a60c16766e0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_25ce5e0a11170015b7136a60c16766e0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_25ce5e0a11170015b7136a60c16766e0,
        type_description_1,
        par_self,
        par_bytes_needed,
        par_sock_buf,
        var_bytes_count,
        var_chunk,
        var_part_count
    );


    // Release cached frame.
    if ( frame_25ce5e0a11170015b7136a60c16766e0 == cache_frame_25ce5e0a11170015b7136a60c16766e0 )
    {
        Py_DECREF( frame_25ce5e0a11170015b7136a60c16766e0 );
    }
    cache_frame_25ce5e0a11170015b7136a60c16766e0 = NULL;

    assertFrameObject( frame_25ce5e0a11170015b7136a60c16766e0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( bson$network$$$function_4_recvbytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_bytes_needed );
    par_bytes_needed = NULL;

    Py_XDECREF( par_sock_buf );
    par_sock_buf = NULL;

    Py_XDECREF( var_bytes_count );
    var_bytes_count = NULL;

    Py_XDECREF( var_chunk );
    var_chunk = NULL;

    Py_XDECREF( var_part_count );
    var_part_count = NULL;

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

    Py_XDECREF( par_bytes_needed );
    par_bytes_needed = NULL;

    Py_XDECREF( par_sock_buf );
    par_sock_buf = NULL;

    Py_XDECREF( var_bytes_count );
    var_bytes_count = NULL;

    Py_XDECREF( var_chunk );
    var_chunk = NULL;

    Py_XDECREF( var_part_count );
    var_part_count = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( bson$network$$$function_4_recvbytes );
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



static PyObject *MAKE_FUNCTION_bson$network$$$function_1__bintoint(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bson$network$$$function_1__bintoint,
        const_str_plain__bintoint,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_30576f75c42ece3f1609cc2ef8c7c81c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_bson$network,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_bson$network$$$function_2_sendobj(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bson$network$$$function_2_sendobj,
        const_str_plain_sendobj,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7fe3e853a75abbcc3b2d74357f876a04,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_bson$network,
        const_str_digest_ef3f305d7b7eb655d07c382ec1bd7f10,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_bson$network$$$function_3_recvobj(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bson$network$$$function_3_recvobj,
        const_str_plain_recvobj,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7b15593191498c6587822c3090824afe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_bson$network,
        const_str_digest_49d84db869cabc2387313568058d9a2f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_bson$network$$$function_4_recvbytes( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_bson$network$$$function_4_recvbytes,
        const_str_plain_recvbytes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_25ce5e0a11170015b7136a60c16766e0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_bson$network,
        const_str_digest_ccef04f7871c04a30303a2a7733baa31,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_bson$network =
{
    PyModuleDef_HEAD_INIT,
    "bson.network",   /* m_name */
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

MOD_INIT_DECL( bson$network )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_bson$network );
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
    puts("bson.network: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("bson.network: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initbson$network" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_bson$network = Py_InitModule4(
        "bson.network",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_bson$network = PyModule_Create( &mdef_bson$network );
#endif

    moduledict_bson$network = MODULE_DICT( module_bson$network );

    CHECK_OBJECT( module_bson$network );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_5e3e9cf1f92a4742f1775d08d2adde4a, module_bson$network );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_bson$network, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_bson$network, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_bson$network, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
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
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_called_name_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    struct Nuitka_FrameObject *frame_15db626aaaeaea181f6f51e956948eb4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_bson$network, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_bson$network, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_bson$network, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_15db626aaaeaea181f6f51e956948eb4 = MAKE_MODULE_FRAME( codeobj_15db626aaaeaea181f6f51e956948eb4, module_bson$network );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_15db626aaaeaea181f6f51e956948eb4 );
    assert( Py_REFCNT( frame_15db626aaaeaea181f6f51e956948eb4 ) == 2 );

    // Framed code:
    frame_15db626aaaeaea181f6f51e956948eb4->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_5e3e9cf1f92a4742f1775d08d2adde4a;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_15db626aaaeaea181f6f51e956948eb4->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_bson$network, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_bson$network, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_bson;
    UPDATE_STRING_DICT0( moduledict_bson$network, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_plain_struct;
    tmp_globals_name_1 = (PyObject *)moduledict_bson$network;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_unpack_tuple;
    tmp_level_name_1 = const_int_0;
    frame_15db626aaaeaea181f6f51e956948eb4->m_frame.f_lineno = 2;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_unpack );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_bson$network, (Nuitka_StringObject *)const_str_plain_unpack, tmp_assign_source_7 );
    tmp_name_name_2 = const_str_plain_six;
    tmp_globals_name_2 = (PyObject *)moduledict_bson$network;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_BytesIO_str_plain_b_tuple;
    tmp_level_name_2 = const_int_0;
    frame_15db626aaaeaea181f6f51e956948eb4->m_frame.f_lineno = 4;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_8;

    // Tried code:
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_BytesIO );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_bson$network, (Nuitka_StringObject *)const_str_plain_BytesIO, tmp_assign_source_9 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_b );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_bson$network, (Nuitka_StringObject *)const_str_plain_b, tmp_assign_source_10 );
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

    tmp_name_name_3 = const_str_empty;
    tmp_globals_name_3 = (PyObject *)moduledict_bson$network;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_dumps_str_plain_loads_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_15db626aaaeaea181f6f51e956948eb4->m_frame.f_lineno = 6;
    tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_11;

    // Tried code:
    tmp_import_name_from_4 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_dumps );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_bson$network, (Nuitka_StringObject *)const_str_plain_dumps, tmp_assign_source_12 );
    tmp_import_name_from_5 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_loads );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_bson$network, (Nuitka_StringObject *)const_str_plain_loads, tmp_assign_source_13 );
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

    Py_XDECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_15db626aaaeaea181f6f51e956948eb4 );
#endif
    popFrameStack();

    assertFrameObject( frame_15db626aaaeaea181f6f51e956948eb4 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_15db626aaaeaea181f6f51e956948eb4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_15db626aaaeaea181f6f51e956948eb4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_15db626aaaeaea181f6f51e956948eb4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_15db626aaaeaea181f6f51e956948eb4, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    Py_XDECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    tmp_assign_source_14 = MAKE_FUNCTION_bson$network$$$function_1__bintoint(  );
    UPDATE_STRING_DICT1( moduledict_bson$network, (Nuitka_StringObject *)const_str_plain__bintoint, tmp_assign_source_14 );
    tmp_assign_source_15 = MAKE_FUNCTION_bson$network$$$function_2_sendobj(  );
    UPDATE_STRING_DICT1( moduledict_bson$network, (Nuitka_StringObject *)const_str_plain_sendobj, tmp_assign_source_15 );
    tmp_assign_source_16 = MAKE_FUNCTION_bson$network$$$function_3_recvobj(  );
    UPDATE_STRING_DICT1( moduledict_bson$network, (Nuitka_StringObject *)const_str_plain_recvobj, tmp_assign_source_16 );
    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_17 = MAKE_FUNCTION_bson$network$$$function_4_recvbytes( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_bson$network, (Nuitka_StringObject *)const_str_plain_recvbytes, tmp_assign_source_17 );

    return MOD_RETURN_VALUE( module_bson$network );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
