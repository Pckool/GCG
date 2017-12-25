/* Generated code for Python source for module 'markupsafe._compat'
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

/* The _module_markupsafe$_compat is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_markupsafe$_compat;
PyDictObject *moduledict_markupsafe$_compat;

/* The module constants used, if any. */
extern PyObject *const_str_plain_PY2;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_text_type;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_dict_empty;
static PyObject *const_str_digest_b9ef28ac74c477d3fc75a18c3e581eee;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_chr;
extern PyObject *const_str_plain_long;
extern PyObject *const_str_plain_unichr;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_markupsafe;
extern PyObject *const_str_plain_string_types;
extern PyObject *const_str_plain_unicode;
extern PyObject *const_str_plain_iteritems;
extern PyObject *const_str_plain_items;
static PyObject *const_str_digest_4ecf6d679a1f303f3a3b31da89231c2b;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain_int_types;
static PyObject *const_str_digest_d0a486a9ca1cd8e9a3bac4ea0b998866;
extern PyObject *const_str_plain_x;
extern PyObject *const_tuple_empty;
extern PyObject *const_tuple_type_int_tuple;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_angle_lambda;
extern PyObject *const_tuple_type_str_tuple;
extern PyObject *const_str_digest_7205c5d6427e847ccbf80c040bc4771c;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_b9ef28ac74c477d3fc75a18c3e581eee = UNSTREAM_STRING( &constant_bin[ 1553079 ], 21, 0 );
    const_str_digest_4ecf6d679a1f303f3a3b31da89231c2b = UNSTREAM_STRING( &constant_bin[ 1553100 ], 27, 0 );
    const_str_digest_d0a486a9ca1cd8e9a3bac4ea0b998866 = UNSTREAM_STRING( &constant_bin[ 1553127 ], 198, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_markupsafe$_compat( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_710631af4f7b32284b157af68af6b08d;
static PyCodeObject *codeobj_419995c1b3490ff38e9a1abf60cd3dd2;
static PyCodeObject *codeobj_30c5089f1fd71464a01cae29157e45c5;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_b9ef28ac74c477d3fc75a18c3e581eee );
    codeobj_710631af4f7b32284b157af68af6b08d = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 20, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_419995c1b3490ff38e9a1abf60cd3dd2 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 26, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_30c5089f1fd71464a01cae29157e45c5 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_4ecf6d679a1f303f3a3b31da89231c2b, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_markupsafe$_compat$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_markupsafe$_compat$$$function_2_lambda(  );


// The module function definitions.
static PyObject *impl_markupsafe$_compat$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_710631af4f7b32284b157af68af6b08d = NULL;

    struct Nuitka_FrameObject *frame_710631af4f7b32284b157af68af6b08d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_710631af4f7b32284b157af68af6b08d, codeobj_710631af4f7b32284b157af68af6b08d, module_markupsafe$_compat, sizeof(void *) );
    frame_710631af4f7b32284b157af68af6b08d = cache_frame_710631af4f7b32284b157af68af6b08d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_710631af4f7b32284b157af68af6b08d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_710631af4f7b32284b157af68af6b08d ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_x;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_710631af4f7b32284b157af68af6b08d->m_frame.f_lineno = 20;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_710631af4f7b32284b157af68af6b08d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_710631af4f7b32284b157af68af6b08d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_710631af4f7b32284b157af68af6b08d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_710631af4f7b32284b157af68af6b08d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_710631af4f7b32284b157af68af6b08d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_710631af4f7b32284b157af68af6b08d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_710631af4f7b32284b157af68af6b08d,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_710631af4f7b32284b157af68af6b08d == cache_frame_710631af4f7b32284b157af68af6b08d )
    {
        Py_DECREF( frame_710631af4f7b32284b157af68af6b08d );
    }
    cache_frame_710631af4f7b32284b157af68af6b08d = NULL;

    assertFrameObject( frame_710631af4f7b32284b157af68af6b08d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( markupsafe$_compat$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_x );
    par_x = NULL;

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

    Py_XDECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( markupsafe$_compat$$$function_1_lambda );
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


static PyObject *impl_markupsafe$_compat$$$function_2_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_419995c1b3490ff38e9a1abf60cd3dd2 = NULL;

    struct Nuitka_FrameObject *frame_419995c1b3490ff38e9a1abf60cd3dd2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_419995c1b3490ff38e9a1abf60cd3dd2, codeobj_419995c1b3490ff38e9a1abf60cd3dd2, module_markupsafe$_compat, sizeof(void *) );
    frame_419995c1b3490ff38e9a1abf60cd3dd2 = cache_frame_419995c1b3490ff38e9a1abf60cd3dd2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_419995c1b3490ff38e9a1abf60cd3dd2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_419995c1b3490ff38e9a1abf60cd3dd2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_x;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_419995c1b3490ff38e9a1abf60cd3dd2->m_frame.f_lineno = 26;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_iteritems );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_419995c1b3490ff38e9a1abf60cd3dd2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_419995c1b3490ff38e9a1abf60cd3dd2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_419995c1b3490ff38e9a1abf60cd3dd2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_419995c1b3490ff38e9a1abf60cd3dd2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_419995c1b3490ff38e9a1abf60cd3dd2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_419995c1b3490ff38e9a1abf60cd3dd2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_419995c1b3490ff38e9a1abf60cd3dd2,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_419995c1b3490ff38e9a1abf60cd3dd2 == cache_frame_419995c1b3490ff38e9a1abf60cd3dd2 )
    {
        Py_DECREF( frame_419995c1b3490ff38e9a1abf60cd3dd2 );
    }
    cache_frame_419995c1b3490ff38e9a1abf60cd3dd2 = NULL;

    assertFrameObject( frame_419995c1b3490ff38e9a1abf60cd3dd2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( markupsafe$_compat$$$function_2_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_x );
    par_x = NULL;

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

    Py_XDECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( markupsafe$_compat$$$function_2_lambda );
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



static PyObject *MAKE_FUNCTION_markupsafe$_compat$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markupsafe$_compat$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_710631af4f7b32284b157af68af6b08d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_markupsafe$_compat,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_markupsafe$_compat$$$function_2_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markupsafe$_compat$$$function_2_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_419995c1b3490ff38e9a1abf60cd3dd2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_markupsafe$_compat,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_markupsafe$_compat =
{
    PyModuleDef_HEAD_INIT,
    "markupsafe._compat",   /* m_name */
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

MOD_INIT_DECL( markupsafe$_compat )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_markupsafe$_compat );
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
    puts("markupsafe._compat: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("markupsafe._compat: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initmarkupsafe$_compat" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_markupsafe$_compat = Py_InitModule4(
        "markupsafe._compat",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_markupsafe$_compat = PyModule_Create( &mdef_markupsafe$_compat );
#endif

    moduledict_markupsafe$_compat = MODULE_DICT( module_markupsafe$_compat );

    CHECK_OBJECT( module_markupsafe$_compat );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_7205c5d6427e847ccbf80c040bc4771c, module_markupsafe$_compat );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_markupsafe$_compat, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_markupsafe$_compat, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_markupsafe$_compat, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    struct Nuitka_FrameObject *frame_30c5089f1fd71464a01cae29157e45c5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_d0a486a9ca1cd8e9a3bac4ea0b998866;
    UPDATE_STRING_DICT0( moduledict_markupsafe$_compat, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_markupsafe$_compat, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_markupsafe$_compat, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_30c5089f1fd71464a01cae29157e45c5 = MAKE_MODULE_FRAME( codeobj_30c5089f1fd71464a01cae29157e45c5, module_markupsafe$_compat );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_30c5089f1fd71464a01cae29157e45c5 );
    assert( Py_REFCNT( frame_30c5089f1fd71464a01cae29157e45c5 ) == 2 );

    // Framed code:
    frame_30c5089f1fd71464a01cae29157e45c5->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_7205c5d6427e847ccbf80c040bc4771c;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_30c5089f1fd71464a01cae29157e45c5->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_markupsafe$_compat, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_markupsafe$_compat, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_markupsafe;
    UPDATE_STRING_DICT0( moduledict_markupsafe$_compat, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_plain_sys;
    tmp_globals_name_1 = (PyObject *)moduledict_markupsafe$_compat;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_30c5089f1fd71464a01cae29157e45c5->m_frame.f_lineno = 11;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    assert( tmp_assign_source_7 != NULL );
    UPDATE_STRING_DICT1( moduledict_markupsafe$_compat, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_7 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_markupsafe$_compat, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 13;

        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_2;
    tmp_assign_source_8 = RICH_COMPARE_EQ_NORECURSE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_markupsafe$_compat, (Nuitka_StringObject *)const_str_plain_PY2, tmp_assign_source_8 );
    tmp_cond_value_1 = GET_STRING_DICT_VALUE( moduledict_markupsafe$_compat, (Nuitka_StringObject *)const_str_plain_PY2 );

    if (unlikely( tmp_cond_value_1 == NULL ))
    {
        tmp_cond_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PY2 );
    }

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PY2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 15;

        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

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
    tmp_assign_source_9 = (PyObject *)&PyUnicode_Type;
    UPDATE_STRING_DICT0( moduledict_markupsafe$_compat, (Nuitka_StringObject *)const_str_plain_text_type, tmp_assign_source_9 );
    tmp_assign_source_10 = const_tuple_type_str_tuple;
    UPDATE_STRING_DICT0( moduledict_markupsafe$_compat, (Nuitka_StringObject *)const_str_plain_string_types, tmp_assign_source_10 );
    tmp_assign_source_11 = LOOKUP_BUILTIN( const_str_plain_chr );
    assert( tmp_assign_source_11 != NULL );
    UPDATE_STRING_DICT0( moduledict_markupsafe$_compat, (Nuitka_StringObject *)const_str_plain_unichr, tmp_assign_source_11 );
    tmp_assign_source_12 = const_tuple_type_int_tuple;
    UPDATE_STRING_DICT0( moduledict_markupsafe$_compat, (Nuitka_StringObject *)const_str_plain_int_types, tmp_assign_source_12 );
    tmp_assign_source_13 = MAKE_FUNCTION_markupsafe$_compat$$$function_1_lambda(  );
    UPDATE_STRING_DICT1( moduledict_markupsafe$_compat, (Nuitka_StringObject *)const_str_plain_iteritems, tmp_assign_source_13 );
    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_14 = GET_STRING_DICT_VALUE( moduledict_markupsafe$_compat, (Nuitka_StringObject *)const_str_plain_unicode );

    if (unlikely( tmp_assign_source_14 == NULL ))
    {
        tmp_assign_source_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
    }

    if ( tmp_assign_source_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unicode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_markupsafe$_compat, (Nuitka_StringObject *)const_str_plain_text_type, tmp_assign_source_14 );
    tmp_assign_source_15 = PyTuple_New( 2 );
    tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_15, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_markupsafe$_compat, (Nuitka_StringObject *)const_str_plain_unicode );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unicode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 23;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_15, 1, tmp_tuple_element_1 );
    UPDATE_STRING_DICT1( moduledict_markupsafe$_compat, (Nuitka_StringObject *)const_str_plain_string_types, tmp_assign_source_15 );
    tmp_assign_source_16 = GET_STRING_DICT_VALUE( moduledict_markupsafe$_compat, (Nuitka_StringObject *)const_str_plain_unichr );

    if (unlikely( tmp_assign_source_16 == NULL ))
    {
        tmp_assign_source_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unichr );
    }

    if ( tmp_assign_source_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unichr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_markupsafe$_compat, (Nuitka_StringObject *)const_str_plain_unichr, tmp_assign_source_16 );
    tmp_assign_source_17 = PyTuple_New( 2 );
    tmp_tuple_element_2 = (PyObject *)&PyLong_Type;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_markupsafe$_compat, (Nuitka_StringObject *)const_str_plain_long );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_long );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "long" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_17, 1, tmp_tuple_element_2 );
    UPDATE_STRING_DICT1( moduledict_markupsafe$_compat, (Nuitka_StringObject *)const_str_plain_int_types, tmp_assign_source_17 );
    tmp_assign_source_18 = MAKE_FUNCTION_markupsafe$_compat$$$function_2_lambda(  );
    UPDATE_STRING_DICT1( moduledict_markupsafe$_compat, (Nuitka_StringObject *)const_str_plain_iteritems, tmp_assign_source_18 );
    branch_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_30c5089f1fd71464a01cae29157e45c5 );
#endif
    popFrameStack();

    assertFrameObject( frame_30c5089f1fd71464a01cae29157e45c5 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_30c5089f1fd71464a01cae29157e45c5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_30c5089f1fd71464a01cae29157e45c5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_30c5089f1fd71464a01cae29157e45c5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_30c5089f1fd71464a01cae29157e45c5, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_markupsafe$_compat );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
