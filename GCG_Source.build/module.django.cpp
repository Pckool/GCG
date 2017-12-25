/* Generated code for Python source for module 'django'
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

/* The _module_django is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django;
PyDictObject *moduledict_django;

/* The module constants used, if any. */
extern PyObject *const_str_plain_force_text;
extern PyObject *const_str_digest_63821e7e7f1b2f1c87a9fbe6dc7305f8;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
static PyObject *const_tuple_int_pos_1_int_pos_11_int_pos_7_str_plain_final_int_0_tuple;
extern PyObject *const_str_plain_apps;
extern PyObject *const_str_plain_set_script_prefix;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_str_chr_47;
extern PyObject *const_tuple_str_plain_apps_tuple;
extern PyObject *const_str_digest_e8a773ce67a7c0e7a9cd33d42a1c4a06;
extern PyObject *const_str_plain_FORCE_SCRIPT_NAME;
extern PyObject *const_dict_empty;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_digest_ed0b1506d7d0837d1fa525619fe67bf0;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_get_version;
extern PyObject *const_str_digest_e3393b2e61653c3df2c7d436c253bbee;
extern PyObject *const_str_plain___version__;
extern PyObject *const_tuple_str_plain_force_text_tuple;
extern PyObject *const_int_pos_11;
extern PyObject *const_str_plain_path;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_set_script_prefix_tuple;
static PyObject *const_tuple_str_plain_configure_logging_tuple;
extern PyObject *const_str_digest_e2cff0983efd969a5767cadcc9e9f0e8;
extern PyObject *const_str_digest_c48c695ee87e11eee5579c73bc52a23e;
extern PyObject *const_tuple_str_plain_settings_tuple;
extern PyObject *const_str_plain_INSTALLED_APPS;
extern PyObject *const_str_plain_NUITKA_PACKAGE_django;
extern PyObject *const_str_plain_setup;
extern PyObject *const_str_plain_LOGGING;
extern PyObject *const_str_plain_django;
extern PyObject *const_str_plain_configure_logging;
static PyObject *const_tuple_f7721456ed1f100c0e003f799c9e284b_tuple;
static PyObject *const_str_digest_fab43ce924e137974e236b54082347e8;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_int_pos_7;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_c15243b3ba68498da186d5d65ae367ca_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_get;
extern PyObject *const_tuple_str_plain_get_version_tuple;
static PyObject *const_tuple_5045290f8fa9e3972c4572b36c45e63f_tuple;
extern PyObject *const_str_plain_final;
extern PyObject *const_str_plain_settings;
extern PyObject *const_str_plain_VERSION;
static PyObject *const_str_plain_set_prefix;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_populate;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_tuple_true_tuple;
extern PyObject *const_str_plain_LOGGING_CONFIG;
static PyObject *const_str_digest_8d85e451c38a43644f387ba3ffe3e9a2;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_b13f6089c0b9affaa03030fcd65eeef4;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_int_pos_1_int_pos_11_int_pos_7_str_plain_final_int_0_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_int_pos_11_int_pos_7_str_plain_final_int_0_tuple, 0, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_int_pos_11_int_pos_7_str_plain_final_int_0_tuple, 1, const_int_pos_11 ); Py_INCREF( const_int_pos_11 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_int_pos_11_int_pos_7_str_plain_final_int_0_tuple, 2, const_int_pos_7 ); Py_INCREF( const_int_pos_7 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_int_pos_11_int_pos_7_str_plain_final_int_0_tuple, 3, const_str_plain_final ); Py_INCREF( const_str_plain_final );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_int_pos_11_int_pos_7_str_plain_final_int_0_tuple, 4, const_int_0 ); Py_INCREF( const_int_0 );
    const_tuple_str_plain_set_script_prefix_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_set_script_prefix_tuple, 0, const_str_plain_set_script_prefix ); Py_INCREF( const_str_plain_set_script_prefix );
    const_tuple_str_plain_configure_logging_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_configure_logging_tuple, 0, const_str_plain_configure_logging ); Py_INCREF( const_str_plain_configure_logging );
    const_tuple_f7721456ed1f100c0e003f799c9e284b_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_f7721456ed1f100c0e003f799c9e284b_tuple, 0, const_tuple_int_pos_1_int_pos_11_int_pos_7_str_plain_final_int_0_tuple ); Py_INCREF( const_tuple_int_pos_1_int_pos_11_int_pos_7_str_plain_final_int_0_tuple );
    const_str_digest_fab43ce924e137974e236b54082347e8 = UNSTREAM_STRING( &constant_bin[ 730221 ], 15, 0 );
    const_tuple_5045290f8fa9e3972c4572b36c45e63f_tuple = PyTuple_New( 6 );
    const_str_plain_set_prefix = UNSTREAM_STRING( &constant_bin[ 730236 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_5045290f8fa9e3972c4572b36c45e63f_tuple, 0, const_str_plain_set_prefix ); Py_INCREF( const_str_plain_set_prefix );
    PyTuple_SET_ITEM( const_tuple_5045290f8fa9e3972c4572b36c45e63f_tuple, 1, const_str_plain_apps ); Py_INCREF( const_str_plain_apps );
    PyTuple_SET_ITEM( const_tuple_5045290f8fa9e3972c4572b36c45e63f_tuple, 2, const_str_plain_settings ); Py_INCREF( const_str_plain_settings );
    PyTuple_SET_ITEM( const_tuple_5045290f8fa9e3972c4572b36c45e63f_tuple, 3, const_str_plain_set_script_prefix ); Py_INCREF( const_str_plain_set_script_prefix );
    PyTuple_SET_ITEM( const_tuple_5045290f8fa9e3972c4572b36c45e63f_tuple, 4, const_str_plain_force_text ); Py_INCREF( const_str_plain_force_text );
    PyTuple_SET_ITEM( const_tuple_5045290f8fa9e3972c4572b36c45e63f_tuple, 5, const_str_plain_configure_logging ); Py_INCREF( const_str_plain_configure_logging );
    const_str_digest_8d85e451c38a43644f387ba3ffe3e9a2 = UNSTREAM_STRING( &constant_bin[ 730246 ], 226, 0 );
    const_str_digest_b13f6089c0b9affaa03030fcd65eeef4 = UNSTREAM_STRING( &constant_bin[ 730472 ], 18, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_927c437c891a0c6471232d00caa85051;
static PyCodeObject *codeobj_71451e25cbf0e482a82ed7b89c94d451;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_b13f6089c0b9affaa03030fcd65eeef4 );
    codeobj_927c437c891a0c6471232d00caa85051 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_fab43ce924e137974e236b54082347e8, 1, const_tuple_empty, 0, 0, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_71451e25cbf0e482a82ed7b89c94d451 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_setup, 10, const_tuple_5045290f8fa9e3972c4572b36c45e63f_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_django$$$function_1_setup( PyObject *defaults );


// The module function definitions.
static PyObject *impl_django$$$function_1_setup( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_set_prefix = python_pars[ 0 ];
    PyObject *var_apps = NULL;
    PyObject *var_settings = NULL;
    PyObject *var_set_script_prefix = NULL;
    PyObject *var_force_text = NULL;
    PyObject *var_configure_logging = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    bool tmp_is_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_71451e25cbf0e482a82ed7b89c94d451 = NULL;

    struct Nuitka_FrameObject *frame_71451e25cbf0e482a82ed7b89c94d451;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_71451e25cbf0e482a82ed7b89c94d451, codeobj_71451e25cbf0e482a82ed7b89c94d451, module_django, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_71451e25cbf0e482a82ed7b89c94d451 = cache_frame_71451e25cbf0e482a82ed7b89c94d451;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_71451e25cbf0e482a82ed7b89c94d451 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_71451e25cbf0e482a82ed7b89c94d451 ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_digest_e8a773ce67a7c0e7a9cd33d42a1c4a06;
    tmp_globals_name_1 = (PyObject *)moduledict_django;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_apps_tuple;
    tmp_level_name_1 = const_int_0;
    frame_71451e25cbf0e482a82ed7b89c94d451->m_frame.f_lineno = 16;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_apps );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_apps == NULL );
    var_apps = tmp_assign_source_1;

    tmp_name_name_2 = const_str_digest_e2cff0983efd969a5767cadcc9e9f0e8;
    tmp_globals_name_2 = (PyObject *)moduledict_django;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_settings_tuple;
    tmp_level_name_2 = const_int_0;
    frame_71451e25cbf0e482a82ed7b89c94d451->m_frame.f_lineno = 17;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_settings );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_settings == NULL );
    var_settings = tmp_assign_source_2;

    tmp_name_name_3 = const_str_digest_c48c695ee87e11eee5579c73bc52a23e;
    tmp_globals_name_3 = (PyObject *)moduledict_django;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_set_script_prefix_tuple;
    tmp_level_name_3 = const_int_0;
    frame_71451e25cbf0e482a82ed7b89c94d451->m_frame.f_lineno = 18;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_set_script_prefix );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_set_script_prefix == NULL );
    var_set_script_prefix = tmp_assign_source_3;

    tmp_name_name_4 = const_str_digest_e3393b2e61653c3df2c7d436c253bbee;
    tmp_globals_name_4 = (PyObject *)moduledict_django;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_force_text_tuple;
    tmp_level_name_4 = const_int_0;
    frame_71451e25cbf0e482a82ed7b89c94d451->m_frame.f_lineno = 19;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_force_text );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_force_text == NULL );
    var_force_text = tmp_assign_source_4;

    tmp_name_name_5 = const_str_digest_63821e7e7f1b2f1c87a9fbe6dc7305f8;
    tmp_globals_name_5 = (PyObject *)moduledict_django;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_configure_logging_tuple;
    tmp_level_name_5 = const_int_0;
    frame_71451e25cbf0e482a82ed7b89c94d451->m_frame.f_lineno = 20;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_configure_logging );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_configure_logging == NULL );
    var_configure_logging = tmp_assign_source_5;

    tmp_called_name_1 = var_configure_logging;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_source_name_1 = var_settings;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_LOGGING_CONFIG );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = var_settings;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_LOGGING );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 22;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_71451e25cbf0e482a82ed7b89c94d451->m_frame.f_lineno = 22;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_1 = par_set_prefix;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "set_prefix" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 23;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "oooooo";
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
    tmp_called_name_2 = var_set_script_prefix;

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "set_script_prefix" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = var_settings;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_FORCE_SCRIPT_NAME );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_args_element_name_3 = const_str_chr_47;
    Py_INCREF( tmp_args_element_name_3 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_called_name_3 = var_force_text;

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "force_text" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = var_settings;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_FORCE_SCRIPT_NAME );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_71451e25cbf0e482a82ed7b89c94d451->m_frame.f_lineno = 25;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    condexpr_end_1:;
    frame_71451e25cbf0e482a82ed7b89c94d451->m_frame.f_lineno = 24;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_source_name_5 = var_apps;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "apps" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_populate );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = var_settings;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_INSTALLED_APPS );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 27;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_71451e25cbf0e482a82ed7b89c94d451->m_frame.f_lineno = 27;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_71451e25cbf0e482a82ed7b89c94d451 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_71451e25cbf0e482a82ed7b89c94d451 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_71451e25cbf0e482a82ed7b89c94d451, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_71451e25cbf0e482a82ed7b89c94d451->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_71451e25cbf0e482a82ed7b89c94d451, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_71451e25cbf0e482a82ed7b89c94d451,
        type_description_1,
        par_set_prefix,
        var_apps,
        var_settings,
        var_set_script_prefix,
        var_force_text,
        var_configure_logging
    );


    // Release cached frame.
    if ( frame_71451e25cbf0e482a82ed7b89c94d451 == cache_frame_71451e25cbf0e482a82ed7b89c94d451 )
    {
        Py_DECREF( frame_71451e25cbf0e482a82ed7b89c94d451 );
    }
    cache_frame_71451e25cbf0e482a82ed7b89c94d451 = NULL;

    assertFrameObject( frame_71451e25cbf0e482a82ed7b89c94d451 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$$$function_1_setup );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_set_prefix );
    par_set_prefix = NULL;

    Py_XDECREF( var_apps );
    var_apps = NULL;

    Py_XDECREF( var_settings );
    var_settings = NULL;

    Py_XDECREF( var_set_script_prefix );
    var_set_script_prefix = NULL;

    Py_XDECREF( var_force_text );
    var_force_text = NULL;

    Py_XDECREF( var_configure_logging );
    var_configure_logging = NULL;

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

    Py_XDECREF( par_set_prefix );
    par_set_prefix = NULL;

    Py_XDECREF( var_apps );
    var_apps = NULL;

    Py_XDECREF( var_settings );
    var_settings = NULL;

    Py_XDECREF( var_set_script_prefix );
    var_set_script_prefix = NULL;

    Py_XDECREF( var_force_text );
    var_force_text = NULL;

    Py_XDECREF( var_configure_logging );
    var_configure_logging = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$$$function_1_setup );
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



static PyObject *MAKE_FUNCTION_django$$$function_1_setup( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$$$function_1_setup,
        const_str_plain_setup,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_71451e25cbf0e482a82ed7b89c94d451,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django,
        const_str_digest_8d85e451c38a43644f387ba3ffe3e9a2,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django =
{
    PyModuleDef_HEAD_INIT,
    "django",   /* m_name */
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

MOD_INIT_DECL( django )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django );
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
    puts("django: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django = Py_InitModule4(
        "django",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django = PyModule_Create( &mdef_django );
#endif

    moduledict_django = MODULE_DICT( module_django );

    CHECK_OBJECT( module_django );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_django, module_django );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    PyObject *tmp_called_name_3;
    PyObject *tmp_defaults_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_source_name_1;
    struct Nuitka_FrameObject *frame_927c437c891a0c6471232d00caa85051;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_927c437c891a0c6471232d00caa85051 = MAKE_MODULE_FRAME( codeobj_927c437c891a0c6471232d00caa85051, module_django );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_927c437c891a0c6471232d00caa85051 );
    assert( Py_REFCNT( frame_927c437c891a0c6471232d00caa85051 ) == 2 );

    // Framed code:
    tmp_assign_source_3 = PyList_New( 2 );
    frame_927c437c891a0c6471232d00caa85051->m_frame.f_lineno = 1;
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
    frame_927c437c891a0c6471232d00caa85051->m_frame.f_lineno = 1;
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
    frame_927c437c891a0c6471232d00caa85051->m_frame.f_lineno = 1;
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
    frame_927c437c891a0c6471232d00caa85051->m_frame.f_lineno = 1;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_c15243b3ba68498da186d5d65ae367ca_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 1, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_django, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_4 );
    frame_927c437c891a0c6471232d00caa85051->m_frame.f_lineno = 1;
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
    tmp_args_element_name_2 = const_str_plain_django;
    tmp_args_element_name_3 = metapath_based_loader;
    frame_927c437c891a0c6471232d00caa85051->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_django, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_5 );
    tmp_assign_source_6 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_plain_django;
    UPDATE_STRING_DICT0( moduledict_django, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_7 );
    frame_927c437c891a0c6471232d00caa85051->m_frame.f_lineno = 1;
    tmp_import_name_from_1 = PyImport_ImportModule("__future__");
    assert( tmp_import_name_from_1 != NULL );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_unicode_literals );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_8 );
    tmp_name_name_1 = const_str_digest_ed0b1506d7d0837d1fa525619fe67bf0;
    tmp_globals_name_1 = (PyObject *)moduledict_django;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_get_version_tuple;
    tmp_level_name_1 = const_int_0;
    frame_927c437c891a0c6471232d00caa85051->m_frame.f_lineno = 3;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_get_version );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django, (Nuitka_StringObject *)const_str_plain_get_version, tmp_assign_source_9 );
    tmp_assign_source_10 = const_tuple_int_pos_1_int_pos_11_int_pos_7_str_plain_final_int_0_tuple;
    UPDATE_STRING_DICT0( moduledict_django, (Nuitka_StringObject *)const_str_plain_VERSION, tmp_assign_source_10 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_django, (Nuitka_StringObject *)const_str_plain_get_version );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_version );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_version" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 7;

        goto frame_exception_exit_1;
    }

    frame_927c437c891a0c6471232d00caa85051->m_frame.f_lineno = 7;
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_f7721456ed1f100c0e003f799c9e284b_tuple, 0 ) );

    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_11 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_927c437c891a0c6471232d00caa85051 );
#endif
    popFrameStack();

    assertFrameObject( frame_927c437c891a0c6471232d00caa85051 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_927c437c891a0c6471232d00caa85051 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_927c437c891a0c6471232d00caa85051, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_927c437c891a0c6471232d00caa85051->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_927c437c891a0c6471232d00caa85051, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_defaults_1 = const_tuple_true_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_12 = MAKE_FUNCTION_django$$$function_1_setup( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_django, (Nuitka_StringObject *)const_str_plain_setup, tmp_assign_source_12 );

    return MOD_RETURN_VALUE( module_django );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
