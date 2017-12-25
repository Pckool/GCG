/* Generated code for Python source for module 'django.core.checks.compatibility.django_1_10'
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

/* The _module_django$core$checks$compatibility$django_1_10 is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$core$checks$compatibility$django_1_10;
PyDictObject *moduledict_django$core$checks$compatibility$django_1_10;

/* The module constants used, if any. */
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_str_plain_global_settings;
extern PyObject *const_str_plain_Warning;
static PyObject *const_tuple_str_digest_6e0cff0aa1f5052de91a228813411729_tuple;
static PyObject *const_str_plain_check_duplicate_middleware_settings;
extern PyObject *const_str_digest_445dca6cbd45aee8d57b3699ee355976;
extern PyObject *const_tuple_str_plain_Tags_str_plain_Warning_str_plain_register_tuple;
extern PyObject *const_str_plain_Tags;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_MIDDLEWARE;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_6e0cff0aa1f5052de91a228813411729;
extern PyObject *const_int_0;
static PyObject *const_str_digest_7b3b2783f9d9588d8e179c82a96e70fa;
extern PyObject *const_str_digest_e2cff0983efd969a5767cadcc9e9f0e8;
static PyObject *const_str_digest_f448314482288cc5d09fe4d1f4f84705;
extern PyObject *const_str_plain_register;
extern PyObject *const_tuple_str_plain_app_configs_str_plain_kwargs_tuple;
static PyObject *const_dict_f87cc0143c12068c7828ca72a27a953d;
extern PyObject *const_str_plain_MIDDLEWARE_CLASSES;
extern PyObject *const_str_plain_id;
extern PyObject *const_str_plain_app_configs;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_digest_ca065b702ee036e3c45719e327789ab6;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_3f1ed681b5675312c5f8ac4b65385984;
extern PyObject *const_str_plain_settings;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_compatibility;
static PyObject *const_tuple_str_plain_global_settings_str_plain_settings_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_digest_6e0cff0aa1f5052de91a228813411729_tuple = PyTuple_New( 1 );
    const_str_digest_6e0cff0aa1f5052de91a228813411729 = UNSTREAM_STRING( &constant_bin[ 762129 ], 177, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_6e0cff0aa1f5052de91a228813411729_tuple, 0, const_str_digest_6e0cff0aa1f5052de91a228813411729 ); Py_INCREF( const_str_digest_6e0cff0aa1f5052de91a228813411729 );
    const_str_plain_check_duplicate_middleware_settings = UNSTREAM_STRING( &constant_bin[ 762306 ], 35, 1 );
    const_str_digest_7b3b2783f9d9588d8e179c82a96e70fa = UNSTREAM_STRING( &constant_bin[ 762341 ], 47, 0 );
    const_str_digest_f448314482288cc5d09fe4d1f4f84705 = UNSTREAM_STRING( &constant_bin[ 762388 ], 9, 0 );
    const_dict_f87cc0143c12068c7828ca72a27a953d = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_f87cc0143c12068c7828ca72a27a953d, const_str_plain_id, const_str_digest_f448314482288cc5d09fe4d1f4f84705 );
    assert( PyDict_Size( const_dict_f87cc0143c12068c7828ca72a27a953d ) == 1 );
    const_str_digest_3f1ed681b5675312c5f8ac4b65385984 = UNSTREAM_STRING( &constant_bin[ 762397 ], 53, 0 );
    const_tuple_str_plain_global_settings_str_plain_settings_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_global_settings_str_plain_settings_tuple, 0, const_str_plain_global_settings ); Py_INCREF( const_str_plain_global_settings );
    PyTuple_SET_ITEM( const_tuple_str_plain_global_settings_str_plain_settings_tuple, 1, const_str_plain_settings ); Py_INCREF( const_str_plain_settings );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$core$checks$compatibility$django_1_10( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_3755cbe00f8f0aec98ca2e834ada56fb;
static PyCodeObject *codeobj_7f71ae5b5a64423127916da3e1389d07;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_7b3b2783f9d9588d8e179c82a96e70fa );
    codeobj_3755cbe00f8f0aec98ca2e834ada56fb = MAKE_CODEOBJ( module_filename_obj, const_str_digest_3f1ed681b5675312c5f8ac4b65385984, 1, const_tuple_empty, 0, 0, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_7f71ae5b5a64423127916da3e1389d07 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_duplicate_middleware_settings, 8, const_tuple_str_plain_app_configs_str_plain_kwargs_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_django$core$checks$compatibility$django_1_10$$$function_1_check_duplicate_middleware_settings(  );


// The module function definitions.
static PyObject *impl_django$core$checks$compatibility$django_1_10$$$function_1_check_duplicate_middleware_settings( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_app_configs = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_7f71ae5b5a64423127916da3e1389d07 = NULL;

    struct Nuitka_FrameObject *frame_7f71ae5b5a64423127916da3e1389d07;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7f71ae5b5a64423127916da3e1389d07, codeobj_7f71ae5b5a64423127916da3e1389d07, module_django$core$checks$compatibility$django_1_10, sizeof(void *)+sizeof(void *) );
    frame_7f71ae5b5a64423127916da3e1389d07 = cache_frame_7f71ae5b5a64423127916da3e1389d07;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7f71ae5b5a64423127916da3e1389d07 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7f71ae5b5a64423127916da3e1389d07 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$compatibility$django_1_10, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 10;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_MIDDLEWARE );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 != tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    assert( !(tmp_and_left_truth_1 == -1) );
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$compatibility$django_1_10, (Nuitka_StringObject *)const_str_plain_settings );

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

        exception_lineno = 10;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_MIDDLEWARE_CLASSES );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$compatibility$django_1_10, (Nuitka_StringObject *)const_str_plain_global_settings );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_global_settings );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "global_settings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 10;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_MIDDLEWARE_CLASSES );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        exception_lineno = 10;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 10;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = PyList_New( 1 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$compatibility$django_1_10, (Nuitka_StringObject *)const_str_plain_Warning );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
    }

    if ( tmp_called_name_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 11;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = const_tuple_str_digest_6e0cff0aa1f5052de91a228813411729_tuple;
    tmp_kw_name_1 = PyDict_Copy( const_dict_f87cc0143c12068c7828ca72a27a953d );
    frame_7f71ae5b5a64423127916da3e1389d07->m_frame.f_lineno = 11;
    tmp_list_element_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 11;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_1 );
    goto frame_return_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7f71ae5b5a64423127916da3e1389d07 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7f71ae5b5a64423127916da3e1389d07 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7f71ae5b5a64423127916da3e1389d07 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7f71ae5b5a64423127916da3e1389d07, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7f71ae5b5a64423127916da3e1389d07->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7f71ae5b5a64423127916da3e1389d07, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7f71ae5b5a64423127916da3e1389d07,
        type_description_1,
        par_app_configs,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_7f71ae5b5a64423127916da3e1389d07 == cache_frame_7f71ae5b5a64423127916da3e1389d07 )
    {
        Py_DECREF( frame_7f71ae5b5a64423127916da3e1389d07 );
    }
    cache_frame_7f71ae5b5a64423127916da3e1389d07 = NULL;

    assertFrameObject( frame_7f71ae5b5a64423127916da3e1389d07 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = PyList_New( 0 );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$checks$compatibility$django_1_10$$$function_1_check_duplicate_middleware_settings );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_app_configs );
    par_app_configs = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$checks$compatibility$django_1_10$$$function_1_check_duplicate_middleware_settings );
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



static PyObject *MAKE_FUNCTION_django$core$checks$compatibility$django_1_10$$$function_1_check_duplicate_middleware_settings(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$checks$compatibility$django_1_10$$$function_1_check_duplicate_middleware_settings,
        const_str_plain_check_duplicate_middleware_settings,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7f71ae5b5a64423127916da3e1389d07,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$checks$compatibility$django_1_10,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$core$checks$compatibility$django_1_10 =
{
    PyModuleDef_HEAD_INIT,
    "django.core.checks.compatibility.django_1_10",   /* m_name */
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

MOD_INIT_DECL( django$core$checks$compatibility$django_1_10 )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$core$checks$compatibility$django_1_10 );
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
    puts("django.core.checks.compatibility.django_1_10: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.core.checks.compatibility.django_1_10: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$core$checks$compatibility$django_1_10" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$core$checks$compatibility$django_1_10 = Py_InitModule4(
        "django.core.checks.compatibility.django_1_10",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$core$checks$compatibility$django_1_10 = PyModule_Create( &mdef_django$core$checks$compatibility$django_1_10 );
#endif

    moduledict_django$core$checks$compatibility$django_1_10 = MODULE_DICT( module_django$core$checks$compatibility$django_1_10 );

    CHECK_OBJECT( module_django$core$checks$compatibility$django_1_10 );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_ca065b702ee036e3c45719e327789ab6, module_django$core$checks$compatibility$django_1_10 );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$core$checks$compatibility$django_1_10, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$core$checks$compatibility$django_1_10, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$core$checks$compatibility$django_1_10, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_source_name_1;
    struct Nuitka_FrameObject *frame_3755cbe00f8f0aec98ca2e834ada56fb;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$core$checks$compatibility$django_1_10, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$core$checks$compatibility$django_1_10, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$core$checks$compatibility$django_1_10, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_3755cbe00f8f0aec98ca2e834ada56fb = MAKE_MODULE_FRAME( codeobj_3755cbe00f8f0aec98ca2e834ada56fb, module_django$core$checks$compatibility$django_1_10 );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_3755cbe00f8f0aec98ca2e834ada56fb );
    assert( Py_REFCNT( frame_3755cbe00f8f0aec98ca2e834ada56fb ) == 2 );

    // Framed code:
    frame_3755cbe00f8f0aec98ca2e834ada56fb->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_ca065b702ee036e3c45719e327789ab6;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_3755cbe00f8f0aec98ca2e834ada56fb->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_django$core$checks$compatibility$django_1_10, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$core$checks$compatibility$django_1_10, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_445dca6cbd45aee8d57b3699ee355976;
    UPDATE_STRING_DICT0( moduledict_django$core$checks$compatibility$django_1_10, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    frame_3755cbe00f8f0aec98ca2e834ada56fb->m_frame.f_lineno = 1;
    tmp_import_name_from_1 = PyImport_ImportModule("__future__");
    assert( tmp_import_name_from_1 != NULL );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_unicode_literals );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$compatibility$django_1_10, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_7 );
    tmp_name_name_1 = const_str_digest_e2cff0983efd969a5767cadcc9e9f0e8;
    tmp_globals_name_1 = (PyObject *)moduledict_django$core$checks$compatibility$django_1_10;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_global_settings_str_plain_settings_tuple;
    tmp_level_name_1 = const_int_0;
    frame_3755cbe00f8f0aec98ca2e834ada56fb->m_frame.f_lineno = 3;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
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
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_global_settings );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$compatibility$django_1_10, (Nuitka_StringObject *)const_str_plain_global_settings, tmp_assign_source_9 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_settings );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$compatibility$django_1_10, (Nuitka_StringObject *)const_str_plain_settings, tmp_assign_source_10 );
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

    tmp_name_name_2 = const_str_empty;
    tmp_globals_name_2 = (PyObject *)moduledict_django$core$checks$compatibility$django_1_10;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_Tags_str_plain_Warning_str_plain_register_tuple;
    tmp_level_name_2 = const_int_pos_2;
    frame_3755cbe00f8f0aec98ca2e834ada56fb->m_frame.f_lineno = 5;
    tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_11;

    // Tried code:
    tmp_import_name_from_4 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_Tags );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$compatibility$django_1_10, (Nuitka_StringObject *)const_str_plain_Tags, tmp_assign_source_12 );
    tmp_import_name_from_5 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_Warning );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$compatibility$django_1_10, (Nuitka_StringObject *)const_str_plain_Warning, tmp_assign_source_13 );
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_register );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$compatibility$django_1_10, (Nuitka_StringObject *)const_str_plain_register, tmp_assign_source_14 );
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

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$compatibility$django_1_10, (Nuitka_StringObject *)const_str_plain_register );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_register );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "register" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 8;

        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$core$checks$compatibility$django_1_10, (Nuitka_StringObject *)const_str_plain_Tags );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Tags );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Tags" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 8;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_compatibility );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    frame_3755cbe00f8f0aec98ca2e834ada56fb->m_frame.f_lineno = 8;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_called_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = MAKE_FUNCTION_django$core$checks$compatibility$django_1_10$$$function_1_check_duplicate_middleware_settings(  );
    frame_3755cbe00f8f0aec98ca2e834ada56fb->m_frame.f_lineno = 8;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks$compatibility$django_1_10, (Nuitka_StringObject *)const_str_plain_check_duplicate_middleware_settings, tmp_assign_source_15 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3755cbe00f8f0aec98ca2e834ada56fb );
#endif
    popFrameStack();

    assertFrameObject( frame_3755cbe00f8f0aec98ca2e834ada56fb );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3755cbe00f8f0aec98ca2e834ada56fb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3755cbe00f8f0aec98ca2e834ada56fb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3755cbe00f8f0aec98ca2e834ada56fb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3755cbe00f8f0aec98ca2e834ada56fb, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_django$core$checks$compatibility$django_1_10 );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
