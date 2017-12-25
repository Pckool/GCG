/* Generated code for Python source for module 'tweepy'
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

/* The _module_tweepy is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_tweepy;
PyDictObject *moduledict_tweepy;

/* The module constants used, if any. */
extern PyObject *const_str_plain_AppAuthHandler;
extern PyObject *const_str_plain_Status;
extern PyObject *const_str_plain_environ;
static PyObject *const_str_digest_93209b7c0f9d10e4f5362aef518cc8fd;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_Stream;
static PyObject *const_tuple_str_plain_Cursor_tuple;
extern PyObject *const_str_plain_api;
extern PyObject *const_str_plain_debug;
static PyObject *const_tuple_str_plain_OAuthHandler_str_plain_AppAuthHandler_tuple;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_a0f090a0bf0d39be045513993b4da027;
static PyObject *const_tuple_str_plain_Cache_str_plain_MemoryCache_str_plain_FileCache_tuple;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_HTTPConnection;
extern PyObject *const_str_digest_eefde7c00c3216345f2e7c1eca9ec9bc;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_OAuthHandler;
static PyObject *const_str_digest_e89b55bf2b4ea45ed080dbac0e331ee0;
extern PyObject *const_str_plain_MemoryCache;
extern PyObject *const_str_digest_c8eaf599475ed8db651002895b6ef775;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain_User;
extern PyObject *const_str_plain_SearchResults;
static PyObject *const_tuple_str_digest_93209b7c0f9d10e4f5362aef518cc8fd_tuple;
extern PyObject *const_str_plain_path;
extern PyObject *const_int_0;
extern PyObject *const_str_digest_ac53d549a3da5a3a4a9e9324f5482ced;
static PyObject *const_tuple_70cae70822ea2d566626dd2cd32a1a3c_tuple;
static PyObject *const_tuple_fc42302aa616bb8ab3acc840c3bbcd20_tuple;
static PyObject *const_str_plain_enable;
extern PyObject *const_str_plain_RateLimitError;
extern PyObject *const_str_plain_API;
extern PyObject *const_str_plain_MIT;
extern PyObject *const_str_plain_http_client;
extern PyObject *const_str_plain_print;
extern PyObject *const_str_plain_DirectMessage;
extern PyObject *const_str_digest_318d530b67181ca3fe064e54d3223515;
extern PyObject *const_str_plain_level;
extern PyObject *const_str_plain_Cache;
static PyObject *const_str_plain_debuglevel;
static PyObject *const_str_plain_NUITKA_PACKAGE_tweepy;
extern PyObject *const_str_plain___author__;
extern PyObject *const_str_plain_FileCache;
extern PyObject *const_str_digest_e54518659f8bd83bab5b18e0c951bc41;
extern PyObject *const_str_plain_Category;
extern PyObject *const_str_digest_4fe4e33419813bebd8b0147aaca0d197;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_str_plain___license__;
static PyObject *const_tuple_str_plain_enable_str_plain_level_str_plain_HTTPConnection_tuple;
extern PyObject *const_str_plain_ModelFactory;
extern PyObject *const_str_plain_TweepError;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_fa9d79205ea1484213d361e256439e5b;
extern PyObject *const_str_plain_get;
extern PyObject *const_tuple_str_plain_HTTPConnection_tuple;
static PyObject *const_tuple_str_plain_TweepError_str_plain_RateLimitError_tuple;
extern PyObject *const_str_plain_StreamListener;
static PyObject *const_tuple_str_plain_Stream_str_plain_StreamListener_tuple;
extern PyObject *const_str_plain_tweepy;
extern PyObject *const_str_plain_Cursor;
extern PyObject *const_str_plain___loader__;
static PyObject *const_str_digest_74001bb4b4c4c36667157f1e2cafc88e;
static PyObject *const_tuple_true_int_pos_1_tuple;
extern PyObject *const_tuple_str_plain_API_tuple;
static PyObject *const_str_digest_130eccf5f30aac9cff86c8853d3cd403;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_digest_ca0d94460f56234ef147c7fbf497fc49;
extern PyObject *const_str_plain_Friendship;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_SavedSearch;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_93209b7c0f9d10e4f5362aef518cc8fd = UNSTREAM_STRING( &constant_bin[ 1883422 ], 25, 0 );
    const_tuple_str_plain_Cursor_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Cursor_tuple, 0, const_str_plain_Cursor ); Py_INCREF( const_str_plain_Cursor );
    const_tuple_str_plain_OAuthHandler_str_plain_AppAuthHandler_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_OAuthHandler_str_plain_AppAuthHandler_tuple, 0, const_str_plain_OAuthHandler ); Py_INCREF( const_str_plain_OAuthHandler );
    PyTuple_SET_ITEM( const_tuple_str_plain_OAuthHandler_str_plain_AppAuthHandler_tuple, 1, const_str_plain_AppAuthHandler ); Py_INCREF( const_str_plain_AppAuthHandler );
    const_str_digest_a0f090a0bf0d39be045513993b4da027 = UNSTREAM_STRING( &constant_bin[ 1883447 ], 16, 0 );
    const_tuple_str_plain_Cache_str_plain_MemoryCache_str_plain_FileCache_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Cache_str_plain_MemoryCache_str_plain_FileCache_tuple, 0, const_str_plain_Cache ); Py_INCREF( const_str_plain_Cache );
    PyTuple_SET_ITEM( const_tuple_str_plain_Cache_str_plain_MemoryCache_str_plain_FileCache_tuple, 1, const_str_plain_MemoryCache ); Py_INCREF( const_str_plain_MemoryCache );
    PyTuple_SET_ITEM( const_tuple_str_plain_Cache_str_plain_MemoryCache_str_plain_FileCache_tuple, 2, const_str_plain_FileCache ); Py_INCREF( const_str_plain_FileCache );
    const_str_digest_e89b55bf2b4ea45ed080dbac0e331ee0 = UNSTREAM_STRING( &constant_bin[ 1883463 ], 28, 0 );
    const_tuple_str_digest_93209b7c0f9d10e4f5362aef518cc8fd_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_93209b7c0f9d10e4f5362aef518cc8fd_tuple, 0, const_str_digest_93209b7c0f9d10e4f5362aef518cc8fd ); Py_INCREF( const_str_digest_93209b7c0f9d10e4f5362aef518cc8fd );
    const_tuple_70cae70822ea2d566626dd2cd32a1a3c_tuple = PyTuple_New( 2 );
    const_str_plain_NUITKA_PACKAGE_tweepy = UNSTREAM_STRING( &constant_bin[ 1883491 ], 21, 1 );
    PyTuple_SET_ITEM( const_tuple_70cae70822ea2d566626dd2cd32a1a3c_tuple, 0, const_str_plain_NUITKA_PACKAGE_tweepy ); Py_INCREF( const_str_plain_NUITKA_PACKAGE_tweepy );
    PyTuple_SET_ITEM( const_tuple_70cae70822ea2d566626dd2cd32a1a3c_tuple, 1, const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 ); Py_INCREF( const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 );
    const_tuple_fc42302aa616bb8ab3acc840c3bbcd20_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_fc42302aa616bb8ab3acc840c3bbcd20_tuple, 0, const_str_plain_Status ); Py_INCREF( const_str_plain_Status );
    PyTuple_SET_ITEM( const_tuple_fc42302aa616bb8ab3acc840c3bbcd20_tuple, 1, const_str_plain_User ); Py_INCREF( const_str_plain_User );
    PyTuple_SET_ITEM( const_tuple_fc42302aa616bb8ab3acc840c3bbcd20_tuple, 2, const_str_plain_DirectMessage ); Py_INCREF( const_str_plain_DirectMessage );
    PyTuple_SET_ITEM( const_tuple_fc42302aa616bb8ab3acc840c3bbcd20_tuple, 3, const_str_plain_Friendship ); Py_INCREF( const_str_plain_Friendship );
    PyTuple_SET_ITEM( const_tuple_fc42302aa616bb8ab3acc840c3bbcd20_tuple, 4, const_str_plain_SavedSearch ); Py_INCREF( const_str_plain_SavedSearch );
    PyTuple_SET_ITEM( const_tuple_fc42302aa616bb8ab3acc840c3bbcd20_tuple, 5, const_str_plain_SearchResults ); Py_INCREF( const_str_plain_SearchResults );
    PyTuple_SET_ITEM( const_tuple_fc42302aa616bb8ab3acc840c3bbcd20_tuple, 6, const_str_plain_ModelFactory ); Py_INCREF( const_str_plain_ModelFactory );
    PyTuple_SET_ITEM( const_tuple_fc42302aa616bb8ab3acc840c3bbcd20_tuple, 7, const_str_plain_Category ); Py_INCREF( const_str_plain_Category );
    const_str_plain_enable = UNSTREAM_STRING( &constant_bin[ 132047 ], 6, 1 );
    const_str_plain_debuglevel = UNSTREAM_STRING( &constant_bin[ 1883512 ], 10, 1 );
    const_tuple_str_plain_enable_str_plain_level_str_plain_HTTPConnection_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_enable_str_plain_level_str_plain_HTTPConnection_tuple, 0, const_str_plain_enable ); Py_INCREF( const_str_plain_enable );
    PyTuple_SET_ITEM( const_tuple_str_plain_enable_str_plain_level_str_plain_HTTPConnection_tuple, 1, const_str_plain_level ); Py_INCREF( const_str_plain_level );
    PyTuple_SET_ITEM( const_tuple_str_plain_enable_str_plain_level_str_plain_HTTPConnection_tuple, 2, const_str_plain_HTTPConnection ); Py_INCREF( const_str_plain_HTTPConnection );
    const_str_digest_fa9d79205ea1484213d361e256439e5b = UNSTREAM_STRING( &constant_bin[ 1883522 ], 15, 0 );
    const_tuple_str_plain_TweepError_str_plain_RateLimitError_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_TweepError_str_plain_RateLimitError_tuple, 0, const_str_plain_TweepError ); Py_INCREF( const_str_plain_TweepError );
    PyTuple_SET_ITEM( const_tuple_str_plain_TweepError_str_plain_RateLimitError_tuple, 1, const_str_plain_RateLimitError ); Py_INCREF( const_str_plain_RateLimitError );
    const_tuple_str_plain_Stream_str_plain_StreamListener_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Stream_str_plain_StreamListener_tuple, 0, const_str_plain_Stream ); Py_INCREF( const_str_plain_Stream );
    PyTuple_SET_ITEM( const_tuple_str_plain_Stream_str_plain_StreamListener_tuple, 1, const_str_plain_StreamListener ); Py_INCREF( const_str_plain_StreamListener );
    const_str_digest_74001bb4b4c4c36667157f1e2cafc88e = UNSTREAM_STRING( &constant_bin[ 1883537 ], 18, 0 );
    const_tuple_true_int_pos_1_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_true_int_pos_1_tuple, 0, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_true_int_pos_1_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_str_digest_130eccf5f30aac9cff86c8853d3cd403 = UNSTREAM_STRING( &constant_bin[ 1883555 ], 5, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_tweepy( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_e05dd83ce2300a2ed33ce4a40afc3bb5;
static PyCodeObject *codeobj_444fc3cd0e1da94f25ba80791f3e398a;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_74001bb4b4c4c36667157f1e2cafc88e );
    codeobj_e05dd83ce2300a2ed33ce4a40afc3bb5 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_fa9d79205ea1484213d361e256439e5b, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_444fc3cd0e1da94f25ba80791f3e398a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_debug, 23, const_tuple_str_plain_enable_str_plain_level_str_plain_HTTPConnection_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_tweepy$$$function_1_debug( PyObject *defaults );


// The module function definitions.
static PyObject *impl_tweepy$$$function_1_debug( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_enable = python_pars[ 0 ];
    PyObject *par_level = python_pars[ 1 ];
    PyObject *var_HTTPConnection = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_444fc3cd0e1da94f25ba80791f3e398a = NULL;

    struct Nuitka_FrameObject *frame_444fc3cd0e1da94f25ba80791f3e398a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_444fc3cd0e1da94f25ba80791f3e398a, codeobj_444fc3cd0e1da94f25ba80791f3e398a, module_tweepy, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_444fc3cd0e1da94f25ba80791f3e398a = cache_frame_444fc3cd0e1da94f25ba80791f3e398a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_444fc3cd0e1da94f25ba80791f3e398a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_444fc3cd0e1da94f25ba80791f3e398a ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_name_name_1 = const_str_plain_http_client;
    tmp_globals_name_1 = (PyObject *)moduledict_tweepy;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_HTTPConnection_tuple;
    tmp_level_name_1 = const_int_0;
    frame_444fc3cd0e1da94f25ba80791f3e398a->m_frame.f_lineno = 26;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_HTTPConnection );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    assert( var_HTTPConnection == NULL );
    var_HTTPConnection = tmp_assign_source_1;

    tmp_assattr_name_1 = par_level;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "level" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    tmp_assattr_target_1 = var_HTTPConnection;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_debuglevel, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
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

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_444fc3cd0e1da94f25ba80791f3e398a, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_444fc3cd0e1da94f25ba80791f3e398a, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_Exception;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "ooo";
        goto try_except_handler_3;
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
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_print );
    assert( tmp_called_name_1 != NULL );
    frame_444fc3cd0e1da94f25ba80791f3e398a->m_frame.f_lineno = 29;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_93209b7c0f9d10e4f5362aef518cc8fd_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 25;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_444fc3cd0e1da94f25ba80791f3e398a->m_frame) frame_444fc3cd0e1da94f25ba80791f3e398a->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_3;
    branch_end_1:;
    goto try_end_2;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$$$function_1_debug );
    return NULL;
    // End of try:
    try_end_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_444fc3cd0e1da94f25ba80791f3e398a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_444fc3cd0e1da94f25ba80791f3e398a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_444fc3cd0e1da94f25ba80791f3e398a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_444fc3cd0e1da94f25ba80791f3e398a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_444fc3cd0e1da94f25ba80791f3e398a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_444fc3cd0e1da94f25ba80791f3e398a,
        type_description_1,
        par_enable,
        par_level,
        var_HTTPConnection
    );


    // Release cached frame.
    if ( frame_444fc3cd0e1da94f25ba80791f3e398a == cache_frame_444fc3cd0e1da94f25ba80791f3e398a )
    {
        Py_DECREF( frame_444fc3cd0e1da94f25ba80791f3e398a );
    }
    cache_frame_444fc3cd0e1da94f25ba80791f3e398a = NULL;

    assertFrameObject( frame_444fc3cd0e1da94f25ba80791f3e398a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tweepy$$$function_1_debug );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_enable );
    par_enable = NULL;

    Py_XDECREF( par_level );
    par_level = NULL;

    Py_XDECREF( var_HTTPConnection );
    var_HTTPConnection = NULL;

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

    Py_XDECREF( par_enable );
    par_enable = NULL;

    Py_XDECREF( par_level );
    par_level = NULL;

    Py_XDECREF( var_HTTPConnection );
    var_HTTPConnection = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tweepy$$$function_1_debug );
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



static PyObject *MAKE_FUNCTION_tweepy$$$function_1_debug( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tweepy$$$function_1_debug,
        const_str_plain_debug,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_444fc3cd0e1da94f25ba80791f3e398a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tweepy,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_tweepy =
{
    PyModuleDef_HEAD_INIT,
    "tweepy",   /* m_name */
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

MOD_INIT_DECL( tweepy )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_tweepy );
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
    puts("tweepy: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("tweepy: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in inittweepy" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_tweepy = Py_InitModule4(
        "tweepy",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_tweepy = PyModule_Create( &mdef_tweepy );
#endif

    moduledict_tweepy = MODULE_DICT( module_tweepy );

    CHECK_OBJECT( module_tweepy );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_tweepy, module_tweepy );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_defaults_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
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
    PyObject *tmp_import_name_from_15;
    PyObject *tmp_import_name_from_16;
    PyObject *tmp_import_name_from_17;
    PyObject *tmp_import_name_from_18;
    PyObject *tmp_import_name_from_19;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_list_element_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_source_name_1;
    struct Nuitka_FrameObject *frame_e05dd83ce2300a2ed33ce4a40afc3bb5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_e89b55bf2b4ea45ed080dbac0e331ee0;
    UPDATE_STRING_DICT0( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_e05dd83ce2300a2ed33ce4a40afc3bb5 = MAKE_MODULE_FRAME( codeobj_e05dd83ce2300a2ed33ce4a40afc3bb5, module_tweepy );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_e05dd83ce2300a2ed33ce4a40afc3bb5 );
    assert( Py_REFCNT( frame_e05dd83ce2300a2ed33ce4a40afc3bb5 ) == 2 );

    // Framed code:
    tmp_assign_source_3 = PyList_New( 2 );
    frame_e05dd83ce2300a2ed33ce4a40afc3bb5->m_frame.f_lineno = 1;
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
    frame_e05dd83ce2300a2ed33ce4a40afc3bb5->m_frame.f_lineno = 1;
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
    frame_e05dd83ce2300a2ed33ce4a40afc3bb5->m_frame.f_lineno = 1;
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
    frame_e05dd83ce2300a2ed33ce4a40afc3bb5->m_frame.f_lineno = 1;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_70cae70822ea2d566626dd2cd32a1a3c_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 1, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_4 );
    frame_e05dd83ce2300a2ed33ce4a40afc3bb5->m_frame.f_lineno = 1;
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
    tmp_args_element_name_2 = const_str_plain_tweepy;
    tmp_args_element_name_3 = metapath_based_loader;
    frame_e05dd83ce2300a2ed33ce4a40afc3bb5->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_5 );
    tmp_assign_source_6 = Py_None;
    UPDATE_STRING_DICT0( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_plain_tweepy;
    UPDATE_STRING_DICT0( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_7 );
    tmp_assign_source_8 = const_str_digest_130eccf5f30aac9cff86c8853d3cd403;
    UPDATE_STRING_DICT0( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_8 );
    tmp_assign_source_9 = const_str_digest_a0f090a0bf0d39be045513993b4da027;
    UPDATE_STRING_DICT0( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_9 );
    tmp_assign_source_10 = const_str_plain_MIT;
    UPDATE_STRING_DICT0( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain___license__, tmp_assign_source_10 );
    tmp_name_name_1 = const_str_digest_ca0d94460f56234ef147c7fbf497fc49;
    tmp_globals_name_1 = (PyObject *)moduledict_tweepy;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_fc42302aa616bb8ab3acc840c3bbcd20_tuple;
    tmp_level_name_1 = const_int_0;
    frame_e05dd83ce2300a2ed33ce4a40afc3bb5->m_frame.f_lineno = 12;
    tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_11;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Status );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain_Status, tmp_assign_source_12 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_User );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain_User, tmp_assign_source_13 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_DirectMessage );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain_DirectMessage, tmp_assign_source_14 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_Friendship );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain_Friendship, tmp_assign_source_15 );
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_SavedSearch );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain_SavedSearch, tmp_assign_source_16 );
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_SearchResults );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain_SearchResults, tmp_assign_source_17 );
    tmp_import_name_from_7 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_ModelFactory );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain_ModelFactory, tmp_assign_source_18 );
    tmp_import_name_from_8 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_Category );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain_Category, tmp_assign_source_19 );
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

    tmp_name_name_2 = const_str_digest_4fe4e33419813bebd8b0147aaca0d197;
    tmp_globals_name_2 = (PyObject *)moduledict_tweepy;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_TweepError_str_plain_RateLimitError_tuple;
    tmp_level_name_2 = const_int_0;
    frame_e05dd83ce2300a2ed33ce4a40afc3bb5->m_frame.f_lineno = 13;
    tmp_assign_source_20 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_20;

    // Tried code:
    tmp_import_name_from_9 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_TweepError );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain_TweepError, tmp_assign_source_21 );
    tmp_import_name_from_10 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_RateLimitError );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain_RateLimitError, tmp_assign_source_22 );
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
    Py_XDECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    tmp_name_name_3 = const_str_digest_eefde7c00c3216345f2e7c1eca9ec9bc;
    tmp_globals_name_3 = (PyObject *)moduledict_tweepy;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_API_tuple;
    tmp_level_name_3 = const_int_0;
    frame_e05dd83ce2300a2ed33ce4a40afc3bb5->m_frame.f_lineno = 14;
    tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_API );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain_API, tmp_assign_source_23 );
    tmp_name_name_4 = const_str_digest_318d530b67181ca3fe064e54d3223515;
    tmp_globals_name_4 = (PyObject *)moduledict_tweepy;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_Cache_str_plain_MemoryCache_str_plain_FileCache_tuple;
    tmp_level_name_4 = const_int_0;
    frame_e05dd83ce2300a2ed33ce4a40afc3bb5->m_frame.f_lineno = 15;
    tmp_assign_source_24 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_24;

    // Tried code:
    tmp_import_name_from_12 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_Cache );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain_Cache, tmp_assign_source_25 );
    tmp_import_name_from_13 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_MemoryCache );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain_MemoryCache, tmp_assign_source_26 );
    tmp_import_name_from_14 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_14 );
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_FileCache );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain_FileCache, tmp_assign_source_27 );
    goto try_end_3;
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

    Py_XDECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    tmp_name_name_5 = const_str_digest_ac53d549a3da5a3a4a9e9324f5482ced;
    tmp_globals_name_5 = (PyObject *)moduledict_tweepy;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_OAuthHandler_str_plain_AppAuthHandler_tuple;
    tmp_level_name_5 = const_int_0;
    frame_e05dd83ce2300a2ed33ce4a40afc3bb5->m_frame.f_lineno = 16;
    tmp_assign_source_28 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_4__module == NULL );
    tmp_import_from_4__module = tmp_assign_source_28;

    // Tried code:
    tmp_import_name_from_15 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_15 );
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_OAuthHandler );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain_OAuthHandler, tmp_assign_source_29 );
    tmp_import_name_from_16 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_16 );
    tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_AppAuthHandler );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain_AppAuthHandler, tmp_assign_source_30 );
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    tmp_name_name_6 = const_str_digest_e54518659f8bd83bab5b18e0c951bc41;
    tmp_globals_name_6 = (PyObject *)moduledict_tweepy;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_Stream_str_plain_StreamListener_tuple;
    tmp_level_name_6 = const_int_0;
    frame_e05dd83ce2300a2ed33ce4a40afc3bb5->m_frame.f_lineno = 17;
    tmp_assign_source_31 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_5__module == NULL );
    tmp_import_from_5__module = tmp_assign_source_31;

    // Tried code:
    tmp_import_name_from_17 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_17 );
    tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_Stream );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain_Stream, tmp_assign_source_32 );
    tmp_import_name_from_18 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_18 );
    tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_StreamListener );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain_StreamListener, tmp_assign_source_33 );
    goto try_end_5;
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

    Py_XDECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    tmp_name_name_7 = const_str_digest_c8eaf599475ed8db651002895b6ef775;
    tmp_globals_name_7 = (PyObject *)moduledict_tweepy;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_Cursor_tuple;
    tmp_level_name_7 = const_int_0;
    frame_e05dd83ce2300a2ed33ce4a40afc3bb5->m_frame.f_lineno = 18;
    tmp_import_name_from_19 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_import_name_from_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_Cursor );
    Py_DECREF( tmp_import_name_from_19 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain_Cursor, tmp_assign_source_34 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain_API );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_API );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "API" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 21;

        goto frame_exception_exit_1;
    }

    frame_e05dd83ce2300a2ed33ce4a40afc3bb5->m_frame.f_lineno = 21;
    tmp_assign_source_35 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain_api, tmp_assign_source_35 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e05dd83ce2300a2ed33ce4a40afc3bb5 );
#endif
    popFrameStack();

    assertFrameObject( frame_e05dd83ce2300a2ed33ce4a40afc3bb5 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e05dd83ce2300a2ed33ce4a40afc3bb5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e05dd83ce2300a2ed33ce4a40afc3bb5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e05dd83ce2300a2ed33ce4a40afc3bb5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e05dd83ce2300a2ed33ce4a40afc3bb5, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_defaults_1 = const_tuple_true_int_pos_1_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_36 = MAKE_FUNCTION_tweepy$$$function_1_debug( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_tweepy, (Nuitka_StringObject *)const_str_plain_debug, tmp_assign_source_36 );

    return MOD_RETURN_VALUE( module_tweepy );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
