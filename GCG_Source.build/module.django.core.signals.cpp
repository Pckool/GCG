/* Generated code for Python source for module 'django.core.signals'
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

/* The _module_django$core$signals is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$core$signals;
PyDictObject *moduledict_django$core$signals;

/* The module constants used, if any. */
extern PyObject *const_str_plain_setting;
extern PyObject *const_str_plain_Signal;
extern PyObject *const_str_digest_d0d1acad20ca7072407dc5151a8806e5;
extern PyObject *const_str_plain_providing_args;
static PyObject *const_list_str_plain_request_list;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_request;
static PyObject *const_str_plain_enter;
static PyObject *const_dict_5fa947943eea05ae3c4b62d200bea4eb;
static PyObject *const_list_str_plain_setting_str_plain_value_str_plain_enter_list;
extern PyObject *const_str_digest_287a151b5f66f8e3cd4e02346aa22be8;
extern PyObject *const_str_plain___file__;
static PyObject *const_dict_2a19912f753e1dde22ee4475dcf40985;
extern PyObject *const_int_0;
static PyObject *const_str_digest_9339a0ff54562ef9fd048c82b215b379;
extern PyObject *const_str_plain_value;
static PyObject *const_str_digest_8bdfcba4de7aa5c3e391618282a68c62;
extern PyObject *const_str_plain_setting_changed;
extern PyObject *const_str_plain_request_finished;
extern PyObject *const_str_digest_35c89cd6a0c5a28c602c67ee2a4204b8;
static PyObject *const_dict_3931245e3bf78c6193eb9eb7899bb4bb;
extern PyObject *const_tuple_str_plain_Signal_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_request_started;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_list_str_plain_environ_list;
static PyObject *const_str_plain_got_request_exception;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_list_str_plain_request_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_request_list, 0, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    const_str_plain_enter = UNSTREAM_STRING( &constant_bin[ 8014 ], 5, 1 );
    const_dict_5fa947943eea05ae3c4b62d200bea4eb = _PyDict_NewPresized( 1 );
    const_list_str_plain_environ_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_environ_list, 0, const_str_plain_environ ); Py_INCREF( const_str_plain_environ );
    PyDict_SetItem( const_dict_5fa947943eea05ae3c4b62d200bea4eb, const_str_plain_providing_args, const_list_str_plain_environ_list );
    assert( PyDict_Size( const_dict_5fa947943eea05ae3c4b62d200bea4eb ) == 1 );
    const_list_str_plain_setting_str_plain_value_str_plain_enter_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_str_plain_setting_str_plain_value_str_plain_enter_list, 0, const_str_plain_setting ); Py_INCREF( const_str_plain_setting );
    PyList_SET_ITEM( const_list_str_plain_setting_str_plain_value_str_plain_enter_list, 1, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyList_SET_ITEM( const_list_str_plain_setting_str_plain_value_str_plain_enter_list, 2, const_str_plain_enter ); Py_INCREF( const_str_plain_enter );
    const_dict_2a19912f753e1dde22ee4475dcf40985 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_2a19912f753e1dde22ee4475dcf40985, const_str_plain_providing_args, const_list_str_plain_setting_str_plain_value_str_plain_enter_list );
    assert( PyDict_Size( const_dict_2a19912f753e1dde22ee4475dcf40985 ) == 1 );
    const_str_digest_9339a0ff54562ef9fd048c82b215b379 = UNSTREAM_STRING( &constant_bin[ 820653 ], 28, 0 );
    const_str_digest_8bdfcba4de7aa5c3e391618282a68c62 = UNSTREAM_STRING( &constant_bin[ 820681 ], 22, 0 );
    const_dict_3931245e3bf78c6193eb9eb7899bb4bb = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_3931245e3bf78c6193eb9eb7899bb4bb, const_str_plain_providing_args, const_list_str_plain_request_list );
    assert( PyDict_Size( const_dict_3931245e3bf78c6193eb9eb7899bb4bb ) == 1 );
    const_str_plain_got_request_exception = UNSTREAM_STRING( &constant_bin[ 820703 ], 21, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$core$signals( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_ed542577d51217383a5f00930541dc2f;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_8bdfcba4de7aa5c3e391618282a68c62 );
    codeobj_ed542577d51217383a5f00930541dc2f = MAKE_CODEOBJ( module_filename_obj, const_str_digest_9339a0ff54562ef9fd048c82b215b379, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$core$signals =
{
    PyModuleDef_HEAD_INIT,
    "django.core.signals",   /* m_name */
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

MOD_INIT_DECL( django$core$signals )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$core$signals );
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
    puts("django.core.signals: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.core.signals: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$core$signals" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$core$signals = Py_InitModule4(
        "django.core.signals",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$core$signals = PyModule_Create( &mdef_django$core$signals );
#endif

    moduledict_django$core$signals = MODULE_DICT( module_django$core$signals );

    CHECK_OBJECT( module_django$core$signals );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_35c89cd6a0c5a28c602c67ee2a4204b8, module_django$core$signals );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$core$signals, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$core$signals, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$core$signals, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    struct Nuitka_FrameObject *frame_ed542577d51217383a5f00930541dc2f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$core$signals, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$core$signals, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$core$signals, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_ed542577d51217383a5f00930541dc2f = MAKE_MODULE_FRAME( codeobj_ed542577d51217383a5f00930541dc2f, module_django$core$signals );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_ed542577d51217383a5f00930541dc2f );
    assert( Py_REFCNT( frame_ed542577d51217383a5f00930541dc2f ) == 2 );

    // Framed code:
    frame_ed542577d51217383a5f00930541dc2f->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_35c89cd6a0c5a28c602c67ee2a4204b8;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_ed542577d51217383a5f00930541dc2f->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_django$core$signals, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$core$signals, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_d0d1acad20ca7072407dc5151a8806e5;
    UPDATE_STRING_DICT0( moduledict_django$core$signals, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_digest_287a151b5f66f8e3cd4e02346aa22be8;
    tmp_globals_name_1 = (PyObject *)moduledict_django$core$signals;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_Signal_tuple;
    tmp_level_name_1 = const_int_0;
    frame_ed542577d51217383a5f00930541dc2f->m_frame.f_lineno = 1;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Signal );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$signals, (Nuitka_StringObject *)const_str_plain_Signal, tmp_assign_source_7 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$core$signals, (Nuitka_StringObject *)const_str_plain_Signal );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Signal );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Signal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 3;

        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = DEEP_COPY( const_dict_5fa947943eea05ae3c4b62d200bea4eb );
    frame_ed542577d51217383a5f00930541dc2f->m_frame.f_lineno = 3;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$signals, (Nuitka_StringObject *)const_str_plain_request_started, tmp_assign_source_8 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_django$core$signals, (Nuitka_StringObject *)const_str_plain_Signal );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Signal );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Signal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 4;

        goto frame_exception_exit_1;
    }

    frame_ed542577d51217383a5f00930541dc2f->m_frame.f_lineno = 4;
    tmp_assign_source_9 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$signals, (Nuitka_StringObject *)const_str_plain_request_finished, tmp_assign_source_9 );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_django$core$signals, (Nuitka_StringObject *)const_str_plain_Signal );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Signal );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Signal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 5;

        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = DEEP_COPY( const_dict_3931245e3bf78c6193eb9eb7899bb4bb );
    frame_ed542577d51217383a5f00930541dc2f->m_frame.f_lineno = 5;
    tmp_assign_source_10 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$signals, (Nuitka_StringObject *)const_str_plain_got_request_exception, tmp_assign_source_10 );
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_django$core$signals, (Nuitka_StringObject *)const_str_plain_Signal );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Signal );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Signal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 6;

        goto frame_exception_exit_1;
    }

    tmp_kw_name_3 = DEEP_COPY( const_dict_2a19912f753e1dde22ee4475dcf40985 );
    frame_ed542577d51217383a5f00930541dc2f->m_frame.f_lineno = 6;
    tmp_assign_source_11 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_5, tmp_kw_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$signals, (Nuitka_StringObject *)const_str_plain_setting_changed, tmp_assign_source_11 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed542577d51217383a5f00930541dc2f );
#endif
    popFrameStack();

    assertFrameObject( frame_ed542577d51217383a5f00930541dc2f );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed542577d51217383a5f00930541dc2f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ed542577d51217383a5f00930541dc2f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ed542577d51217383a5f00930541dc2f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ed542577d51217383a5f00930541dc2f, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_django$core$signals );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
