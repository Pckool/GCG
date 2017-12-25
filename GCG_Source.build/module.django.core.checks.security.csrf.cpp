/* Generated code for Python source for module 'django.core.checks.security.csrf'
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

/* The _module_django$core$checks$security$csrf is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$core$checks$security$csrf;
PyDictObject *moduledict_django$core$checks$security$csrf;

/* The module constants used, if any. */
static PyObject *const_str_digest_17d5cb79ec51eab294f5c03b1d30e61e;
extern PyObject *const_str_plain_CSRF_COOKIE_SECURE;
static PyObject *const_dict_cf89646026e8e47a30aef6c34c9fe7ac;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_deploy;
extern PyObject *const_str_plain_Warning;
extern PyObject *const_tuple_c8503e600e1ca26c6c0bd42a51b5b00b_tuple;
extern PyObject *const_tuple_str_plain_Tags_str_plain_Warning_str_plain_register_tuple;
static PyObject *const_str_plain_check_csrf_middleware;
extern PyObject *const_str_plain_Tags;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_MIDDLEWARE;
static PyObject *const_str_digest_9803fd250910eb65984fc4777819ba1b;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_W003;
extern PyObject *const_str_plain_CSRF_USE_SESSIONS;
extern PyObject *const_int_0;
extern PyObject *const_str_digest_75377a4b501c8cdce139eb931cc2ca74;
static PyObject *const_dict_677a267e069f61d07c812647149db5df;
extern PyObject *const_str_plain_security;
extern PyObject *const_str_digest_e2cff0983efd969a5767cadcc9e9f0e8;
extern PyObject *const_tuple_str_plain_settings_tuple;
extern PyObject *const_str_plain_register;
extern PyObject *const_dict_0a577841e91ac947852937086ce5c4d4;
extern PyObject *const_tuple_str_plain_patch_middleware_message_tuple;
static PyObject *const_str_digest_f69d9fde015818054b7ad458ea1b6aaa;
extern PyObject *const_str_plain_MIDDLEWARE_CLASSES;
static PyObject *const_str_digest_aa66cdec134aa98d4723d604a2a56350;
extern PyObject *const_str_plain_id;
static PyObject *const_str_digest_6d5d87fc4e7a977483841041fac748ee;
extern PyObject *const_str_plain_app_configs;
static PyObject *const_str_plain__csrf_middleware;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_digest_f8f51fbccdb890c3545ff76a14ae3257;
static PyObject *const_tuple_str_digest_6d5d87fc4e7a977483841041fac748ee_tuple;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_e0eaa82179a639d66e5f8455e3ee9892;
extern PyObject *const_str_plain_settings;
extern PyObject *const_str_plain___loader__;
static PyObject *const_tuple_str_digest_e0eaa82179a639d66e5f8455e3ee9892_tuple;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_passed_check;
extern PyObject *const_str_plain_utils;
extern PyObject *const_str_plain_patch_middleware_message;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_check_csrf_cookie_secure;
extern PyObject *const_str_digest_d07d3ef1d520fb6ab19021ac149791b4;
static PyObject *const_str_plain_W016;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_17d5cb79ec51eab294f5c03b1d30e61e = UNSTREAM_STRING( &constant_bin[ 769690 ], 13, 0 );
    const_dict_cf89646026e8e47a30aef6c34c9fe7ac = _PyDict_NewPresized( 1 );
    const_str_digest_9803fd250910eb65984fc4777819ba1b = UNSTREAM_STRING( &constant_bin[ 769703 ], 13, 0 );
    PyDict_SetItem( const_dict_cf89646026e8e47a30aef6c34c9fe7ac, const_str_plain_id, const_str_digest_9803fd250910eb65984fc4777819ba1b );
    assert( PyDict_Size( const_dict_cf89646026e8e47a30aef6c34c9fe7ac ) == 1 );
    const_str_plain_check_csrf_middleware = UNSTREAM_STRING( &constant_bin[ 769716 ], 21, 1 );
    const_str_plain_W003 = UNSTREAM_STRING( &constant_bin[ 769699 ], 4, 1 );
    const_dict_677a267e069f61d07c812647149db5df = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_677a267e069f61d07c812647149db5df, const_str_plain_id, const_str_digest_17d5cb79ec51eab294f5c03b1d30e61e );
    assert( PyDict_Size( const_dict_677a267e069f61d07c812647149db5df ) == 1 );
    const_str_digest_f69d9fde015818054b7ad458ea1b6aaa = UNSTREAM_STRING( &constant_bin[ 769737 ], 35, 0 );
    const_str_digest_aa66cdec134aa98d4723d604a2a56350 = UNSTREAM_STRING( &constant_bin[ 769772 ], 41, 0 );
    const_str_digest_6d5d87fc4e7a977483841041fac748ee = UNSTREAM_STRING( &constant_bin[ 769813 ], 231, 0 );
    const_str_plain__csrf_middleware = UNSTREAM_STRING( &constant_bin[ 769721 ], 16, 1 );
    const_tuple_str_digest_6d5d87fc4e7a977483841041fac748ee_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_6d5d87fc4e7a977483841041fac748ee_tuple, 0, const_str_digest_6d5d87fc4e7a977483841041fac748ee ); Py_INCREF( const_str_digest_6d5d87fc4e7a977483841041fac748ee );
    const_str_digest_e0eaa82179a639d66e5f8455e3ee9892 = UNSTREAM_STRING( &constant_bin[ 770044 ], 260, 0 );
    const_tuple_str_digest_e0eaa82179a639d66e5f8455e3ee9892_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_e0eaa82179a639d66e5f8455e3ee9892_tuple, 0, const_str_digest_e0eaa82179a639d66e5f8455e3ee9892 ); Py_INCREF( const_str_digest_e0eaa82179a639d66e5f8455e3ee9892 );
    const_str_plain_check_csrf_cookie_secure = UNSTREAM_STRING( &constant_bin[ 770304 ], 24, 1 );
    const_str_plain_W016 = UNSTREAM_STRING( &constant_bin[ 769712 ], 4, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$core$checks$security$csrf( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_8879b55ed5c741691dd5139e67f10ae6;
static PyCodeObject *codeobj_fc18264f7475472c58e3b458d12cb512;
static PyCodeObject *codeobj_381c3aa9d8b4dcfdf2d888ede8e9d944;
static PyCodeObject *codeobj_4260203a5c3a8b472e64ea503b5f7d3d;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_f69d9fde015818054b7ad458ea1b6aaa );
    codeobj_8879b55ed5c741691dd5139e67f10ae6 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_aa66cdec134aa98d4723d604a2a56350, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_fc18264f7475472c58e3b458d12cb512 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__csrf_middleware, 24, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_381c3aa9d8b4dcfdf2d888ede8e9d944 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_csrf_cookie_secure, 35, const_tuple_c8503e600e1ca26c6c0bd42a51b5b00b_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_4260203a5c3a8b472e64ea503b5f7d3d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_csrf_middleware, 29, const_tuple_c8503e600e1ca26c6c0bd42a51b5b00b_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_django$core$checks$security$csrf$$$function_1__csrf_middleware(  );


static PyObject *MAKE_FUNCTION_django$core$checks$security$csrf$$$function_2_check_csrf_middleware(  );


static PyObject *MAKE_FUNCTION_django$core$checks$security$csrf$$$function_3_check_csrf_cookie_secure(  );


// The module function definitions.
static PyObject *impl_django$core$checks$security$csrf$$$function_1__csrf_middleware( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_fc18264f7475472c58e3b458d12cb512 = NULL;

    struct Nuitka_FrameObject *frame_fc18264f7475472c58e3b458d12cb512;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_fc18264f7475472c58e3b458d12cb512, codeobj_fc18264f7475472c58e3b458d12cb512, module_django$core$checks$security$csrf, 0 );
    frame_fc18264f7475472c58e3b458d12cb512 = cache_frame_fc18264f7475472c58e3b458d12cb512;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fc18264f7475472c58e3b458d12cb512 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fc18264f7475472c58e3b458d12cb512 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compexpr_left_1 = const_str_digest_f8f51fbccdb890c3545ff76a14ae3257;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;

        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_MIDDLEWARE_CLASSES );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    assert( !(tmp_or_left_truth_1 == -1) );
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;

        goto frame_exception_exit_1;
    }

    tmp_and_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_MIDDLEWARE );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    Py_DECREF( tmp_and_left_value_1 );
    tmp_compexpr_left_2 = const_str_digest_f8f51fbccdb890c3545ff76a14ae3257;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;

        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_MIDDLEWARE );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_and_right_value_1 );
    tmp_or_right_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_or_right_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_return_value = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_return_value = tmp_or_left_value_1;
    or_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc18264f7475472c58e3b458d12cb512 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc18264f7475472c58e3b458d12cb512 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc18264f7475472c58e3b458d12cb512 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fc18264f7475472c58e3b458d12cb512, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fc18264f7475472c58e3b458d12cb512->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fc18264f7475472c58e3b458d12cb512, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fc18264f7475472c58e3b458d12cb512,
        type_description_1
    );


    // Release cached frame.
    if ( frame_fc18264f7475472c58e3b458d12cb512 == cache_frame_fc18264f7475472c58e3b458d12cb512 )
    {
        Py_DECREF( frame_fc18264f7475472c58e3b458d12cb512 );
    }
    cache_frame_fc18264f7475472c58e3b458d12cb512 = NULL;

    assertFrameObject( frame_fc18264f7475472c58e3b458d12cb512 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$csrf$$$function_1__csrf_middleware );
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


static PyObject *impl_django$core$checks$security$csrf$$$function_2_check_csrf_middleware( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_app_configs = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *var_passed_check = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_4260203a5c3a8b472e64ea503b5f7d3d = NULL;

    struct Nuitka_FrameObject *frame_4260203a5c3a8b472e64ea503b5f7d3d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4260203a5c3a8b472e64ea503b5f7d3d, codeobj_4260203a5c3a8b472e64ea503b5f7d3d, module_django$core$checks$security$csrf, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4260203a5c3a8b472e64ea503b5f7d3d = cache_frame_4260203a5c3a8b472e64ea503b5f7d3d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4260203a5c3a8b472e64ea503b5f7d3d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4260203a5c3a8b472e64ea503b5f7d3d ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain__csrf_middleware );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__csrf_middleware );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_csrf_middleware" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_4260203a5c3a8b472e64ea503b5f7d3d->m_frame.f_lineno = 31;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_passed_check == NULL );
    var_passed_check = tmp_assign_source_1;

    tmp_cond_value_1 = var_passed_check;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_return_value = PyList_New( 0 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_return_value = PyList_New( 1 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain_patch_middleware_message );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_patch_middleware_message );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "patch_middleware_message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain_W003 );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_W003 );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "W003" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_4260203a5c3a8b472e64ea503b5f7d3d->m_frame.f_lineno = 32;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 32;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_1 );
    condexpr_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4260203a5c3a8b472e64ea503b5f7d3d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4260203a5c3a8b472e64ea503b5f7d3d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4260203a5c3a8b472e64ea503b5f7d3d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4260203a5c3a8b472e64ea503b5f7d3d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4260203a5c3a8b472e64ea503b5f7d3d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4260203a5c3a8b472e64ea503b5f7d3d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4260203a5c3a8b472e64ea503b5f7d3d,
        type_description_1,
        par_app_configs,
        par_kwargs,
        var_passed_check
    );


    // Release cached frame.
    if ( frame_4260203a5c3a8b472e64ea503b5f7d3d == cache_frame_4260203a5c3a8b472e64ea503b5f7d3d )
    {
        Py_DECREF( frame_4260203a5c3a8b472e64ea503b5f7d3d );
    }
    cache_frame_4260203a5c3a8b472e64ea503b5f7d3d = NULL;

    assertFrameObject( frame_4260203a5c3a8b472e64ea503b5f7d3d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$csrf$$$function_2_check_csrf_middleware );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_passed_check );
    var_passed_check = NULL;

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

    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_passed_check );
    var_passed_check = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$csrf$$$function_2_check_csrf_middleware );
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


static PyObject *impl_django$core$checks$security$csrf$$$function_3_check_csrf_cookie_secure( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_app_configs = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *var_passed_check = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_381c3aa9d8b4dcfdf2d888ede8e9d944 = NULL;

    struct Nuitka_FrameObject *frame_381c3aa9d8b4dcfdf2d888ede8e9d944;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_381c3aa9d8b4dcfdf2d888ede8e9d944, codeobj_381c3aa9d8b4dcfdf2d888ede8e9d944, module_django$core$checks$security$csrf, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_381c3aa9d8b4dcfdf2d888ede8e9d944 = cache_frame_381c3aa9d8b4dcfdf2d888ede8e9d944;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_381c3aa9d8b4dcfdf2d888ede8e9d944 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_381c3aa9d8b4dcfdf2d888ede8e9d944 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_CSRF_USE_SESSIONS );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 40;
        type_description_1 = "ooo";
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
    Py_DECREF( tmp_or_left_value_1 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain__csrf_middleware );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__csrf_middleware );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_csrf_middleware" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_381c3aa9d8b4dcfdf2d888ede8e9d944->m_frame.f_lineno = 39;
    tmp_operand_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_2 == 1 )
    {
        goto or_left_2;
    }
    else
    {
        goto or_right_2;
    }
    or_right_2:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain_settings );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_settings );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_CSRF_COOKIE_SECURE );
    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_1 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    Py_INCREF( tmp_or_left_value_2 );
    tmp_or_right_value_1 = tmp_or_left_value_2;
    or_end_2:;
    tmp_assign_source_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assign_source_1 = tmp_or_left_value_1;
    or_end_1:;
    assert( var_passed_check == NULL );
    var_passed_check = tmp_assign_source_1;

    tmp_cond_value_1 = var_passed_check;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_return_value = PyList_New( 0 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_return_value = PyList_New( 1 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain_patch_middleware_message );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_patch_middleware_message );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "patch_middleware_message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain_W016 );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_W016 );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "W016" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_381c3aa9d8b4dcfdf2d888ede8e9d944->m_frame.f_lineno = 42;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 42;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_1 );
    condexpr_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_381c3aa9d8b4dcfdf2d888ede8e9d944 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_381c3aa9d8b4dcfdf2d888ede8e9d944 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_381c3aa9d8b4dcfdf2d888ede8e9d944 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_381c3aa9d8b4dcfdf2d888ede8e9d944, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_381c3aa9d8b4dcfdf2d888ede8e9d944->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_381c3aa9d8b4dcfdf2d888ede8e9d944, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_381c3aa9d8b4dcfdf2d888ede8e9d944,
        type_description_1,
        par_app_configs,
        par_kwargs,
        var_passed_check
    );


    // Release cached frame.
    if ( frame_381c3aa9d8b4dcfdf2d888ede8e9d944 == cache_frame_381c3aa9d8b4dcfdf2d888ede8e9d944 )
    {
        Py_DECREF( frame_381c3aa9d8b4dcfdf2d888ede8e9d944 );
    }
    cache_frame_381c3aa9d8b4dcfdf2d888ede8e9d944 = NULL;

    assertFrameObject( frame_381c3aa9d8b4dcfdf2d888ede8e9d944 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$csrf$$$function_3_check_csrf_cookie_secure );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_passed_check );
    var_passed_check = NULL;

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

    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_passed_check );
    var_passed_check = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$checks$security$csrf$$$function_3_check_csrf_cookie_secure );
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



static PyObject *MAKE_FUNCTION_django$core$checks$security$csrf$$$function_1__csrf_middleware(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$checks$security$csrf$$$function_1__csrf_middleware,
        const_str_plain__csrf_middleware,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fc18264f7475472c58e3b458d12cb512,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$checks$security$csrf,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$checks$security$csrf$$$function_2_check_csrf_middleware(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$checks$security$csrf$$$function_2_check_csrf_middleware,
        const_str_plain_check_csrf_middleware,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4260203a5c3a8b472e64ea503b5f7d3d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$checks$security$csrf,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$checks$security$csrf$$$function_3_check_csrf_cookie_secure(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$checks$security$csrf$$$function_3_check_csrf_cookie_secure,
        const_str_plain_check_csrf_cookie_secure,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_381c3aa9d8b4dcfdf2d888ede8e9d944,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$checks$security$csrf,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$core$checks$security$csrf =
{
    PyModuleDef_HEAD_INIT,
    "django.core.checks.security.csrf",   /* m_name */
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

MOD_INIT_DECL( django$core$checks$security$csrf )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$core$checks$security$csrf );
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
    puts("django.core.checks.security.csrf: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.core.checks.security.csrf: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$core$checks$security$csrf" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$core$checks$security$csrf = Py_InitModule4(
        "django.core.checks.security.csrf",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$core$checks$security$csrf = PyModule_Create( &mdef_django$core$checks$security$csrf );
#endif

    moduledict_django$core$checks$security$csrf = MODULE_DICT( module_django$core$checks$security$csrf );

    CHECK_OBJECT( module_django$core$checks$security$csrf );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_75377a4b501c8cdce139eb931cc2ca74, module_django$core$checks$security$csrf );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
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
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    struct Nuitka_FrameObject *frame_8879b55ed5c741691dd5139e67f10ae6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_8879b55ed5c741691dd5139e67f10ae6 = MAKE_MODULE_FRAME( codeobj_8879b55ed5c741691dd5139e67f10ae6, module_django$core$checks$security$csrf );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_8879b55ed5c741691dd5139e67f10ae6 );
    assert( Py_REFCNT( frame_8879b55ed5c741691dd5139e67f10ae6 ) == 2 );

    // Framed code:
    frame_8879b55ed5c741691dd5139e67f10ae6->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_75377a4b501c8cdce139eb931cc2ca74;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_8879b55ed5c741691dd5139e67f10ae6->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_d07d3ef1d520fb6ab19021ac149791b4;
    UPDATE_STRING_DICT0( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_digest_e2cff0983efd969a5767cadcc9e9f0e8;
    tmp_globals_name_1 = (PyObject *)moduledict_django$core$checks$security$csrf;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_settings_tuple;
    tmp_level_name_1 = const_int_0;
    frame_8879b55ed5c741691dd5139e67f10ae6->m_frame.f_lineno = 1;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_settings );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain_settings, tmp_assign_source_7 );
    tmp_name_name_2 = const_str_empty;
    tmp_globals_name_2 = (PyObject *)moduledict_django$core$checks$security$csrf;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_Tags_str_plain_Warning_str_plain_register_tuple;
    tmp_level_name_2 = const_int_pos_2;
    frame_8879b55ed5c741691dd5139e67f10ae6->m_frame.f_lineno = 3;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_8;

    // Tried code:
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_Tags );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain_Tags, tmp_assign_source_9 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_Warning );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain_Warning, tmp_assign_source_10 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_register );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain_register, tmp_assign_source_11 );
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

    tmp_name_name_3 = const_str_plain_utils;
    tmp_globals_name_3 = (PyObject *)moduledict_django$core$checks$security$csrf;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_patch_middleware_message_tuple;
    tmp_level_name_3 = const_int_pos_2;
    frame_8879b55ed5c741691dd5139e67f10ae6->m_frame.f_lineno = 4;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_patch_middleware_message );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain_patch_middleware_message, tmp_assign_source_12 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain_Warning );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 6;

        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = const_tuple_str_digest_e0eaa82179a639d66e5f8455e3ee9892_tuple;
    tmp_kw_name_1 = PyDict_Copy( const_dict_677a267e069f61d07c812647149db5df );
    frame_8879b55ed5c741691dd5139e67f10ae6->m_frame.f_lineno = 6;
    tmp_assign_source_13 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain_W003, tmp_assign_source_13 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain_Warning );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 15;

        goto frame_exception_exit_1;
    }

    tmp_args_name_2 = const_tuple_str_digest_6d5d87fc4e7a977483841041fac748ee_tuple;
    tmp_kw_name_2 = PyDict_Copy( const_dict_cf89646026e8e47a30aef6c34c9fe7ac );
    frame_8879b55ed5c741691dd5139e67f10ae6->m_frame.f_lineno = 15;
    tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain_W016, tmp_assign_source_14 );
    tmp_assign_source_15 = MAKE_FUNCTION_django$core$checks$security$csrf$$$function_1__csrf_middleware(  );
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain__csrf_middleware, tmp_assign_source_15 );
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain_register );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_register );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "register" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;

        goto frame_exception_exit_1;
    }

    tmp_args_name_3 = PyTuple_New( 1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain_Tags );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tags );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_args_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Tags" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_security );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_3 );

        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_1 );
    tmp_kw_name_3 = PyDict_Copy( const_dict_0a577841e91ac947852937086ce5c4d4 );
    frame_8879b55ed5c741691dd5139e67f10ae6->m_frame.f_lineno = 29;
    tmp_called_name_4 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = MAKE_FUNCTION_django$core$checks$security$csrf$$$function_2_check_csrf_middleware(  );
    frame_8879b55ed5c741691dd5139e67f10ae6->m_frame.f_lineno = 29;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain_check_csrf_middleware, tmp_assign_source_16 );
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain_register );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_register );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "register" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;

        goto frame_exception_exit_1;
    }

    tmp_args_name_4 = PyTuple_New( 1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain_Tags );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tags );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_args_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Tags" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_security );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );

        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_2 );
    tmp_kw_name_4 = PyDict_Copy( const_dict_0a577841e91ac947852937086ce5c4d4 );
    frame_8879b55ed5c741691dd5139e67f10ae6->m_frame.f_lineno = 35;
    tmp_called_name_6 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = MAKE_FUNCTION_django$core$checks$security$csrf$$$function_3_check_csrf_cookie_secure(  );
    frame_8879b55ed5c741691dd5139e67f10ae6->m_frame.f_lineno = 35;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$security$csrf, (Nuitka_StringObject *)const_str_plain_check_csrf_cookie_secure, tmp_assign_source_17 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8879b55ed5c741691dd5139e67f10ae6 );
#endif
    popFrameStack();

    assertFrameObject( frame_8879b55ed5c741691dd5139e67f10ae6 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8879b55ed5c741691dd5139e67f10ae6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8879b55ed5c741691dd5139e67f10ae6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8879b55ed5c741691dd5139e67f10ae6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8879b55ed5c741691dd5139e67f10ae6, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_django$core$checks$security$csrf );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
