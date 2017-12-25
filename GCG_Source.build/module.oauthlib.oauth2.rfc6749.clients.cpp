/* Generated code for Python source for module 'oauthlib.oauth2.rfc6749.clients'
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

/* The _module_oauthlib$oauth2$rfc6749$clients is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_oauthlib$oauth2$rfc6749$clients;
PyDictObject *moduledict_oauthlib$oauth2$rfc6749$clients;

/* The module constants used, if any. */
static PyObject *const_str_digest_96c18df6dc162d8721b51c7d926b5353;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_digest_2292f8893bc6932e50738a2c26ecbfb2;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain_legacy_application;
extern PyObject *const_str_plain_NUITKA_PACKAGE_oauthlib_oauth2_rfc6749;
extern PyObject *const_str_plain_unicode_literals;
static PyObject *const_tuple_bb5dc2f747f0bf204c7cca79a29867fe_tuple;
extern PyObject *const_str_plain_URI_QUERY;
static PyObject *const_str_digest_748a898fe41e7fa601e7e3a9d9649892;
extern PyObject *const_tuple_str_plain_BackendApplicationClient_tuple;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_service_application;
extern PyObject *const_str_plain___file__;
extern PyObject *const_tuple_25e2b00bca2d814641e7ef22c8ce6ffe_tuple;
extern PyObject *const_str_plain_path;
extern PyObject *const_tuple_c05dbefb7e60ac400b84888255101115_tuple;
static PyObject *const_str_plain_clients;
extern PyObject *const_tuple_str_plain_ServiceApplicationClient_tuple;
extern PyObject *const_str_digest_c1f6c8ec0138344bfd71aefb3c501be3;
extern PyObject *const_str_plain_AUTH_HEADER;
extern PyObject *const_str_plain_ServiceApplicationClient;
static PyObject *const_str_digest_cd945e03946c109d0ec42e3efb6fca48;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_str_plain_NUITKA_PACKAGE_oauthlib_oauth2;
extern PyObject *const_str_plain_LegacyApplicationClient;
extern PyObject *const_tuple_str_plain_WebApplicationClient_tuple;
static PyObject *const_str_digest_05f802338f67607865c69d4f5f02039b;
extern PyObject *const_str_plain_WebApplicationClient;
static PyObject *const_str_plain_mobile_application;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_tuple_str_plain_LegacyApplicationClient_tuple;
extern PyObject *const_str_plain_get;
static PyObject *const_str_plain_web_application;
extern PyObject *const_str_plain_base;
extern PyObject *const_tuple_539dea2cd54b8ce307b91d1abbd4ab87_tuple;
static PyObject *const_str_plain_backend_application;
extern PyObject *const_str_plain_MobileApplicationClient;
extern PyObject *const_str_plain_NUITKA_PACKAGE_oauthlib;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_BackendApplicationClient;
extern PyObject *const_str_plain_BODY;
extern PyObject *const_tuple_str_plain_MobileApplicationClient_tuple;
extern PyObject *const_str_plain_dirname;
static PyObject *const_tuple_df4bee623b12ec4d30660f7879709491_tuple;
extern PyObject *const_str_plain_Client;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_1123c851813872cfff817c1351dbb0d2;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_96c18df6dc162d8721b51c7d926b5353 = UNSTREAM_STRING( &constant_bin[ 1625254 ], 43, 0 );
    const_str_plain_legacy_application = UNSTREAM_STRING( &constant_bin[ 1625297 ], 18, 1 );
    const_tuple_bb5dc2f747f0bf204c7cca79a29867fe_tuple = PyTuple_New( 2 );
    const_str_digest_748a898fe41e7fa601e7e3a9d9649892 = UNSTREAM_STRING( &constant_bin[ 1625315 ], 46, 1 );
    PyTuple_SET_ITEM( const_tuple_bb5dc2f747f0bf204c7cca79a29867fe_tuple, 0, const_str_digest_748a898fe41e7fa601e7e3a9d9649892 ); Py_INCREF( const_str_digest_748a898fe41e7fa601e7e3a9d9649892 );
    PyTuple_SET_ITEM( const_tuple_bb5dc2f747f0bf204c7cca79a29867fe_tuple, 1, const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 ); Py_INCREF( const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 );
    const_str_plain_service_application = UNSTREAM_STRING( &constant_bin[ 1625361 ], 19, 1 );
    const_str_plain_clients = UNSTREAM_STRING( &constant_bin[ 1006446 ], 7, 1 );
    const_str_digest_cd945e03946c109d0ec42e3efb6fca48 = UNSTREAM_STRING( &constant_bin[ 1625380 ], 40, 0 );
    const_str_digest_05f802338f67607865c69d4f5f02039b = UNSTREAM_STRING( &constant_bin[ 1625263 ], 22, 0 );
    const_str_plain_mobile_application = UNSTREAM_STRING( &constant_bin[ 1625420 ], 18, 1 );
    const_str_plain_web_application = UNSTREAM_STRING( &constant_bin[ 1625438 ], 15, 1 );
    const_str_plain_backend_application = UNSTREAM_STRING( &constant_bin[ 1625453 ], 19, 1 );
    const_tuple_df4bee623b12ec4d30660f7879709491_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_df4bee623b12ec4d30660f7879709491_tuple, 0, const_str_plain_Client ); Py_INCREF( const_str_plain_Client );
    PyTuple_SET_ITEM( const_tuple_df4bee623b12ec4d30660f7879709491_tuple, 1, const_str_plain_AUTH_HEADER ); Py_INCREF( const_str_plain_AUTH_HEADER );
    PyTuple_SET_ITEM( const_tuple_df4bee623b12ec4d30660f7879709491_tuple, 2, const_str_plain_URI_QUERY ); Py_INCREF( const_str_plain_URI_QUERY );
    PyTuple_SET_ITEM( const_tuple_df4bee623b12ec4d30660f7879709491_tuple, 3, const_str_plain_BODY ); Py_INCREF( const_str_plain_BODY );
    const_str_digest_1123c851813872cfff817c1351dbb0d2 = UNSTREAM_STRING( &constant_bin[ 1625270 ], 15, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_oauthlib$oauth2$rfc6749$clients( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b80dfe9aa7dcb821cd292c561336fb9b;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_96c18df6dc162d8721b51c7d926b5353 );
    codeobj_b80dfe9aa7dcb821cd292c561336fb9b = MAKE_CODEOBJ( module_filename_obj, const_str_digest_cd945e03946c109d0ec42e3efb6fca48, 1, const_tuple_empty, 0, 0, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_oauthlib$oauth2$rfc6749$clients =
{
    PyModuleDef_HEAD_INIT,
    "oauthlib.oauth2.rfc6749.clients",   /* m_name */
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

MOD_INIT_DECL( oauthlib$oauth2$rfc6749$clients )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_oauthlib$oauth2$rfc6749$clients );
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
    puts("oauthlib.oauth2.rfc6749.clients: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("oauthlib.oauth2.rfc6749.clients: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initoauthlib$oauth2$rfc6749$clients" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_oauthlib$oauth2$rfc6749$clients = Py_InitModule4(
        "oauthlib.oauth2.rfc6749.clients",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_oauthlib$oauth2$rfc6749$clients = PyModule_Create( &mdef_oauthlib$oauth2$rfc6749$clients );
#endif

    moduledict_oauthlib$oauth2$rfc6749$clients = MODULE_DICT( module_oauthlib$oauth2$rfc6749$clients );

    CHECK_OBJECT( module_oauthlib$oauth2$rfc6749$clients );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_2292f8893bc6932e50738a2c26ecbfb2, module_oauthlib$oauth2$rfc6749$clients );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_oauthlib$oauth2$rfc6749$clients, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_oauthlib$oauth2$rfc6749$clients, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_oauthlib$oauth2$rfc6749$clients, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
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
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_list_element_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    struct Nuitka_FrameObject *frame_b80dfe9aa7dcb821cd292c561336fb9b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_c1f6c8ec0138344bfd71aefb3c501be3;
    UPDATE_STRING_DICT0( moduledict_oauthlib$oauth2$rfc6749$clients, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_oauthlib$oauth2$rfc6749$clients, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_b80dfe9aa7dcb821cd292c561336fb9b = MAKE_MODULE_FRAME( codeobj_b80dfe9aa7dcb821cd292c561336fb9b, module_oauthlib$oauth2$rfc6749$clients );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_b80dfe9aa7dcb821cd292c561336fb9b );
    assert( Py_REFCNT( frame_b80dfe9aa7dcb821cd292c561336fb9b ) == 2 );

    // Framed code:
    tmp_assign_source_3 = PyList_New( 5 );
    frame_b80dfe9aa7dcb821cd292c561336fb9b->m_frame.f_lineno = 1;
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
    frame_b80dfe9aa7dcb821cd292c561336fb9b->m_frame.f_lineno = 1;
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
    frame_b80dfe9aa7dcb821cd292c561336fb9b->m_frame.f_lineno = 1;
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
    frame_b80dfe9aa7dcb821cd292c561336fb9b->m_frame.f_lineno = 1;
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
    frame_b80dfe9aa7dcb821cd292c561336fb9b->m_frame.f_lineno = 1;
    tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_25e2b00bca2d814641e7ef22c8ce6ffe_tuple, 0 ) );

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = const_str_digest_05f802338f67607865c69d4f5f02039b;
    frame_b80dfe9aa7dcb821cd292c561336fb9b->m_frame.f_lineno = 1;
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
    frame_b80dfe9aa7dcb821cd292c561336fb9b->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("os");
        if (likely( module != NULL ))
        {
            tmp_source_name_3 = PyObject_GetAttr( module, const_str_plain_path );
        }
        else
        {
            tmp_source_name_3 = NULL;
        }
    }

    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_join );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    frame_b80dfe9aa7dcb821cd292c561336fb9b->m_frame.f_lineno = 1;
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
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    frame_b80dfe9aa7dcb821cd292c561336fb9b->m_frame.f_lineno = 1;
    tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_539dea2cd54b8ce307b91d1abbd4ab87_tuple, 0 ) );

    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = const_str_digest_1123c851813872cfff817c1351dbb0d2;
    frame_b80dfe9aa7dcb821cd292c561336fb9b->m_frame.f_lineno = 1;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 2, tmp_list_element_1 );
    frame_b80dfe9aa7dcb821cd292c561336fb9b->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("os");
        if (likely( module != NULL ))
        {
            tmp_source_name_4 = PyObject_GetAttr( module, const_str_plain_path );
        }
        else
        {
            tmp_source_name_4 = NULL;
        }
    }

    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_join );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    frame_b80dfe9aa7dcb821cd292c561336fb9b->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("os");
        if (likely( module != NULL ))
        {
            tmp_called_instance_3 = PyObject_GetAttr( module, const_str_plain_environ );
        }
        else
        {
            tmp_called_instance_3 = NULL;
        }
    }

    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    frame_b80dfe9aa7dcb821cd292c561336fb9b->m_frame.f_lineno = 1;
    tmp_args_element_name_6 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_c05dbefb7e60ac400b84888255101115_tuple, 0 ) );

    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = const_str_plain_clients;
    frame_b80dfe9aa7dcb821cd292c561336fb9b->m_frame.f_lineno = 1;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 3, tmp_list_element_1 );
    frame_b80dfe9aa7dcb821cd292c561336fb9b->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("os");
        if (likely( module != NULL ))
        {
            tmp_called_instance_4 = PyObject_GetAttr( module, const_str_plain_environ );
        }
        else
        {
            tmp_called_instance_4 = NULL;
        }
    }

    if ( tmp_called_instance_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    frame_b80dfe9aa7dcb821cd292c561336fb9b->m_frame.f_lineno = 1;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_bb5dc2f747f0bf204c7cca79a29867fe_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 4, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2$rfc6749$clients, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_oauthlib$oauth2$rfc6749$clients, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_4 );
    frame_b80dfe9aa7dcb821cd292c561336fb9b->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("importlib._bootstrap");
        if (likely( module != NULL ))
        {
            tmp_called_name_5 = PyObject_GetAttr( module, const_str_plain_ModuleSpec );
        }
        else
        {
            tmp_called_name_5 = NULL;
        }
    }

    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = const_str_digest_2292f8893bc6932e50738a2c26ecbfb2;
    tmp_args_element_name_9 = metapath_based_loader;
    frame_b80dfe9aa7dcb821cd292c561336fb9b->m_frame.f_lineno = 1;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2$rfc6749$clients, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_5 );
    tmp_assign_source_6 = Py_None;
    UPDATE_STRING_DICT0( moduledict_oauthlib$oauth2$rfc6749$clients, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_2292f8893bc6932e50738a2c26ecbfb2;
    UPDATE_STRING_DICT0( moduledict_oauthlib$oauth2$rfc6749$clients, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_7 );
    frame_b80dfe9aa7dcb821cd292c561336fb9b->m_frame.f_lineno = 9;
    tmp_assign_source_8 = PyImport_ImportModule("__future__");
    assert( tmp_assign_source_8 != NULL );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_8 );
    tmp_import_from_1__module = tmp_assign_source_8;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2$rfc6749$clients, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_9 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_unicode_literals );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2$rfc6749$clients, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_10 );
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

    tmp_name_name_1 = const_str_plain_base;
    tmp_globals_name_1 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$clients;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_df4bee623b12ec4d30660f7879709491_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_b80dfe9aa7dcb821cd292c561336fb9b->m_frame.f_lineno = 11;
    tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_11;

    // Tried code:
    tmp_import_name_from_3 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_Client );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2$rfc6749$clients, (Nuitka_StringObject *)const_str_plain_Client, tmp_assign_source_12 );
    tmp_import_name_from_4 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_AUTH_HEADER );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2$rfc6749$clients, (Nuitka_StringObject *)const_str_plain_AUTH_HEADER, tmp_assign_source_13 );
    tmp_import_name_from_5 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_URI_QUERY );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2$rfc6749$clients, (Nuitka_StringObject *)const_str_plain_URI_QUERY, tmp_assign_source_14 );
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_BODY );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2$rfc6749$clients, (Nuitka_StringObject *)const_str_plain_BODY, tmp_assign_source_15 );
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

    tmp_name_name_2 = const_str_plain_web_application;
    tmp_globals_name_2 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$clients;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_WebApplicationClient_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_b80dfe9aa7dcb821cd292c561336fb9b->m_frame.f_lineno = 12;
    tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_WebApplicationClient );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2$rfc6749$clients, (Nuitka_StringObject *)const_str_plain_WebApplicationClient, tmp_assign_source_16 );
    tmp_name_name_3 = const_str_plain_mobile_application;
    tmp_globals_name_3 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$clients;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_MobileApplicationClient_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_b80dfe9aa7dcb821cd292c561336fb9b->m_frame.f_lineno = 13;
    tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_MobileApplicationClient );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2$rfc6749$clients, (Nuitka_StringObject *)const_str_plain_MobileApplicationClient, tmp_assign_source_17 );
    tmp_name_name_4 = const_str_plain_legacy_application;
    tmp_globals_name_4 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$clients;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_LegacyApplicationClient_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_b80dfe9aa7dcb821cd292c561336fb9b->m_frame.f_lineno = 14;
    tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_LegacyApplicationClient );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2$rfc6749$clients, (Nuitka_StringObject *)const_str_plain_LegacyApplicationClient, tmp_assign_source_18 );
    tmp_name_name_5 = const_str_plain_backend_application;
    tmp_globals_name_5 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$clients;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_BackendApplicationClient_tuple;
    tmp_level_name_5 = const_int_pos_1;
    frame_b80dfe9aa7dcb821cd292c561336fb9b->m_frame.f_lineno = 15;
    tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_BackendApplicationClient );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2$rfc6749$clients, (Nuitka_StringObject *)const_str_plain_BackendApplicationClient, tmp_assign_source_19 );
    tmp_name_name_6 = const_str_plain_service_application;
    tmp_globals_name_6 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$clients;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_ServiceApplicationClient_tuple;
    tmp_level_name_6 = const_int_pos_1;
    frame_b80dfe9aa7dcb821cd292c561336fb9b->m_frame.f_lineno = 16;
    tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_ServiceApplicationClient );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2$rfc6749$clients, (Nuitka_StringObject *)const_str_plain_ServiceApplicationClient, tmp_assign_source_20 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b80dfe9aa7dcb821cd292c561336fb9b );
#endif
    popFrameStack();

    assertFrameObject( frame_b80dfe9aa7dcb821cd292c561336fb9b );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b80dfe9aa7dcb821cd292c561336fb9b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b80dfe9aa7dcb821cd292c561336fb9b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b80dfe9aa7dcb821cd292c561336fb9b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b80dfe9aa7dcb821cd292c561336fb9b, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_oauthlib$oauth2$rfc6749$clients );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
