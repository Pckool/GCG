/* Generated code for Python source for module 'django.db'
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

/* The _module_django$db is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$db;
PyDictObject *moduledict_django$db;

/* The module constants used, if any. */
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_delattr;
static PyObject *const_str_plain_close_if_unusable_or_obsolete;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_kwargs_str_plain_conn_tuple;
extern PyObject *const_str_plain_Error;
extern PyObject *const_str_plain_request_finished;
static PyObject *const_str_digest_4da5fe6f99808d6cbbdce75ec9cc139b;
extern PyObject *const_tuple_c15243b3ba68498da186d5d65ae367ca_tuple;
extern PyObject *const_str_plain_join;
static PyObject *const_str_digest_60054f37d89e9316c61360b88ef0891a;
static PyObject *const_str_digest_3280187940553b79824e8fed69b85be4;
extern PyObject *const_str_plain_connect;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_tuple_str_plain_self_str_plain_item_tuple;
static PyObject *const_str_digest_220339173d51fcff1b744616fb89a23a;
extern PyObject *const_str_plain_OperationalError;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_router;
extern PyObject *const_str_plain___ne__;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_f22a93b19fc582337699a15f4f5323af;
extern PyObject *const_str_plain___setattr__;
extern PyObject *const_tuple_9aafdb4681f02593d1d6ac7779e00e9d_tuple;
static PyObject *const_str_digest_c5a4c628f4058748712c2e68ac144ee8;
extern PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
extern PyObject *const_str_plain_queries_log;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_item;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_conn;
extern PyObject *const_str_plain_all;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_DEFAULT_DB_ALIAS;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_DataError;
extern PyObject *const_str_plain___getattr__;
extern PyObject *const_str_plain_ConnectionRouter;
extern PyObject *const_str_plain_NUITKA_PACKAGE_django_db;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_name;
static PyObject *const_str_digest_05ba7abdeb01c9289d04aef2433a7225;
extern PyObject *const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple;
extern PyObject *const_str_plain_ConnectionHandler;
extern PyObject *const_str_plain_DJANGO_VERSION_PICKLE_KEY;
extern PyObject *const_str_digest_d0d1acad20ca7072407dc5151a8806e5;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain_close_old_connections;
extern PyObject *const_str_plain_IntegrityError;
extern PyObject *const_str_plain_connection;
extern PyObject *const_str_plain___eq__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain___delattr__;
extern PyObject *const_str_digest_3a59af3086b40e635cf46a918dad8363;
extern PyObject *const_tuple_str_plain_self_str_plain_name_tuple;
extern PyObject *const_str_plain_connections;
extern PyObject *const_str_digest_320e4644aa995ec50481b843b52f70ae;
static PyObject *const_str_plain_reset_queries;
extern PyObject *const_str_plain_InterfaceError;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain___cached__;
static PyObject *const_tuple_72f2dd2803e480aaa2947cc3addb6575_tuple;
extern PyObject *const_tuple_str_plain_signals_tuple;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_ProgrammingError;
extern PyObject *const_str_plain_db;
static PyObject *const_str_digest_b757a71e865288abad3164adaf9e8fe1;
extern PyObject *const_str_plain_other;
extern PyObject *const_str_plain_InternalError;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_signals;
extern PyObject *const_str_plain_NotSupportedError;
extern PyObject *const_str_plain_NUITKA_PACKAGE_django;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_clear;
static PyObject *const_str_plain_DefaultConnectionProxy;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_DatabaseError;
static PyObject *const_list_0c00d90e72bbcfac819fef8051ce6e37_list;
extern PyObject *const_str_plain_request_started;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_close_if_unusable_or_obsolete = UNSTREAM_STRING( &constant_bin[ 827663 ], 29, 1 );
    const_tuple_str_plain_kwargs_str_plain_conn_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_kwargs_str_plain_conn_tuple, 0, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_str_plain_kwargs_str_plain_conn_tuple, 1, const_str_plain_conn ); Py_INCREF( const_str_plain_conn );
    const_str_digest_4da5fe6f99808d6cbbdce75ec9cc139b = UNSTREAM_STRING( &constant_bin[ 827692 ], 29, 0 );
    const_str_digest_60054f37d89e9316c61360b88ef0891a = UNSTREAM_STRING( &constant_bin[ 827721 ], 29, 0 );
    const_str_digest_3280187940553b79824e8fed69b85be4 = UNSTREAM_STRING( &constant_bin[ 827750 ], 34, 0 );
    const_str_digest_220339173d51fcff1b744616fb89a23a = UNSTREAM_STRING( &constant_bin[ 827784 ], 21, 0 );
    const_str_digest_f22a93b19fc582337699a15f4f5323af = UNSTREAM_STRING( &constant_bin[ 827805 ], 34, 0 );
    const_str_digest_c5a4c628f4058748712c2e68ac144ee8 = UNSTREAM_STRING( &constant_bin[ 827839 ], 34, 0 );
    const_str_digest_05ba7abdeb01c9289d04aef2433a7225 = UNSTREAM_STRING( &constant_bin[ 827873 ], 186, 0 );
    const_str_plain_close_old_connections = UNSTREAM_STRING( &constant_bin[ 828059 ], 21, 1 );
    const_str_plain_reset_queries = UNSTREAM_STRING( &constant_bin[ 828080 ], 13, 1 );
    const_tuple_72f2dd2803e480aaa2947cc3addb6575_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_72f2dd2803e480aaa2947cc3addb6575_tuple, 0, const_str_plain_DEFAULT_DB_ALIAS ); Py_INCREF( const_str_plain_DEFAULT_DB_ALIAS );
    PyTuple_SET_ITEM( const_tuple_72f2dd2803e480aaa2947cc3addb6575_tuple, 1, const_str_plain_DJANGO_VERSION_PICKLE_KEY ); Py_INCREF( const_str_plain_DJANGO_VERSION_PICKLE_KEY );
    PyTuple_SET_ITEM( const_tuple_72f2dd2803e480aaa2947cc3addb6575_tuple, 2, const_str_plain_ConnectionHandler ); Py_INCREF( const_str_plain_ConnectionHandler );
    PyTuple_SET_ITEM( const_tuple_72f2dd2803e480aaa2947cc3addb6575_tuple, 3, const_str_plain_ConnectionRouter ); Py_INCREF( const_str_plain_ConnectionRouter );
    PyTuple_SET_ITEM( const_tuple_72f2dd2803e480aaa2947cc3addb6575_tuple, 4, const_str_plain_DatabaseError ); Py_INCREF( const_str_plain_DatabaseError );
    PyTuple_SET_ITEM( const_tuple_72f2dd2803e480aaa2947cc3addb6575_tuple, 5, const_str_plain_DataError ); Py_INCREF( const_str_plain_DataError );
    PyTuple_SET_ITEM( const_tuple_72f2dd2803e480aaa2947cc3addb6575_tuple, 6, const_str_plain_Error ); Py_INCREF( const_str_plain_Error );
    PyTuple_SET_ITEM( const_tuple_72f2dd2803e480aaa2947cc3addb6575_tuple, 7, const_str_plain_IntegrityError ); Py_INCREF( const_str_plain_IntegrityError );
    PyTuple_SET_ITEM( const_tuple_72f2dd2803e480aaa2947cc3addb6575_tuple, 8, const_str_plain_InterfaceError ); Py_INCREF( const_str_plain_InterfaceError );
    PyTuple_SET_ITEM( const_tuple_72f2dd2803e480aaa2947cc3addb6575_tuple, 9, const_str_plain_InternalError ); Py_INCREF( const_str_plain_InternalError );
    PyTuple_SET_ITEM( const_tuple_72f2dd2803e480aaa2947cc3addb6575_tuple, 10, const_str_plain_NotSupportedError ); Py_INCREF( const_str_plain_NotSupportedError );
    PyTuple_SET_ITEM( const_tuple_72f2dd2803e480aaa2947cc3addb6575_tuple, 11, const_str_plain_OperationalError ); Py_INCREF( const_str_plain_OperationalError );
    PyTuple_SET_ITEM( const_tuple_72f2dd2803e480aaa2947cc3addb6575_tuple, 12, const_str_plain_ProgrammingError ); Py_INCREF( const_str_plain_ProgrammingError );
    const_str_digest_b757a71e865288abad3164adaf9e8fe1 = UNSTREAM_STRING( &constant_bin[ 828093 ], 18, 0 );
    const_str_plain_DefaultConnectionProxy = UNSTREAM_STRING( &constant_bin[ 827692 ], 22, 1 );
    const_list_0c00d90e72bbcfac819fef8051ce6e37_list = PyList_New( 14 );
    PyList_SET_ITEM( const_list_0c00d90e72bbcfac819fef8051ce6e37_list, 0, const_str_plain_connection ); Py_INCREF( const_str_plain_connection );
    PyList_SET_ITEM( const_list_0c00d90e72bbcfac819fef8051ce6e37_list, 1, const_str_plain_connections ); Py_INCREF( const_str_plain_connections );
    PyList_SET_ITEM( const_list_0c00d90e72bbcfac819fef8051ce6e37_list, 2, const_str_plain_router ); Py_INCREF( const_str_plain_router );
    PyList_SET_ITEM( const_list_0c00d90e72bbcfac819fef8051ce6e37_list, 3, const_str_plain_DatabaseError ); Py_INCREF( const_str_plain_DatabaseError );
    PyList_SET_ITEM( const_list_0c00d90e72bbcfac819fef8051ce6e37_list, 4, const_str_plain_IntegrityError ); Py_INCREF( const_str_plain_IntegrityError );
    PyList_SET_ITEM( const_list_0c00d90e72bbcfac819fef8051ce6e37_list, 5, const_str_plain_InternalError ); Py_INCREF( const_str_plain_InternalError );
    PyList_SET_ITEM( const_list_0c00d90e72bbcfac819fef8051ce6e37_list, 6, const_str_plain_ProgrammingError ); Py_INCREF( const_str_plain_ProgrammingError );
    PyList_SET_ITEM( const_list_0c00d90e72bbcfac819fef8051ce6e37_list, 7, const_str_plain_DataError ); Py_INCREF( const_str_plain_DataError );
    PyList_SET_ITEM( const_list_0c00d90e72bbcfac819fef8051ce6e37_list, 8, const_str_plain_NotSupportedError ); Py_INCREF( const_str_plain_NotSupportedError );
    PyList_SET_ITEM( const_list_0c00d90e72bbcfac819fef8051ce6e37_list, 9, const_str_plain_Error ); Py_INCREF( const_str_plain_Error );
    PyList_SET_ITEM( const_list_0c00d90e72bbcfac819fef8051ce6e37_list, 10, const_str_plain_InterfaceError ); Py_INCREF( const_str_plain_InterfaceError );
    PyList_SET_ITEM( const_list_0c00d90e72bbcfac819fef8051ce6e37_list, 11, const_str_plain_OperationalError ); Py_INCREF( const_str_plain_OperationalError );
    PyList_SET_ITEM( const_list_0c00d90e72bbcfac819fef8051ce6e37_list, 12, const_str_plain_DEFAULT_DB_ALIAS ); Py_INCREF( const_str_plain_DEFAULT_DB_ALIAS );
    PyList_SET_ITEM( const_list_0c00d90e72bbcfac819fef8051ce6e37_list, 13, const_str_plain_DJANGO_VERSION_PICKLE_KEY ); Py_INCREF( const_str_plain_DJANGO_VERSION_PICKLE_KEY );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$db( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_48f65a471fb15da8a6ce36b1f5ad1a26;
static PyCodeObject *codeobj_2cb9b6b504e7d41fc10ceceafe012ada;
static PyCodeObject *codeobj_d5eb10a4ede11ce13f0aa5a435191481;
static PyCodeObject *codeobj_e7816ffa2fe71f16529aa9c2a93590f1;
static PyCodeObject *codeobj_48fef73816ea3ef73962e1acb6afba78;
static PyCodeObject *codeobj_8236c71ba454fa575b51ad65b1ab79a2;
static PyCodeObject *codeobj_825d3e74a153e029ba5d3887320072ef;
static PyCodeObject *codeobj_427dd29c623de7caee4c13ac6c15a2c1;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_220339173d51fcff1b744616fb89a23a );
    codeobj_48f65a471fb15da8a6ce36b1f5ad1a26 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_b757a71e865288abad3164adaf9e8fe1, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_2cb9b6b504e7d41fc10ceceafe012ada = MAKE_CODEOBJ( module_filename_obj, const_str_plain___delattr__, 38, const_tuple_str_plain_self_str_plain_name_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d5eb10a4ede11ce13f0aa5a435191481 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___eq__, 41, const_tuple_str_plain_self_str_plain_other_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e7816ffa2fe71f16529aa9c2a93590f1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getattr__, 32, const_tuple_str_plain_self_str_plain_item_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_48fef73816ea3ef73962e1acb6afba78 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___ne__, 44, const_tuple_str_plain_self_str_plain_other_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8236c71ba454fa575b51ad65b1ab79a2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___setattr__, 35, const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_825d3e74a153e029ba5d3887320072ef = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close_old_connections, 62, const_tuple_str_plain_kwargs_str_plain_conn_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_427dd29c623de7caee4c13ac6c15a2c1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset_queries, 52, const_tuple_str_plain_kwargs_str_plain_conn_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_django$db$$$function_1___getattr__(  );


static PyObject *MAKE_FUNCTION_django$db$$$function_2___setattr__(  );


static PyObject *MAKE_FUNCTION_django$db$$$function_3___delattr__(  );


static PyObject *MAKE_FUNCTION_django$db$$$function_4___eq__(  );


static PyObject *MAKE_FUNCTION_django$db$$$function_5___ne__(  );


static PyObject *MAKE_FUNCTION_django$db$$$function_6_reset_queries(  );


static PyObject *MAKE_FUNCTION_django$db$$$function_7_close_old_connections(  );


// The module function definitions.
static PyObject *impl_django$db$$$function_1___getattr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_item = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_e7816ffa2fe71f16529aa9c2a93590f1 = NULL;

    struct Nuitka_FrameObject *frame_e7816ffa2fe71f16529aa9c2a93590f1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e7816ffa2fe71f16529aa9c2a93590f1, codeobj_e7816ffa2fe71f16529aa9c2a93590f1, module_django$db, sizeof(void *)+sizeof(void *) );
    frame_e7816ffa2fe71f16529aa9c2a93590f1 = cache_frame_e7816ffa2fe71f16529aa9c2a93590f1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e7816ffa2fe71f16529aa9c2a93590f1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e7816ffa2fe71f16529aa9c2a93590f1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_connections );

    if (unlikely( tmp_subscribed_name_1 == NULL ))
    {
        tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_connections );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "connections" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = GET_STRING_DICT_VALUE( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_DEFAULT_DB_ALIAS );

    if (unlikely( tmp_subscript_name_1 == NULL ))
    {
        tmp_subscript_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_DB_ALIAS );
    }

    if ( tmp_subscript_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEFAULT_DB_ALIAS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_getattr_target_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_getattr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_getattr_attr_1 = par_item;

    if ( tmp_getattr_attr_1 == NULL )
    {
        Py_DECREF( tmp_getattr_target_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "item" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
    Py_DECREF( tmp_getattr_target_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e7816ffa2fe71f16529aa9c2a93590f1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e7816ffa2fe71f16529aa9c2a93590f1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e7816ffa2fe71f16529aa9c2a93590f1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e7816ffa2fe71f16529aa9c2a93590f1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e7816ffa2fe71f16529aa9c2a93590f1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e7816ffa2fe71f16529aa9c2a93590f1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e7816ffa2fe71f16529aa9c2a93590f1,
        type_description_1,
        par_self,
        par_item
    );


    // Release cached frame.
    if ( frame_e7816ffa2fe71f16529aa9c2a93590f1 == cache_frame_e7816ffa2fe71f16529aa9c2a93590f1 )
    {
        Py_DECREF( frame_e7816ffa2fe71f16529aa9c2a93590f1 );
    }
    cache_frame_e7816ffa2fe71f16529aa9c2a93590f1 = NULL;

    assertFrameObject( frame_e7816ffa2fe71f16529aa9c2a93590f1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$$$function_1___getattr__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_item );
    par_item = NULL;

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

    Py_XDECREF( par_item );
    par_item = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$$$function_1___getattr__ );
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


static PyObject *impl_django$db$$$function_2___setattr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_value = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_setattr_attr_1;
    PyObject *tmp_setattr_target_1;
    PyObject *tmp_setattr_value_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_8236c71ba454fa575b51ad65b1ab79a2 = NULL;

    struct Nuitka_FrameObject *frame_8236c71ba454fa575b51ad65b1ab79a2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8236c71ba454fa575b51ad65b1ab79a2, codeobj_8236c71ba454fa575b51ad65b1ab79a2, module_django$db, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8236c71ba454fa575b51ad65b1ab79a2 = cache_frame_8236c71ba454fa575b51ad65b1ab79a2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8236c71ba454fa575b51ad65b1ab79a2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8236c71ba454fa575b51ad65b1ab79a2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_connections );

    if (unlikely( tmp_subscribed_name_1 == NULL ))
    {
        tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_connections );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "connections" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = GET_STRING_DICT_VALUE( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_DEFAULT_DB_ALIAS );

    if (unlikely( tmp_subscript_name_1 == NULL ))
    {
        tmp_subscript_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_DB_ALIAS );
    }

    if ( tmp_subscript_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEFAULT_DB_ALIAS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_setattr_target_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_setattr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_setattr_attr_1 = par_name;

    if ( tmp_setattr_attr_1 == NULL )
    {
        Py_DECREF( tmp_setattr_target_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_setattr_value_1 = par_value;

    if ( tmp_setattr_value_1 == NULL )
    {
        Py_DECREF( tmp_setattr_target_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = BUILTIN_SETATTR( tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1 );
    Py_DECREF( tmp_setattr_target_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8236c71ba454fa575b51ad65b1ab79a2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8236c71ba454fa575b51ad65b1ab79a2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8236c71ba454fa575b51ad65b1ab79a2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8236c71ba454fa575b51ad65b1ab79a2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8236c71ba454fa575b51ad65b1ab79a2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8236c71ba454fa575b51ad65b1ab79a2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8236c71ba454fa575b51ad65b1ab79a2,
        type_description_1,
        par_self,
        par_name,
        par_value
    );


    // Release cached frame.
    if ( frame_8236c71ba454fa575b51ad65b1ab79a2 == cache_frame_8236c71ba454fa575b51ad65b1ab79a2 )
    {
        Py_DECREF( frame_8236c71ba454fa575b51ad65b1ab79a2 );
    }
    cache_frame_8236c71ba454fa575b51ad65b1ab79a2 = NULL;

    assertFrameObject( frame_8236c71ba454fa575b51ad65b1ab79a2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$$$function_2___setattr__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( par_value );
    par_value = NULL;

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

    Py_XDECREF( par_value );
    par_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$$$function_2___setattr__ );
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


static PyObject *impl_django$db$$$function_3___delattr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
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
    static struct Nuitka_FrameObject *cache_frame_2cb9b6b504e7d41fc10ceceafe012ada = NULL;

    struct Nuitka_FrameObject *frame_2cb9b6b504e7d41fc10ceceafe012ada;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2cb9b6b504e7d41fc10ceceafe012ada, codeobj_2cb9b6b504e7d41fc10ceceafe012ada, module_django$db, sizeof(void *)+sizeof(void *) );
    frame_2cb9b6b504e7d41fc10ceceafe012ada = cache_frame_2cb9b6b504e7d41fc10ceceafe012ada;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2cb9b6b504e7d41fc10ceceafe012ada );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2cb9b6b504e7d41fc10ceceafe012ada ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_delattr );
    assert( tmp_called_name_1 != NULL );
    tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_connections );

    if (unlikely( tmp_subscribed_name_1 == NULL ))
    {
        tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_connections );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "connections" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = GET_STRING_DICT_VALUE( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_DEFAULT_DB_ALIAS );

    if (unlikely( tmp_subscript_name_1 == NULL ))
    {
        tmp_subscript_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_DB_ALIAS );
    }

    if ( tmp_subscript_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEFAULT_DB_ALIAS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_name;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_2cb9b6b504e7d41fc10ceceafe012ada->m_frame.f_lineno = 39;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2cb9b6b504e7d41fc10ceceafe012ada );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2cb9b6b504e7d41fc10ceceafe012ada );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2cb9b6b504e7d41fc10ceceafe012ada );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2cb9b6b504e7d41fc10ceceafe012ada, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2cb9b6b504e7d41fc10ceceafe012ada->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2cb9b6b504e7d41fc10ceceafe012ada, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2cb9b6b504e7d41fc10ceceafe012ada,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame.
    if ( frame_2cb9b6b504e7d41fc10ceceafe012ada == cache_frame_2cb9b6b504e7d41fc10ceceafe012ada )
    {
        Py_DECREF( frame_2cb9b6b504e7d41fc10ceceafe012ada );
    }
    cache_frame_2cb9b6b504e7d41fc10ceceafe012ada = NULL;

    assertFrameObject( frame_2cb9b6b504e7d41fc10ceceafe012ada );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$$$function_3___delattr__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$$$function_3___delattr__ );
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


static PyObject *impl_django$db$$$function_4___eq__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_d5eb10a4ede11ce13f0aa5a435191481 = NULL;

    struct Nuitka_FrameObject *frame_d5eb10a4ede11ce13f0aa5a435191481;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d5eb10a4ede11ce13f0aa5a435191481, codeobj_d5eb10a4ede11ce13f0aa5a435191481, module_django$db, sizeof(void *)+sizeof(void *) );
    frame_d5eb10a4ede11ce13f0aa5a435191481 = cache_frame_d5eb10a4ede11ce13f0aa5a435191481;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d5eb10a4ede11ce13f0aa5a435191481 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d5eb10a4ede11ce13f0aa5a435191481 ) == 2 ); // Frame stack

    // Framed code:
    tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_connections );

    if (unlikely( tmp_subscribed_name_1 == NULL ))
    {
        tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_connections );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "connections" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = GET_STRING_DICT_VALUE( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_DEFAULT_DB_ALIAS );

    if (unlikely( tmp_subscript_name_1 == NULL ))
    {
        tmp_subscript_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_DB_ALIAS );
    }

    if ( tmp_subscript_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEFAULT_DB_ALIAS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = par_other;

    if ( tmp_compexpr_right_1 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "other" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d5eb10a4ede11ce13f0aa5a435191481 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d5eb10a4ede11ce13f0aa5a435191481 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d5eb10a4ede11ce13f0aa5a435191481 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d5eb10a4ede11ce13f0aa5a435191481, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d5eb10a4ede11ce13f0aa5a435191481->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d5eb10a4ede11ce13f0aa5a435191481, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d5eb10a4ede11ce13f0aa5a435191481,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_d5eb10a4ede11ce13f0aa5a435191481 == cache_frame_d5eb10a4ede11ce13f0aa5a435191481 )
    {
        Py_DECREF( frame_d5eb10a4ede11ce13f0aa5a435191481 );
    }
    cache_frame_d5eb10a4ede11ce13f0aa5a435191481 = NULL;

    assertFrameObject( frame_d5eb10a4ede11ce13f0aa5a435191481 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$$$function_4___eq__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_other );
    par_other = NULL;

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

    Py_XDECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$$$function_4___eq__ );
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


static PyObject *impl_django$db$$$function_5___ne__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_48fef73816ea3ef73962e1acb6afba78 = NULL;

    struct Nuitka_FrameObject *frame_48fef73816ea3ef73962e1acb6afba78;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_48fef73816ea3ef73962e1acb6afba78, codeobj_48fef73816ea3ef73962e1acb6afba78, module_django$db, sizeof(void *)+sizeof(void *) );
    frame_48fef73816ea3ef73962e1acb6afba78 = cache_frame_48fef73816ea3ef73962e1acb6afba78;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_48fef73816ea3ef73962e1acb6afba78 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_48fef73816ea3ef73962e1acb6afba78 ) == 2 ); // Frame stack

    // Framed code:
    tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_connections );

    if (unlikely( tmp_subscribed_name_1 == NULL ))
    {
        tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_connections );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "connections" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = GET_STRING_DICT_VALUE( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_DEFAULT_DB_ALIAS );

    if (unlikely( tmp_subscript_name_1 == NULL ))
    {
        tmp_subscript_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_DB_ALIAS );
    }

    if ( tmp_subscript_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEFAULT_DB_ALIAS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = par_other;

    if ( tmp_compexpr_right_1 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "other" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_48fef73816ea3ef73962e1acb6afba78 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_48fef73816ea3ef73962e1acb6afba78 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_48fef73816ea3ef73962e1acb6afba78 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_48fef73816ea3ef73962e1acb6afba78, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_48fef73816ea3ef73962e1acb6afba78->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_48fef73816ea3ef73962e1acb6afba78, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_48fef73816ea3ef73962e1acb6afba78,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_48fef73816ea3ef73962e1acb6afba78 == cache_frame_48fef73816ea3ef73962e1acb6afba78 )
    {
        Py_DECREF( frame_48fef73816ea3ef73962e1acb6afba78 );
    }
    cache_frame_48fef73816ea3ef73962e1acb6afba78 = NULL;

    assertFrameObject( frame_48fef73816ea3ef73962e1acb6afba78 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$$$function_5___ne__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_other );
    par_other = NULL;

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

    Py_XDECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$$$function_5___ne__ );
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


static PyObject *impl_django$db$$$function_6_reset_queries( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_kwargs = python_pars[ 0 ];
    PyObject *var_conn = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_427dd29c623de7caee4c13ac6c15a2c1 = NULL;

    struct Nuitka_FrameObject *frame_427dd29c623de7caee4c13ac6c15a2c1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_427dd29c623de7caee4c13ac6c15a2c1, codeobj_427dd29c623de7caee4c13ac6c15a2c1, module_django$db, sizeof(void *)+sizeof(void *) );
    frame_427dd29c623de7caee4c13ac6c15a2c1 = cache_frame_427dd29c623de7caee4c13ac6c15a2c1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_427dd29c623de7caee4c13ac6c15a2c1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_427dd29c623de7caee4c13ac6c15a2c1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_connections );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_connections );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "connections" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_427dd29c623de7caee4c13ac6c15a2c1->m_frame.f_lineno = 53;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_all );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            exception_lineno = 53;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_3 );
    {
        PyObject *old = var_conn;
        var_conn = tmp_assign_source_3;
        Py_INCREF( var_conn );
        Py_XDECREF( old );
    }

    tmp_source_name_1 = var_conn;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_queries_log );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    frame_427dd29c623de7caee4c13ac6c15a2c1->m_frame.f_lineno = 54;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_clear );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_427dd29c623de7caee4c13ac6c15a2c1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_427dd29c623de7caee4c13ac6c15a2c1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_427dd29c623de7caee4c13ac6c15a2c1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_427dd29c623de7caee4c13ac6c15a2c1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_427dd29c623de7caee4c13ac6c15a2c1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_427dd29c623de7caee4c13ac6c15a2c1,
        type_description_1,
        par_kwargs,
        var_conn
    );


    // Release cached frame.
    if ( frame_427dd29c623de7caee4c13ac6c15a2c1 == cache_frame_427dd29c623de7caee4c13ac6c15a2c1 )
    {
        Py_DECREF( frame_427dd29c623de7caee4c13ac6c15a2c1 );
    }
    cache_frame_427dd29c623de7caee4c13ac6c15a2c1 = NULL;

    assertFrameObject( frame_427dd29c623de7caee4c13ac6c15a2c1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$$$function_6_reset_queries );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_conn );
    var_conn = NULL;

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

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_conn );
    var_conn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$$$function_6_reset_queries );
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


static PyObject *impl_django$db$$$function_7_close_old_connections( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_kwargs = python_pars[ 0 ];
    PyObject *var_conn = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_825d3e74a153e029ba5d3887320072ef = NULL;

    struct Nuitka_FrameObject *frame_825d3e74a153e029ba5d3887320072ef;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_825d3e74a153e029ba5d3887320072ef, codeobj_825d3e74a153e029ba5d3887320072ef, module_django$db, sizeof(void *)+sizeof(void *) );
    frame_825d3e74a153e029ba5d3887320072ef = cache_frame_825d3e74a153e029ba5d3887320072ef;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_825d3e74a153e029ba5d3887320072ef );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_825d3e74a153e029ba5d3887320072ef ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_connections );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_connections );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "connections" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_825d3e74a153e029ba5d3887320072ef->m_frame.f_lineno = 63;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_all );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            exception_lineno = 63;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_3 );
    {
        PyObject *old = var_conn;
        var_conn = tmp_assign_source_3;
        Py_INCREF( var_conn );
        Py_XDECREF( old );
    }

    tmp_called_instance_2 = var_conn;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_825d3e74a153e029ba5d3887320072ef->m_frame.f_lineno = 64;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_close_if_unusable_or_obsolete );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_825d3e74a153e029ba5d3887320072ef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_825d3e74a153e029ba5d3887320072ef );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_825d3e74a153e029ba5d3887320072ef, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_825d3e74a153e029ba5d3887320072ef->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_825d3e74a153e029ba5d3887320072ef, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_825d3e74a153e029ba5d3887320072ef,
        type_description_1,
        par_kwargs,
        var_conn
    );


    // Release cached frame.
    if ( frame_825d3e74a153e029ba5d3887320072ef == cache_frame_825d3e74a153e029ba5d3887320072ef )
    {
        Py_DECREF( frame_825d3e74a153e029ba5d3887320072ef );
    }
    cache_frame_825d3e74a153e029ba5d3887320072ef = NULL;

    assertFrameObject( frame_825d3e74a153e029ba5d3887320072ef );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$$$function_7_close_old_connections );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_conn );
    var_conn = NULL;

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

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_conn );
    var_conn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$$$function_7_close_old_connections );
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



static PyObject *MAKE_FUNCTION_django$db$$$function_1___getattr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$db$$$function_1___getattr__,
        const_str_plain___getattr__,
#if PYTHON_VERSION >= 330
        const_str_digest_3280187940553b79824e8fed69b85be4,
#endif
        codeobj_e7816ffa2fe71f16529aa9c2a93590f1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$db,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$db$$$function_2___setattr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$db$$$function_2___setattr__,
        const_str_plain___setattr__,
#if PYTHON_VERSION >= 330
        const_str_digest_f22a93b19fc582337699a15f4f5323af,
#endif
        codeobj_8236c71ba454fa575b51ad65b1ab79a2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$db,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$db$$$function_3___delattr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$db$$$function_3___delattr__,
        const_str_plain___delattr__,
#if PYTHON_VERSION >= 330
        const_str_digest_c5a4c628f4058748712c2e68ac144ee8,
#endif
        codeobj_2cb9b6b504e7d41fc10ceceafe012ada,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$db,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$db$$$function_4___eq__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$db$$$function_4___eq__,
        const_str_plain___eq__,
#if PYTHON_VERSION >= 330
        const_str_digest_4da5fe6f99808d6cbbdce75ec9cc139b,
#endif
        codeobj_d5eb10a4ede11ce13f0aa5a435191481,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$db,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$db$$$function_5___ne__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$db$$$function_5___ne__,
        const_str_plain___ne__,
#if PYTHON_VERSION >= 330
        const_str_digest_60054f37d89e9316c61360b88ef0891a,
#endif
        codeobj_48fef73816ea3ef73962e1acb6afba78,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$db,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$db$$$function_6_reset_queries(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$db$$$function_6_reset_queries,
        const_str_plain_reset_queries,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_427dd29c623de7caee4c13ac6c15a2c1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$db,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$db$$$function_7_close_old_connections(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$db$$$function_7_close_old_connections,
        const_str_plain_close_old_connections,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_825d3e74a153e029ba5d3887320072ef,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$db,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$db =
{
    PyModuleDef_HEAD_INIT,
    "django.db",   /* m_name */
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

MOD_INIT_DECL( django$db )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$db );
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
    puts("django.db: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.db: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$db" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$db = Py_InitModule4(
        "django.db",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$db = PyModule_Create( &mdef_django$db );
#endif

    moduledict_django$db = MODULE_DICT( module_django$db );

    CHECK_OBJECT( module_django$db );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_3a59af3086b40e635cf46a918dad8363, module_django$db );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$db, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$db, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$db, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_0_var___qualname__ = NULL;
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *outline_0_var___getattr__ = NULL;
    PyObject *outline_0_var___setattr__ = NULL;
    PyObject *outline_0_var___delattr__ = NULL;
    PyObject *outline_0_var___eq__ = NULL;
    PyObject *outline_0_var___ne__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
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
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_assign_source_42;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_import_name_from_9;
    PyObject *tmp_import_name_from_10;
    PyObject *tmp_import_name_from_11;
    PyObject *tmp_import_name_from_12;
    PyObject *tmp_import_name_from_13;
    PyObject *tmp_import_name_from_14;
    PyObject *tmp_key_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    struct Nuitka_FrameObject *frame_48f65a471fb15da8a6ce36b1f5ad1a26;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    // Locals dictionary setup.
PyObject *locals_dict_1 = PyDict_New();


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$db, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$db, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_48f65a471fb15da8a6ce36b1f5ad1a26 = MAKE_MODULE_FRAME( codeobj_48f65a471fb15da8a6ce36b1f5ad1a26, module_django$db );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_48f65a471fb15da8a6ce36b1f5ad1a26 );
    assert( Py_REFCNT( frame_48f65a471fb15da8a6ce36b1f5ad1a26 ) == 2 );

    // Framed code:
    tmp_assign_source_3 = PyList_New( 3 );
    frame_48f65a471fb15da8a6ce36b1f5ad1a26->m_frame.f_lineno = 1;
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
    frame_48f65a471fb15da8a6ce36b1f5ad1a26->m_frame.f_lineno = 1;
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
    frame_48f65a471fb15da8a6ce36b1f5ad1a26->m_frame.f_lineno = 1;
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
    frame_48f65a471fb15da8a6ce36b1f5ad1a26->m_frame.f_lineno = 1;
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
    frame_48f65a471fb15da8a6ce36b1f5ad1a26->m_frame.f_lineno = 1;
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
    tmp_args_element_name_3 = const_str_plain_db;
    frame_48f65a471fb15da8a6ce36b1f5ad1a26->m_frame.f_lineno = 1;
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
    frame_48f65a471fb15da8a6ce36b1f5ad1a26->m_frame.f_lineno = 1;
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

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    frame_48f65a471fb15da8a6ce36b1f5ad1a26->m_frame.f_lineno = 1;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_9aafdb4681f02593d1d6ac7779e00e9d_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 2, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_django$db, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$db, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_4 );
    frame_48f65a471fb15da8a6ce36b1f5ad1a26->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("importlib._bootstrap");
        if (likely( module != NULL ))
        {
            tmp_called_name_3 = PyObject_GetAttr( module, const_str_plain_ModuleSpec );
        }
        else
        {
            tmp_called_name_3 = NULL;
        }
    }

    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = const_str_digest_3a59af3086b40e635cf46a918dad8363;
    tmp_args_element_name_5 = metapath_based_loader;
    frame_48f65a471fb15da8a6ce36b1f5ad1a26->m_frame.f_lineno = 1;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_5 );
    tmp_assign_source_6 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$db, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_3a59af3086b40e635cf46a918dad8363;
    UPDATE_STRING_DICT0( moduledict_django$db, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_7 );
    tmp_name_name_1 = const_str_digest_d0d1acad20ca7072407dc5151a8806e5;
    tmp_globals_name_1 = (PyObject *)moduledict_django$db;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_signals_tuple;
    tmp_level_name_1 = const_int_0;
    frame_48f65a471fb15da8a6ce36b1f5ad1a26->m_frame.f_lineno = 1;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_signals );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_signals, tmp_assign_source_8 );
    tmp_name_name_2 = const_str_digest_320e4644aa995ec50481b843b52f70ae;
    tmp_globals_name_2 = (PyObject *)moduledict_django$db;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_72f2dd2803e480aaa2947cc3addb6575_tuple;
    tmp_level_name_2 = const_int_0;
    frame_48f65a471fb15da8a6ce36b1f5ad1a26->m_frame.f_lineno = 2;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_9;

    // Tried code:
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_DEFAULT_DB_ALIAS );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_DEFAULT_DB_ALIAS, tmp_assign_source_10 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_DJANGO_VERSION_PICKLE_KEY );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_DJANGO_VERSION_PICKLE_KEY, tmp_assign_source_11 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_ConnectionHandler );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_ConnectionHandler, tmp_assign_source_12 );
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_ConnectionRouter );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_ConnectionRouter, tmp_assign_source_13 );
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_DatabaseError );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_DatabaseError, tmp_assign_source_14 );
    tmp_import_name_from_7 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_DataError );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_DataError, tmp_assign_source_15 );
    tmp_import_name_from_8 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_Error );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_Error, tmp_assign_source_16 );
    tmp_import_name_from_9 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_IntegrityError );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_IntegrityError, tmp_assign_source_17 );
    tmp_import_name_from_10 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_InterfaceError );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_InterfaceError, tmp_assign_source_18 );
    tmp_import_name_from_11 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_InternalError );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_InternalError, tmp_assign_source_19 );
    tmp_import_name_from_12 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_NotSupportedError );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_NotSupportedError, tmp_assign_source_20 );
    tmp_import_name_from_13 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_OperationalError );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_OperationalError, tmp_assign_source_21 );
    tmp_import_name_from_14 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_14 );
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_ProgrammingError );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_ProgrammingError, tmp_assign_source_22 );
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

    tmp_assign_source_23 = LIST_COPY( const_list_0c00d90e72bbcfac819fef8051ce6e37_list );
    UPDATE_STRING_DICT1( moduledict_django$db, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_23 );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_ConnectionHandler );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionHandler );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ConnectionHandler" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 16;

        goto frame_exception_exit_1;
    }

    frame_48f65a471fb15da8a6ce36b1f5ad1a26->m_frame.f_lineno = 16;
    tmp_assign_source_24 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_connections, tmp_assign_source_24 );
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_ConnectionRouter );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionRouter );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ConnectionRouter" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 18;

        goto frame_exception_exit_1;
    }

    frame_48f65a471fb15da8a6ce36b1f5ad1a26->m_frame.f_lineno = 18;
    tmp_assign_source_25 = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_router, tmp_assign_source_25 );
    tmp_assign_source_26 = const_tuple_type_object_tuple;
    assert( tmp_class_creation_1__bases == NULL );
    Py_INCREF( tmp_assign_source_26 );
    tmp_class_creation_1__bases = tmp_assign_source_26;

    tmp_assign_source_27 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_27;

    // Tried code:
    tmp_compare_left_1 = const_str_plain_metaclass;
    tmp_compare_right_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
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


        exception_lineno = 26;

        goto try_except_handler_2;
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


        exception_lineno = 26;

        goto try_except_handler_2;
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


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_28 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 26;

        goto try_except_handler_2;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_28;

    tmp_compare_left_2 = const_str_plain_metaclass;
    tmp_compare_right_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    branch_no_1:;
    tmp_hasattr_source_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
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
    tmp_source_name_3 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_DefaultConnectionProxy;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_48f65a471fb15da8a6ce36b1f5ad1a26->m_frame.f_lineno = 26;
    tmp_assign_source_29 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_29 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_29;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_1);
    locals_dict_1 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_31 = const_str_digest_3a59af3086b40e635cf46a918dad8363;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_31 );
    outline_0_var___module__ = tmp_assign_source_31;

    tmp_assign_source_32 = const_str_digest_05ba7abdeb01c9289d04aef2433a7225;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_32 );
    outline_0_var___doc__ = tmp_assign_source_32;

    tmp_assign_source_33 = const_str_plain_DefaultConnectionProxy;
    assert( outline_0_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_33 );
    outline_0_var___qualname__ = tmp_assign_source_33;

    tmp_assign_source_34 = MAKE_FUNCTION_django$db$$$function_1___getattr__(  );
    assert( outline_0_var___getattr__ == NULL );
    outline_0_var___getattr__ = tmp_assign_source_34;

    tmp_assign_source_35 = MAKE_FUNCTION_django$db$$$function_2___setattr__(  );
    assert( outline_0_var___setattr__ == NULL );
    outline_0_var___setattr__ = tmp_assign_source_35;

    tmp_assign_source_36 = MAKE_FUNCTION_django$db$$$function_3___delattr__(  );
    assert( outline_0_var___delattr__ == NULL );
    outline_0_var___delattr__ = tmp_assign_source_36;

    tmp_assign_source_37 = MAKE_FUNCTION_django$db$$$function_4___eq__(  );
    assert( outline_0_var___eq__ == NULL );
    outline_0_var___eq__ = tmp_assign_source_37;

    tmp_assign_source_38 = MAKE_FUNCTION_django$db$$$function_5___ne__(  );
    assert( outline_0_var___ne__ == NULL );
    outline_0_var___ne__ = tmp_assign_source_38;

    // Tried code:
    tmp_called_name_7 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_7 );
    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_2 = const_str_plain_DefaultConnectionProxy;
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

        exception_lineno = 26;

        goto try_except_handler_3;
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

        exception_lineno = 26;

        goto try_except_handler_3;
    }
    if ( outline_0_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain___doc__,
            outline_0_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
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
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 26;

        goto try_except_handler_3;
    }
    if ( outline_0_var___getattr__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain___getattr__,
            outline_0_var___getattr__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain___getattr__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain___getattr__
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

        exception_lineno = 26;

        goto try_except_handler_3;
    }
    if ( outline_0_var___setattr__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain___setattr__,
            outline_0_var___setattr__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain___setattr__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain___setattr__
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

        exception_lineno = 26;

        goto try_except_handler_3;
    }
    if ( outline_0_var___delattr__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain___delattr__,
            outline_0_var___delattr__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain___delattr__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain___delattr__
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

        exception_lineno = 26;

        goto try_except_handler_3;
    }
    if ( outline_0_var___eq__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain___eq__,
            outline_0_var___eq__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain___eq__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain___eq__
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

        exception_lineno = 26;

        goto try_except_handler_3;
    }
    if ( outline_0_var___ne__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain___ne__,
            outline_0_var___ne__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain___ne__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain___ne__
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

        exception_lineno = 26;

        goto try_except_handler_3;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_48f65a471fb15da8a6ce36b1f5ad1a26->m_frame.f_lineno = 26;
    tmp_assign_source_39 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_3;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_39;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    Py_XDECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    Py_XDECREF( outline_0_var___getattr__ );
    outline_0_var___getattr__ = NULL;

    Py_XDECREF( outline_0_var___setattr__ );
    outline_0_var___setattr__ = NULL;

    Py_XDECREF( outline_0_var___delattr__ );
    outline_0_var___delattr__ = NULL;

    Py_XDECREF( outline_0_var___eq__ );
    outline_0_var___eq__ = NULL;

    Py_XDECREF( outline_0_var___ne__ );
    outline_0_var___ne__ = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_3:;
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

    Py_XDECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    Py_XDECREF( outline_0_var___getattr__ );
    outline_0_var___getattr__ = NULL;

    Py_XDECREF( outline_0_var___setattr__ );
    outline_0_var___setattr__ = NULL;

    Py_XDECREF( outline_0_var___delattr__ );
    outline_0_var___delattr__ = NULL;

    Py_XDECREF( outline_0_var___eq__ );
    outline_0_var___eq__ = NULL;

    Py_XDECREF( outline_0_var___ne__ );
    outline_0_var___ne__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 26;
    goto try_except_handler_2;
    outline_result_1:;
    tmp_assign_source_30 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_DefaultConnectionProxy, tmp_assign_source_30 );
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
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

    goto frame_exception_exit_1;
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

    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_DefaultConnectionProxy );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DefaultConnectionProxy );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DefaultConnectionProxy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;

        goto frame_exception_exit_1;
    }

    frame_48f65a471fb15da8a6ce36b1f5ad1a26->m_frame.f_lineno = 48;
    tmp_assign_source_40 = CALL_FUNCTION_NO_ARGS( tmp_called_name_8 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_connection, tmp_assign_source_40 );
    tmp_assign_source_41 = MAKE_FUNCTION_django$db$$$function_6_reset_queries(  );
    UPDATE_STRING_DICT1( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_reset_queries, tmp_assign_source_41 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_signals );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_signals );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "signals" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;

        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_request_started );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;

        goto frame_exception_exit_1;
    }
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_connect );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = GET_STRING_DICT_VALUE( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_reset_queries );

    if (unlikely( tmp_args_element_name_6 == NULL ))
    {
        tmp_args_element_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_reset_queries );
    }

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "reset_queries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;

        goto frame_exception_exit_1;
    }

    frame_48f65a471fb15da8a6ce36b1f5ad1a26->m_frame.f_lineno = 57;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_42 = MAKE_FUNCTION_django$db$$$function_7_close_old_connections(  );
    UPDATE_STRING_DICT1( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_close_old_connections, tmp_assign_source_42 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_signals );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_signals );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "signals" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;

        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_request_started );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;

        goto frame_exception_exit_1;
    }
    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_connect );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = GET_STRING_DICT_VALUE( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_close_old_connections );

    if (unlikely( tmp_args_element_name_7 == NULL ))
    {
        tmp_args_element_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_close_old_connections );
    }

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "close_old_connections" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;

        goto frame_exception_exit_1;
    }

    frame_48f65a471fb15da8a6ce36b1f5ad1a26->m_frame.f_lineno = 67;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_signals );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_signals );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "signals" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;

        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_request_finished );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto frame_exception_exit_1;
    }
    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_connect );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = GET_STRING_DICT_VALUE( moduledict_django$db, (Nuitka_StringObject *)const_str_plain_close_old_connections );

    if (unlikely( tmp_args_element_name_8 == NULL ))
    {
        tmp_args_element_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_close_old_connections );
    }

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "close_old_connections" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;

        goto frame_exception_exit_1;
    }

    frame_48f65a471fb15da8a6ce36b1f5ad1a26->m_frame.f_lineno = 68;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_48f65a471fb15da8a6ce36b1f5ad1a26 );
#endif
    popFrameStack();

    assertFrameObject( frame_48f65a471fb15da8a6ce36b1f5ad1a26 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_48f65a471fb15da8a6ce36b1f5ad1a26 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_48f65a471fb15da8a6ce36b1f5ad1a26, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_48f65a471fb15da8a6ce36b1f5ad1a26->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_48f65a471fb15da8a6ce36b1f5ad1a26, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_django$db );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
