/* Generated code for Python source for module 'django.template.backends.utils'
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

/* The _module_django$template$backends$utils is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$template$backends$utils;
PyDictObject *moduledict_django$template$backends$utils;

/* The module constants used, if any. */
extern PyObject *const_str_digest_d7cf60a02de7b10a6b68d1680ba3139e;
static PyObject *const_str_digest_d1e075ae9e80e70d2e25375c22ee768d;
static PyObject *const_str_digest_3ea3a41bae81f9797ec2ef3a63fe3d60;
static PyObject *const_tuple_str_plain_format_html_tuple;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_digest_cd392128dd6f78a075e1cd14b025bfa8;
static PyObject *const_tuple_str_plain_SafeText_tuple;
extern PyObject *const_str_plain_request;
static PyObject *const_tuple_str_plain_get_token_tuple;
static PyObject *const_str_digest_6b5c0d2b39cfee0d7aba6a1d9874a146;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain___file__;
extern PyObject *const_int_0;
static PyObject *const_str_digest_5f07ec9a2109515bb957193adff76e78;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_csrf_token_lazy;
extern PyObject *const_tuple_str_plain_lazy_tuple;
extern PyObject *const_str_plain_SafeText;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_csrf_input_lazy;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_tuple_str_plain_request_tuple;
extern PyObject *const_str_digest_f6f6c1a36df5c3a25611ca7666c8182e;
extern PyObject *const_str_digest_3d2fb639fc3676a85e9d77bb02d18a21;
extern PyObject *const_str_plain_get_token;
extern PyObject *const_str_plain_format_html;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_lazy;
extern PyObject *const_str_plain_csrf_input;
extern PyObject *const_str_digest_5ed11698e149f372a4e77ae4cd628aa6;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_d1e075ae9e80e70d2e25375c22ee768d = UNSTREAM_STRING( &constant_bin[ 1101265 ], 30, 0 );
    const_str_digest_3ea3a41bae81f9797ec2ef3a63fe3d60 = UNSTREAM_STRING( &constant_bin[ 1101295 ], 61, 0 );
    const_tuple_str_plain_format_html_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_format_html_tuple, 0, const_str_plain_format_html ); Py_INCREF( const_str_plain_format_html );
    const_tuple_str_plain_SafeText_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SafeText_tuple, 0, const_str_plain_SafeText ); Py_INCREF( const_str_plain_SafeText );
    const_tuple_str_plain_get_token_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_get_token_tuple, 0, const_str_plain_get_token ); Py_INCREF( const_str_plain_get_token );
    const_str_digest_6b5c0d2b39cfee0d7aba6a1d9874a146 = UNSTREAM_STRING( &constant_bin[ 1101356 ], 39, 0 );
    const_str_digest_5f07ec9a2109515bb957193adff76e78 = UNSTREAM_STRING( &constant_bin[ 1101395 ], 33, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$template$backends$utils( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_05536db6ec571ff0d12a15f3c39f24e9;
static PyCodeObject *codeobj_be09f81643d8abc08287ec4f4d7b15e1;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_5f07ec9a2109515bb957193adff76e78 );
    codeobj_05536db6ec571ff0d12a15f3c39f24e9 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_6b5c0d2b39cfee0d7aba6a1d9874a146, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_be09f81643d8abc08287ec4f4d7b15e1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_csrf_input, 10, const_tuple_str_plain_request_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_django$template$backends$utils$$$function_1_csrf_input(  );


// The module function definitions.
static PyObject *impl_django$template$backends$utils$$$function_1_csrf_input( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_request = python_pars[ 0 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_be09f81643d8abc08287ec4f4d7b15e1 = NULL;

    struct Nuitka_FrameObject *frame_be09f81643d8abc08287ec4f4d7b15e1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_be09f81643d8abc08287ec4f4d7b15e1, codeobj_be09f81643d8abc08287ec4f4d7b15e1, module_django$template$backends$utils, sizeof(void *) );
    frame_be09f81643d8abc08287ec4f4d7b15e1 = cache_frame_be09f81643d8abc08287ec4f4d7b15e1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_be09f81643d8abc08287ec4f4d7b15e1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_be09f81643d8abc08287ec4f4d7b15e1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_django$template$backends$utils, (Nuitka_StringObject *)const_str_plain_format_html );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_format_html );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "format_html" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 11;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_digest_3ea3a41bae81f9797ec2ef3a63fe3d60;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$template$backends$utils, (Nuitka_StringObject *)const_str_plain_get_token );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_token );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_token" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 13;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_request;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_be09f81643d8abc08287ec4f4d7b15e1->m_frame.f_lineno = 13;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_be09f81643d8abc08287ec4f4d7b15e1->m_frame.f_lineno = 11;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be09f81643d8abc08287ec4f4d7b15e1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_be09f81643d8abc08287ec4f4d7b15e1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be09f81643d8abc08287ec4f4d7b15e1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_be09f81643d8abc08287ec4f4d7b15e1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_be09f81643d8abc08287ec4f4d7b15e1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_be09f81643d8abc08287ec4f4d7b15e1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_be09f81643d8abc08287ec4f4d7b15e1,
        type_description_1,
        par_request
    );


    // Release cached frame.
    if ( frame_be09f81643d8abc08287ec4f4d7b15e1 == cache_frame_be09f81643d8abc08287ec4f4d7b15e1 )
    {
        Py_DECREF( frame_be09f81643d8abc08287ec4f4d7b15e1 );
    }
    cache_frame_be09f81643d8abc08287ec4f4d7b15e1 = NULL;

    assertFrameObject( frame_be09f81643d8abc08287ec4f4d7b15e1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$template$backends$utils$$$function_1_csrf_input );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_request );
    par_request = NULL;

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

    Py_XDECREF( par_request );
    par_request = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$template$backends$utils$$$function_1_csrf_input );
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



static PyObject *MAKE_FUNCTION_django$template$backends$utils$$$function_1_csrf_input(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$template$backends$utils$$$function_1_csrf_input,
        const_str_plain_csrf_input,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_be09f81643d8abc08287ec4f4d7b15e1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$template$backends$utils,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$template$backends$utils =
{
    PyModuleDef_HEAD_INIT,
    "django.template.backends.utils",   /* m_name */
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

MOD_INIT_DECL( django$template$backends$utils )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$template$backends$utils );
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
    puts("django.template.backends.utils: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.template.backends.utils: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$template$backends$utils" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$template$backends$utils = Py_InitModule4(
        "django.template.backends.utils",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$template$backends$utils = PyModule_Create( &mdef_django$template$backends$utils );
#endif

    moduledict_django$template$backends$utils = MODULE_DICT( module_django$template$backends$utils );

    CHECK_OBJECT( module_django$template$backends$utils );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d1e075ae9e80e70d2e25375c22ee768d, module_django$template$backends$utils );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$template$backends$utils, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$template$backends$utils, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$template$backends$utils, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    struct Nuitka_FrameObject *frame_05536db6ec571ff0d12a15f3c39f24e9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$template$backends$utils, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$template$backends$utils, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$template$backends$utils, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_05536db6ec571ff0d12a15f3c39f24e9 = MAKE_MODULE_FRAME( codeobj_05536db6ec571ff0d12a15f3c39f24e9, module_django$template$backends$utils );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_05536db6ec571ff0d12a15f3c39f24e9 );
    assert( Py_REFCNT( frame_05536db6ec571ff0d12a15f3c39f24e9 ) == 2 );

    // Framed code:
    frame_05536db6ec571ff0d12a15f3c39f24e9->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_d1e075ae9e80e70d2e25375c22ee768d;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_05536db6ec571ff0d12a15f3c39f24e9->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_django$template$backends$utils, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$template$backends$utils, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_d7cf60a02de7b10a6b68d1680ba3139e;
    UPDATE_STRING_DICT0( moduledict_django$template$backends$utils, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    frame_05536db6ec571ff0d12a15f3c39f24e9->m_frame.f_lineno = 2;
    tmp_import_name_from_1 = PyImport_ImportModule("__future__");
    assert( tmp_import_name_from_1 != NULL );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$template$backends$utils, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
    tmp_name_name_1 = const_str_digest_5ed11698e149f372a4e77ae4cd628aa6;
    tmp_globals_name_1 = (PyObject *)moduledict_django$template$backends$utils;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_get_token_tuple;
    tmp_level_name_1 = const_int_0;
    frame_05536db6ec571ff0d12a15f3c39f24e9->m_frame.f_lineno = 4;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_get_token );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$template$backends$utils, (Nuitka_StringObject *)const_str_plain_get_token, tmp_assign_source_8 );
    tmp_name_name_2 = const_str_digest_3d2fb639fc3676a85e9d77bb02d18a21;
    tmp_globals_name_2 = (PyObject *)moduledict_django$template$backends$utils;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_lazy_tuple;
    tmp_level_name_2 = const_int_0;
    frame_05536db6ec571ff0d12a15f3c39f24e9->m_frame.f_lineno = 5;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_lazy );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$template$backends$utils, (Nuitka_StringObject *)const_str_plain_lazy, tmp_assign_source_9 );
    tmp_name_name_3 = const_str_digest_cd392128dd6f78a075e1cd14b025bfa8;
    tmp_globals_name_3 = (PyObject *)moduledict_django$template$backends$utils;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_format_html_tuple;
    tmp_level_name_3 = const_int_0;
    frame_05536db6ec571ff0d12a15f3c39f24e9->m_frame.f_lineno = 6;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_format_html );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$template$backends$utils, (Nuitka_StringObject *)const_str_plain_format_html, tmp_assign_source_10 );
    tmp_name_name_4 = const_str_digest_f6f6c1a36df5c3a25611ca7666c8182e;
    tmp_globals_name_4 = (PyObject *)moduledict_django$template$backends$utils;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_SafeText_tuple;
    tmp_level_name_4 = const_int_0;
    frame_05536db6ec571ff0d12a15f3c39f24e9->m_frame.f_lineno = 7;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_SafeText );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$template$backends$utils, (Nuitka_StringObject *)const_str_plain_SafeText, tmp_assign_source_11 );
    tmp_assign_source_12 = MAKE_FUNCTION_django$template$backends$utils$$$function_1_csrf_input(  );
    UPDATE_STRING_DICT1( moduledict_django$template$backends$utils, (Nuitka_StringObject *)const_str_plain_csrf_input, tmp_assign_source_12 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$template$backends$utils, (Nuitka_StringObject *)const_str_plain_lazy );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_lazy );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "lazy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 16;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = GET_STRING_DICT_VALUE( moduledict_django$template$backends$utils, (Nuitka_StringObject *)const_str_plain_csrf_input );

    if (unlikely( tmp_args_element_name_3 == NULL ))
    {
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_csrf_input );
    }

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "csrf_input" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 16;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = GET_STRING_DICT_VALUE( moduledict_django$template$backends$utils, (Nuitka_StringObject *)const_str_plain_SafeText );

    if (unlikely( tmp_args_element_name_4 == NULL ))
    {
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SafeText );
    }

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SafeText" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 16;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = (PyObject *)&PyUnicode_Type;
    frame_05536db6ec571ff0d12a15f3c39f24e9->m_frame.f_lineno = 16;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$template$backends$utils, (Nuitka_StringObject *)const_str_plain_csrf_input_lazy, tmp_assign_source_13 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_django$template$backends$utils, (Nuitka_StringObject *)const_str_plain_lazy );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_lazy );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "lazy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 17;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = GET_STRING_DICT_VALUE( moduledict_django$template$backends$utils, (Nuitka_StringObject *)const_str_plain_get_token );

    if (unlikely( tmp_args_element_name_6 == NULL ))
    {
        tmp_args_element_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_token );
    }

    if ( tmp_args_element_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_token" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 17;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = (PyObject *)&PyUnicode_Type;
    frame_05536db6ec571ff0d12a15f3c39f24e9->m_frame.f_lineno = 17;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$template$backends$utils, (Nuitka_StringObject *)const_str_plain_csrf_token_lazy, tmp_assign_source_14 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_05536db6ec571ff0d12a15f3c39f24e9 );
#endif
    popFrameStack();

    assertFrameObject( frame_05536db6ec571ff0d12a15f3c39f24e9 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_05536db6ec571ff0d12a15f3c39f24e9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_05536db6ec571ff0d12a15f3c39f24e9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_05536db6ec571ff0d12a15f3c39f24e9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_05536db6ec571ff0d12a15f3c39f24e9, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_django$template$backends$utils );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
