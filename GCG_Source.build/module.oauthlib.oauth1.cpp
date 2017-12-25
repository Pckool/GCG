/* Generated code for Python source for module 'oauthlib.oauth1'
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

/* The _module_oauthlib$oauth1 is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_oauthlib$oauth1;
PyDictObject *moduledict_oauthlib$oauth1;

/* The module constants used, if any. */
extern PyObject *const_tuple_str_plain_RequestValidator_tuple;
static PyObject *const_str_plain_oauth1;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_tuple_8d89e6782fe9280e9f9946d87f2e786c_tuple;
extern PyObject *const_str_plain_unicode_literals;
static PyObject *const_str_digest_340973d02ca0cfbc60182dfc1ab348d0;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_c4b276bc3c13ae88da73e271c9136ed6;
extern PyObject *const_str_plain_AccessTokenEndpoint;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_5bcd0f91b69aadc1328c7dfefc0fb693;
extern PyObject *const_str_plain_AuthorizationEndpoint;
static PyObject *const_tuple_efd543757c7df2524886401892b5902a_tuple;
extern PyObject *const_tuple_25e2b00bca2d814641e7ef22c8ce6ffe_tuple;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_NUITKA_PACKAGE_oauthlib_oauth1;
extern PyObject *const_str_plain_SignatureOnlyEndpoint;
static PyObject *const_tuple_07583c45eaa8c882fc5137be9f485fe2_tuple;
static PyObject *const_tuple_str_plain_AccessTokenEndpoint_str_plain_ResourceEndpoint_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_RequestTokenEndpoint;
extern PyObject *const_str_plain_rfc5849;
extern PyObject *const_str_plain_SIGNATURE_TYPE_AUTH_HEADER;
extern PyObject *const_str_plain_SIGNATURE_RSA;
extern PyObject *const_str_plain_ResourceEndpoint;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_str_plain_InsecureTransportError;
static PyObject *const_tuple_c1565d01395fd078c099cf27818a6baf_tuple;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_ec79eae663ac8b803f738a57226e5f95;
extern PyObject *const_str_plain_get;
extern PyObject *const_tuple_3bde203ce2d3bd80ec1614048936f36e_tuple;
extern PyObject *const_str_plain_SIGNATURE_TYPE_BODY;
static PyObject *const_str_digest_1ed7dbd356b2bbb80a44c72797c4c10b;
extern PyObject *const_str_plain_RequestValidator;
static PyObject *const_str_digest_95c19250f23c12bb34d854973380a762;
extern PyObject *const_str_plain_InvalidSignatureMethodError;
extern PyObject *const_str_plain_OAuth1Error;
extern PyObject *const_str_plain_NUITKA_PACKAGE_oauthlib;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_InvalidRequestError;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain_InvalidClientError;
extern PyObject *const_str_digest_4b36f729750b773919f1dc22707d7178;
extern PyObject *const_str_plain_Client;
extern PyObject *const_str_plain_SIGNATURE_HMAC;
extern PyObject *const_str_plain_SIGNATURE_PLAINTEXT;
extern PyObject *const_tuple_str_plain_Client_tuple;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_SIGNATURE_TYPE_QUERY;
extern PyObject *const_tuple_str_plain_SIGNATURE_TYPE_BODY_tuple;
extern PyObject *const_str_plain_WebApplicationServer;
static PyObject *const_tuple_7f4dc9df7d6ef05bb02bf564eafb0511_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_oauth1 = UNSTREAM_STRING( &constant_bin[ 1562004 ], 6, 1 );
    const_tuple_8d89e6782fe9280e9f9946d87f2e786c_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_8d89e6782fe9280e9f9946d87f2e786c_tuple, 0, const_str_plain_SIGNATURE_HMAC ); Py_INCREF( const_str_plain_SIGNATURE_HMAC );
    PyTuple_SET_ITEM( const_tuple_8d89e6782fe9280e9f9946d87f2e786c_tuple, 1, const_str_plain_SIGNATURE_RSA ); Py_INCREF( const_str_plain_SIGNATURE_RSA );
    PyTuple_SET_ITEM( const_tuple_8d89e6782fe9280e9f9946d87f2e786c_tuple, 2, const_str_plain_SIGNATURE_PLAINTEXT ); Py_INCREF( const_str_plain_SIGNATURE_PLAINTEXT );
    const_str_digest_340973d02ca0cfbc60182dfc1ab348d0 = UNSTREAM_STRING( &constant_bin[ 1562010 ], 25, 0 );
    const_str_digest_c4b276bc3c13ae88da73e271c9136ed6 = UNSTREAM_STRING( &constant_bin[ 1562035 ], 24, 0 );
    const_str_digest_5bcd0f91b69aadc1328c7dfefc0fb693 = UNSTREAM_STRING( &constant_bin[ 1562059 ], 17, 0 );
    const_tuple_efd543757c7df2524886401892b5902a_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_efd543757c7df2524886401892b5902a_tuple, 0, const_str_plain_InsecureTransportError ); Py_INCREF( const_str_plain_InsecureTransportError );
    PyTuple_SET_ITEM( const_tuple_efd543757c7df2524886401892b5902a_tuple, 1, const_str_plain_InvalidClientError ); Py_INCREF( const_str_plain_InvalidClientError );
    PyTuple_SET_ITEM( const_tuple_efd543757c7df2524886401892b5902a_tuple, 2, const_str_plain_InvalidRequestError ); Py_INCREF( const_str_plain_InvalidRequestError );
    PyTuple_SET_ITEM( const_tuple_efd543757c7df2524886401892b5902a_tuple, 3, const_str_plain_InvalidSignatureMethodError ); Py_INCREF( const_str_plain_InvalidSignatureMethodError );
    PyTuple_SET_ITEM( const_tuple_efd543757c7df2524886401892b5902a_tuple, 4, const_str_plain_OAuth1Error ); Py_INCREF( const_str_plain_OAuth1Error );
    const_tuple_07583c45eaa8c882fc5137be9f485fe2_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_07583c45eaa8c882fc5137be9f485fe2_tuple, 0, const_str_plain_SignatureOnlyEndpoint ); Py_INCREF( const_str_plain_SignatureOnlyEndpoint );
    PyTuple_SET_ITEM( const_tuple_07583c45eaa8c882fc5137be9f485fe2_tuple, 1, const_str_plain_WebApplicationServer ); Py_INCREF( const_str_plain_WebApplicationServer );
    const_tuple_str_plain_AccessTokenEndpoint_str_plain_ResourceEndpoint_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_AccessTokenEndpoint_str_plain_ResourceEndpoint_tuple, 0, const_str_plain_AccessTokenEndpoint ); Py_INCREF( const_str_plain_AccessTokenEndpoint );
    PyTuple_SET_ITEM( const_tuple_str_plain_AccessTokenEndpoint_str_plain_ResourceEndpoint_tuple, 1, const_str_plain_ResourceEndpoint ); Py_INCREF( const_str_plain_ResourceEndpoint );
    const_tuple_c1565d01395fd078c099cf27818a6baf_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_c1565d01395fd078c099cf27818a6baf_tuple, 0, const_str_plain_SIGNATURE_TYPE_AUTH_HEADER ); Py_INCREF( const_str_plain_SIGNATURE_TYPE_AUTH_HEADER );
    PyTuple_SET_ITEM( const_tuple_c1565d01395fd078c099cf27818a6baf_tuple, 1, const_str_plain_SIGNATURE_TYPE_QUERY ); Py_INCREF( const_str_plain_SIGNATURE_TYPE_QUERY );
    const_str_digest_ec79eae663ac8b803f738a57226e5f95 = UNSTREAM_STRING( &constant_bin[ 1562076 ], 27, 0 );
    const_str_digest_1ed7dbd356b2bbb80a44c72797c4c10b = UNSTREAM_STRING( &constant_bin[ 1562103 ], 133, 0 );
    const_str_digest_95c19250f23c12bb34d854973380a762 = UNSTREAM_STRING( &constant_bin[ 1562236 ], 14, 0 );
    const_tuple_7f4dc9df7d6ef05bb02bf564eafb0511_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_7f4dc9df7d6ef05bb02bf564eafb0511_tuple, 0, const_str_plain_RequestTokenEndpoint ); Py_INCREF( const_str_plain_RequestTokenEndpoint );
    PyTuple_SET_ITEM( const_tuple_7f4dc9df7d6ef05bb02bf564eafb0511_tuple, 1, const_str_plain_AuthorizationEndpoint ); Py_INCREF( const_str_plain_AuthorizationEndpoint );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_oauthlib$oauth1( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_55d18934fd5466ba2ace28b5ba2a5475;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_ec79eae663ac8b803f738a57226e5f95 );
    codeobj_55d18934fd5466ba2ace28b5ba2a5475 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_c4b276bc3c13ae88da73e271c9136ed6, 1, const_tuple_empty, 0, 0, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_oauthlib$oauth1 =
{
    PyModuleDef_HEAD_INIT,
    "oauthlib.oauth1",   /* m_name */
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

MOD_INIT_DECL( oauthlib$oauth1 )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_oauthlib$oauth1 );
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
    puts("oauthlib.oauth1: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("oauthlib.oauth1: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initoauthlib$oauth1" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_oauthlib$oauth1 = Py_InitModule4(
        "oauthlib.oauth1",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_oauthlib$oauth1 = PyModule_Create( &mdef_oauthlib$oauth1 );
#endif

    moduledict_oauthlib$oauth1 = MODULE_DICT( module_oauthlib$oauth1 );

    CHECK_OBJECT( module_oauthlib$oauth1 );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_4b36f729750b773919f1dc22707d7178, module_oauthlib$oauth1 );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    PyObject *tmp_import_from_7__module = NULL;
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
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_fromlist_name_8;
    PyObject *tmp_fromlist_name_9;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_globals_name_8;
    PyObject *tmp_globals_name_9;
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
    PyObject *tmp_import_name_from_20;
    PyObject *tmp_import_name_from_21;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_level_name_8;
    PyObject *tmp_level_name_9;
    PyObject *tmp_list_element_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_locals_name_8;
    PyObject *tmp_locals_name_9;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_name_name_8;
    PyObject *tmp_name_name_9;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    struct Nuitka_FrameObject *frame_55d18934fd5466ba2ace28b5ba2a5475;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_1ed7dbd356b2bbb80a44c72797c4c10b;
    UPDATE_STRING_DICT0( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_55d18934fd5466ba2ace28b5ba2a5475 = MAKE_MODULE_FRAME( codeobj_55d18934fd5466ba2ace28b5ba2a5475, module_oauthlib$oauth1 );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_55d18934fd5466ba2ace28b5ba2a5475 );
    assert( Py_REFCNT( frame_55d18934fd5466ba2ace28b5ba2a5475 ) == 2 );

    // Framed code:
    tmp_assign_source_3 = PyList_New( 3 );
    frame_55d18934fd5466ba2ace28b5ba2a5475->m_frame.f_lineno = 1;
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
    frame_55d18934fd5466ba2ace28b5ba2a5475->m_frame.f_lineno = 1;
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
    frame_55d18934fd5466ba2ace28b5ba2a5475->m_frame.f_lineno = 1;
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
    frame_55d18934fd5466ba2ace28b5ba2a5475->m_frame.f_lineno = 1;
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
    frame_55d18934fd5466ba2ace28b5ba2a5475->m_frame.f_lineno = 1;
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
    tmp_args_element_name_3 = const_str_plain_oauth1;
    frame_55d18934fd5466ba2ace28b5ba2a5475->m_frame.f_lineno = 1;
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
    frame_55d18934fd5466ba2ace28b5ba2a5475->m_frame.f_lineno = 1;
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
    frame_55d18934fd5466ba2ace28b5ba2a5475->m_frame.f_lineno = 1;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_3bde203ce2d3bd80ec1614048936f36e_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 2, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_4 );
    frame_55d18934fd5466ba2ace28b5ba2a5475->m_frame.f_lineno = 1;
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
    tmp_args_element_name_4 = const_str_digest_4b36f729750b773919f1dc22707d7178;
    tmp_args_element_name_5 = metapath_based_loader;
    frame_55d18934fd5466ba2ace28b5ba2a5475->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_5 );
    tmp_assign_source_6 = Py_None;
    UPDATE_STRING_DICT0( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_4b36f729750b773919f1dc22707d7178;
    UPDATE_STRING_DICT0( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_7 );
    frame_55d18934fd5466ba2ace28b5ba2a5475->m_frame.f_lineno = 9;
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
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_9 );
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
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_10 );
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

    tmp_name_name_1 = const_str_plain_rfc5849;
    tmp_globals_name_1 = (PyObject *)moduledict_oauthlib$oauth1;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_Client_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_55d18934fd5466ba2ace28b5ba2a5475->m_frame.f_lineno = 11;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_Client );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain_Client, tmp_assign_source_11 );
    tmp_name_name_2 = const_str_plain_rfc5849;
    tmp_globals_name_2 = (PyObject *)moduledict_oauthlib$oauth1;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_8d89e6782fe9280e9f9946d87f2e786c_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_55d18934fd5466ba2ace28b5ba2a5475->m_frame.f_lineno = 12;
    tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_12;

    // Tried code:
    tmp_import_name_from_4 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_SIGNATURE_HMAC );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain_SIGNATURE_HMAC, tmp_assign_source_13 );
    tmp_import_name_from_5 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_SIGNATURE_RSA );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain_SIGNATURE_RSA, tmp_assign_source_14 );
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_SIGNATURE_PLAINTEXT );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain_SIGNATURE_PLAINTEXT, tmp_assign_source_15 );
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

    tmp_name_name_3 = const_str_plain_rfc5849;
    tmp_globals_name_3 = (PyObject *)moduledict_oauthlib$oauth1;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_c1565d01395fd078c099cf27818a6baf_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_55d18934fd5466ba2ace28b5ba2a5475->m_frame.f_lineno = 13;
    tmp_assign_source_16 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_16;

    // Tried code:
    tmp_import_name_from_7 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_SIGNATURE_TYPE_AUTH_HEADER );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain_SIGNATURE_TYPE_AUTH_HEADER, tmp_assign_source_17 );
    tmp_import_name_from_8 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_SIGNATURE_TYPE_QUERY );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain_SIGNATURE_TYPE_QUERY, tmp_assign_source_18 );
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

    tmp_name_name_4 = const_str_plain_rfc5849;
    tmp_globals_name_4 = (PyObject *)moduledict_oauthlib$oauth1;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_SIGNATURE_TYPE_BODY_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_55d18934fd5466ba2ace28b5ba2a5475->m_frame.f_lineno = 14;
    tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_SIGNATURE_TYPE_BODY );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain_SIGNATURE_TYPE_BODY, tmp_assign_source_19 );
    tmp_name_name_5 = const_str_digest_340973d02ca0cfbc60182dfc1ab348d0;
    tmp_globals_name_5 = (PyObject *)moduledict_oauthlib$oauth1;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_RequestValidator_tuple;
    tmp_level_name_5 = const_int_pos_1;
    frame_55d18934fd5466ba2ace28b5ba2a5475->m_frame.f_lineno = 15;
    tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_RequestValidator );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain_RequestValidator, tmp_assign_source_20 );
    tmp_name_name_6 = const_str_digest_5bcd0f91b69aadc1328c7dfefc0fb693;
    tmp_globals_name_6 = (PyObject *)moduledict_oauthlib$oauth1;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_7f4dc9df7d6ef05bb02bf564eafb0511_tuple;
    tmp_level_name_6 = const_int_pos_1;
    frame_55d18934fd5466ba2ace28b5ba2a5475->m_frame.f_lineno = 16;
    tmp_assign_source_21 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_4__module == NULL );
    tmp_import_from_4__module = tmp_assign_source_21;

    // Tried code:
    tmp_import_name_from_11 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_RequestTokenEndpoint );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain_RequestTokenEndpoint, tmp_assign_source_22 );
    tmp_import_name_from_12 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_AuthorizationEndpoint );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain_AuthorizationEndpoint, tmp_assign_source_23 );
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

    tmp_name_name_7 = const_str_digest_5bcd0f91b69aadc1328c7dfefc0fb693;
    tmp_globals_name_7 = (PyObject *)moduledict_oauthlib$oauth1;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_AccessTokenEndpoint_str_plain_ResourceEndpoint_tuple;
    tmp_level_name_7 = const_int_pos_1;
    frame_55d18934fd5466ba2ace28b5ba2a5475->m_frame.f_lineno = 17;
    tmp_assign_source_24 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_5__module == NULL );
    tmp_import_from_5__module = tmp_assign_source_24;

    // Tried code:
    tmp_import_name_from_13 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_AccessTokenEndpoint );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain_AccessTokenEndpoint, tmp_assign_source_25 );
    tmp_import_name_from_14 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_14 );
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_ResourceEndpoint );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain_ResourceEndpoint, tmp_assign_source_26 );
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

    tmp_name_name_8 = const_str_digest_5bcd0f91b69aadc1328c7dfefc0fb693;
    tmp_globals_name_8 = (PyObject *)moduledict_oauthlib$oauth1;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_07583c45eaa8c882fc5137be9f485fe2_tuple;
    tmp_level_name_8 = const_int_pos_1;
    frame_55d18934fd5466ba2ace28b5ba2a5475->m_frame.f_lineno = 18;
    tmp_assign_source_27 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_6__module == NULL );
    tmp_import_from_6__module = tmp_assign_source_27;

    // Tried code:
    tmp_import_name_from_15 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_15 );
    tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_SignatureOnlyEndpoint );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain_SignatureOnlyEndpoint, tmp_assign_source_28 );
    tmp_import_name_from_16 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_16 );
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_WebApplicationServer );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain_WebApplicationServer, tmp_assign_source_29 );
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_import_from_6__module );
    tmp_import_from_6__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_import_from_6__module );
    tmp_import_from_6__module = NULL;

    tmp_name_name_9 = const_str_digest_95c19250f23c12bb34d854973380a762;
    tmp_globals_name_9 = (PyObject *)moduledict_oauthlib$oauth1;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_efd543757c7df2524886401892b5902a_tuple;
    tmp_level_name_9 = const_int_pos_1;
    frame_55d18934fd5466ba2ace28b5ba2a5475->m_frame.f_lineno = 19;
    tmp_assign_source_30 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_7__module == NULL );
    tmp_import_from_7__module = tmp_assign_source_30;

    // Tried code:
    tmp_import_name_from_17 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_17 );
    tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_InsecureTransportError );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain_InsecureTransportError, tmp_assign_source_31 );
    tmp_import_name_from_18 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_18 );
    tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_InvalidClientError );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain_InvalidClientError, tmp_assign_source_32 );
    tmp_import_name_from_19 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_19 );
    tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_InvalidRequestError );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain_InvalidRequestError, tmp_assign_source_33 );
    tmp_import_name_from_20 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_20 );
    tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_InvalidSignatureMethodError );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain_InvalidSignatureMethodError, tmp_assign_source_34 );
    tmp_import_name_from_21 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_21 );
    tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_OAuth1Error );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth1, (Nuitka_StringObject *)const_str_plain_OAuth1Error, tmp_assign_source_35 );
    goto try_end_7;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_import_from_7__module );
    tmp_import_from_7__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_55d18934fd5466ba2ace28b5ba2a5475 );
#endif
    popFrameStack();

    assertFrameObject( frame_55d18934fd5466ba2ace28b5ba2a5475 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_55d18934fd5466ba2ace28b5ba2a5475 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_55d18934fd5466ba2ace28b5ba2a5475, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_55d18934fd5466ba2ace28b5ba2a5475->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_55d18934fd5466ba2ace28b5ba2a5475, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    Py_XDECREF( tmp_import_from_7__module );
    tmp_import_from_7__module = NULL;


    return MOD_RETURN_VALUE( module_oauthlib$oauth1 );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
