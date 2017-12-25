/* Generated code for Python source for module 'oauthlib.oauth2'
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

/* The _module_oauthlib$oauth2 is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_oauthlib$oauth2;
PyDictObject *moduledict_oauthlib$oauth2;

/* The module constants used, if any. */
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_str_plain_BackendApplicationClient_tuple;
extern PyObject *const_str_plain_TokenExpiredError;
extern PyObject *const_tuple_str_plain_RevocationEndpoint_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_UnsupportedResponseTypeError;
extern PyObject *const_tuple_str_plain_ServiceApplicationClient_tuple;
extern PyObject *const_str_plain_TemporarilyUnavailableError;
extern PyObject *const_tuple_str_plain_LegacyApplicationServer_tuple;
extern PyObject *const_str_plain_UnsupportedTokenTypeError;
static PyObject *const_str_digest_b503e4f965e51a9aceda60474f9c73c4;
extern PyObject *const_str_plain_ServiceApplicationClient;
extern PyObject *const_str_plain_FatalClientError;
extern PyObject *const_str_plain_ResourceEndpoint;
extern PyObject *const_str_plain_MismatchingStateError;
extern PyObject *const_str_plain_InvalidRequestFatalError;
extern PyObject *const_str_plain_MobileApplicationServer;
extern PyObject *const_tuple_539dea2cd54b8ce307b91d1abbd4ab87_tuple;
static PyObject *const_str_digest_0dbdfbc308726b0564588e91b0c7aa14;
static PyObject *const_tuple_539df862de1637405ed334563b325e40_tuple;
extern PyObject *const_str_plain_MissingResponseTypeError;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_MissingClientIdError;
extern PyObject *const_str_plain_MismatchingRedirectURIError;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_36f2cbe4d50f034138c2092f8c74dad5;
static PyObject *const_str_digest_32622e9defaacec5deb503a2651791b0;
extern PyObject *const_tuple_str_plain_AuthorizationEndpoint_tuple;
extern PyObject *const_str_plain_OpenIDClientError;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_AuthorizationCodeGrant;
extern PyObject *const_str_plain_OAuth2Error;
extern PyObject *const_str_plain_MissingCodeError;
extern PyObject *const_str_plain_RevocationEndpoint;
extern PyObject *const_str_plain_AuthorizationEndpoint;
extern PyObject *const_str_plain_LoginRequired;
static PyObject *const_str_plain_oauth2;
extern PyObject *const_str_plain_path;
extern PyObject *const_tuple_str_plain_MobileApplicationServer_tuple;
extern PyObject *const_str_plain_InvalidClientIdError;
extern PyObject *const_str_plain_InsecureTransportError;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_tuple_str_plain_ResourceEndpoint_tuple;
extern PyObject *const_str_plain_AccountSelectionRequired;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_MissingTokenTypeError;
extern PyObject *const_str_plain_InvalidClientError;
extern PyObject *const_str_plain_FatalOpenIDClientError;
extern PyObject *const_tuple_str_plain_TokenEndpoint_tuple;
extern PyObject *const_tuple_str_plain_Client_tuple;
extern PyObject *const_tuple_str_plain_AuthorizationCodeGrant_tuple;
extern PyObject *const_tuple_str_plain_RequestValidator_tuple;
static PyObject *const_str_digest_9a78c9c4c57fb5870af9b6daaebf05c8;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_tuple_str_plain_ImplicitGrant_tuple;
extern PyObject *const_tuple_str_plain_is_secure_transport_tuple;
extern PyObject *const_tuple_str_plain_RefreshTokenGrant_tuple;
extern PyObject *const_str_plain_UnauthorizedClientError;
extern PyObject *const_tuple_str_plain_BackendApplicationServer_tuple;
static PyObject *const_str_digest_4a3c4244dc35910f4874cd46ae886ee0;
extern PyObject *const_str_plain_LegacyApplicationServer;
extern PyObject *const_str_plain_ServerError;
static PyObject *const_str_digest_4d4d9ca1943cb92efc9e059534eea70b;
extern PyObject *const_str_plain_is_secure_transport;
static PyObject *const_str_digest_1ac91638f095e768631a3f4a3e0a5833;
static PyObject *const_tuple_str_plain_BearerToken_str_plain_OAuth2Token_tuple;
extern PyObject *const_str_plain_ImplicitGrant;
extern PyObject *const_str_plain_AccessDeniedError;
extern PyObject *const_tuple_str_plain_ResourceOwnerPasswordCredentialsGrant_tuple;
extern PyObject *const_str_plain_NUITKA_PACKAGE_oauthlib_oauth2;
extern PyObject *const_str_plain_LegacyApplicationClient;
extern PyObject *const_str_plain_WebApplicationClient;
extern PyObject *const_str_plain_TokenEndpoint;
extern PyObject *const_str_plain_InteractionRequired;
extern PyObject *const_str_plain_RequestValidator;
extern PyObject *const_tuple_str_plain_WebApplicationServer_tuple;
extern PyObject *const_str_plain_UnsupportedGrantTypeError;
extern PyObject *const_str_plain_MobileApplicationClient;
extern PyObject *const_str_plain_BackendApplicationServer;
extern PyObject *const_str_plain_InvalidRequestError;
static PyObject *const_str_digest_fbd30393173429e1721e8a7fb3107d62;
extern PyObject *const_tuple_str_plain_MobileApplicationClient_tuple;
extern PyObject *const_str_plain_Server;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain_OAuth2Token;
extern PyObject *const_str_plain_Client;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_InvalidScopeError;
extern PyObject *const_str_plain_WebApplicationServer;
extern PyObject *const_str_plain_RefreshTokenGrant;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_InvalidRedirectURIError;
extern PyObject *const_tuple_25e2b00bca2d814641e7ef22c8ce6ffe_tuple;
extern PyObject *const_str_plain_MissingTokenError;
extern PyObject *const_tuple_str_plain_ClientCredentialsGrant_tuple;
extern PyObject *const_str_digest_dffaae249b91b231b148c94c8a39b4f6;
extern PyObject *const_tuple_str_plain_Server_tuple;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_tuple_str_plain_WebApplicationClient_tuple;
extern PyObject *const_str_plain_ConsentRequired;
extern PyObject *const_str_plain_ClientCredentialsGrant;
extern PyObject *const_tuple_str_plain_LegacyApplicationClient_tuple;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_ResourceOwnerPasswordCredentialsGrant;
extern PyObject *const_str_plain_InvalidGrantError;
extern PyObject *const_str_plain_NUITKA_PACKAGE_oauthlib;
extern PyObject *const_str_plain_BackendApplicationClient;
static PyObject *const_str_digest_e397f72e6dc77da2ad0189fdc319acec;
extern PyObject *const_str_plain_BearerToken;
extern PyObject *const_str_plain_MissingRedirectURIError;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_b503e4f965e51a9aceda60474f9c73c4 = UNSTREAM_STRING( &constant_bin[ 1624181 ], 25, 0 );
    const_str_digest_0dbdfbc308726b0564588e91b0c7aa14 = UNSTREAM_STRING( &constant_bin[ 1624206 ], 27, 0 );
    const_tuple_539df862de1637405ed334563b325e40_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 1624233 ], 705 );
    const_str_digest_36f2cbe4d50f034138c2092f8c74dad5 = UNSTREAM_STRING( &constant_bin[ 1624938 ], 133, 0 );
    const_str_digest_32622e9defaacec5deb503a2651791b0 = UNSTREAM_STRING( &constant_bin[ 1625071 ], 14, 0 );
    const_str_plain_oauth2 = UNSTREAM_STRING( &constant_bin[ 1624215 ], 6, 1 );
    const_str_digest_9a78c9c4c57fb5870af9b6daaebf05c8 = UNSTREAM_STRING( &constant_bin[ 1625085 ], 17, 0 );
    const_str_digest_4a3c4244dc35910f4874cd46ae886ee0 = UNSTREAM_STRING( &constant_bin[ 1625102 ], 19, 0 );
    const_str_digest_4d4d9ca1943cb92efc9e059534eea70b = UNSTREAM_STRING( &constant_bin[ 1625121 ], 14, 0 );
    const_str_digest_1ac91638f095e768631a3f4a3e0a5833 = UNSTREAM_STRING( &constant_bin[ 1625135 ], 15, 0 );
    const_tuple_str_plain_BearerToken_str_plain_OAuth2Token_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_BearerToken_str_plain_OAuth2Token_tuple, 0, const_str_plain_BearerToken ); Py_INCREF( const_str_plain_BearerToken );
    PyTuple_SET_ITEM( const_tuple_str_plain_BearerToken_str_plain_OAuth2Token_tuple, 1, const_str_plain_OAuth2Token ); Py_INCREF( const_str_plain_OAuth2Token );
    const_str_digest_fbd30393173429e1721e8a7fb3107d62 = UNSTREAM_STRING( &constant_bin[ 1625150 ], 24, 0 );
    const_str_digest_e397f72e6dc77da2ad0189fdc319acec = UNSTREAM_STRING( &constant_bin[ 1625174 ], 13, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_oauthlib$oauth2( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c903e9fcfa6e50b5e5395abd059022d9;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_0dbdfbc308726b0564588e91b0c7aa14 );
    codeobj_c903e9fcfa6e50b5e5395abd059022d9 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_fbd30393173429e1721e8a7fb3107d62, 1, const_tuple_empty, 0, 0, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_oauthlib$oauth2 =
{
    PyModuleDef_HEAD_INIT,
    "oauthlib.oauth2",   /* m_name */
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

MOD_INIT_DECL( oauthlib$oauth2 )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_oauthlib$oauth2 );
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
    puts("oauthlib.oauth2: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("oauthlib.oauth2: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initoauthlib$oauth2" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_oauthlib$oauth2 = Py_InitModule4(
        "oauthlib.oauth2",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_oauthlib$oauth2 = PyModule_Create( &mdef_oauthlib$oauth2 );
#endif

    moduledict_oauthlib$oauth2 = MODULE_DICT( module_oauthlib$oauth2 );

    CHECK_OBJECT( module_oauthlib$oauth2 );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_dffaae249b91b231b148c94c8a39b4f6, module_oauthlib$oauth2 );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
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
    PyObject *tmp_assign_source_43;
    PyObject *tmp_assign_source_44;
    PyObject *tmp_assign_source_45;
    PyObject *tmp_assign_source_46;
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
    PyObject *tmp_assign_source_50;
    PyObject *tmp_assign_source_51;
    PyObject *tmp_assign_source_52;
    PyObject *tmp_assign_source_53;
    PyObject *tmp_assign_source_54;
    PyObject *tmp_assign_source_55;
    PyObject *tmp_assign_source_56;
    PyObject *tmp_assign_source_57;
    PyObject *tmp_assign_source_58;
    PyObject *tmp_assign_source_59;
    PyObject *tmp_assign_source_60;
    PyObject *tmp_assign_source_61;
    PyObject *tmp_assign_source_62;
    PyObject *tmp_assign_source_63;
    PyObject *tmp_assign_source_64;
    PyObject *tmp_assign_source_65;
    PyObject *tmp_assign_source_66;
    PyObject *tmp_assign_source_67;
    PyObject *tmp_assign_source_68;
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
    PyObject *tmp_fromlist_name_10;
    PyObject *tmp_fromlist_name_11;
    PyObject *tmp_fromlist_name_12;
    PyObject *tmp_fromlist_name_13;
    PyObject *tmp_fromlist_name_14;
    PyObject *tmp_fromlist_name_15;
    PyObject *tmp_fromlist_name_16;
    PyObject *tmp_fromlist_name_17;
    PyObject *tmp_fromlist_name_18;
    PyObject *tmp_fromlist_name_19;
    PyObject *tmp_fromlist_name_20;
    PyObject *tmp_fromlist_name_21;
    PyObject *tmp_fromlist_name_22;
    PyObject *tmp_fromlist_name_23;
    PyObject *tmp_fromlist_name_24;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_globals_name_8;
    PyObject *tmp_globals_name_9;
    PyObject *tmp_globals_name_10;
    PyObject *tmp_globals_name_11;
    PyObject *tmp_globals_name_12;
    PyObject *tmp_globals_name_13;
    PyObject *tmp_globals_name_14;
    PyObject *tmp_globals_name_15;
    PyObject *tmp_globals_name_16;
    PyObject *tmp_globals_name_17;
    PyObject *tmp_globals_name_18;
    PyObject *tmp_globals_name_19;
    PyObject *tmp_globals_name_20;
    PyObject *tmp_globals_name_21;
    PyObject *tmp_globals_name_22;
    PyObject *tmp_globals_name_23;
    PyObject *tmp_globals_name_24;
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
    PyObject *tmp_import_name_from_22;
    PyObject *tmp_import_name_from_23;
    PyObject *tmp_import_name_from_24;
    PyObject *tmp_import_name_from_25;
    PyObject *tmp_import_name_from_26;
    PyObject *tmp_import_name_from_27;
    PyObject *tmp_import_name_from_28;
    PyObject *tmp_import_name_from_29;
    PyObject *tmp_import_name_from_30;
    PyObject *tmp_import_name_from_31;
    PyObject *tmp_import_name_from_32;
    PyObject *tmp_import_name_from_33;
    PyObject *tmp_import_name_from_34;
    PyObject *tmp_import_name_from_35;
    PyObject *tmp_import_name_from_36;
    PyObject *tmp_import_name_from_37;
    PyObject *tmp_import_name_from_38;
    PyObject *tmp_import_name_from_39;
    PyObject *tmp_import_name_from_40;
    PyObject *tmp_import_name_from_41;
    PyObject *tmp_import_name_from_42;
    PyObject *tmp_import_name_from_43;
    PyObject *tmp_import_name_from_44;
    PyObject *tmp_import_name_from_45;
    PyObject *tmp_import_name_from_46;
    PyObject *tmp_import_name_from_47;
    PyObject *tmp_import_name_from_48;
    PyObject *tmp_import_name_from_49;
    PyObject *tmp_import_name_from_50;
    PyObject *tmp_import_name_from_51;
    PyObject *tmp_import_name_from_52;
    PyObject *tmp_import_name_from_53;
    PyObject *tmp_import_name_from_54;
    PyObject *tmp_import_name_from_55;
    PyObject *tmp_import_name_from_56;
    PyObject *tmp_import_name_from_57;
    PyObject *tmp_import_name_from_58;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_level_name_8;
    PyObject *tmp_level_name_9;
    PyObject *tmp_level_name_10;
    PyObject *tmp_level_name_11;
    PyObject *tmp_level_name_12;
    PyObject *tmp_level_name_13;
    PyObject *tmp_level_name_14;
    PyObject *tmp_level_name_15;
    PyObject *tmp_level_name_16;
    PyObject *tmp_level_name_17;
    PyObject *tmp_level_name_18;
    PyObject *tmp_level_name_19;
    PyObject *tmp_level_name_20;
    PyObject *tmp_level_name_21;
    PyObject *tmp_level_name_22;
    PyObject *tmp_level_name_23;
    PyObject *tmp_level_name_24;
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
    PyObject *tmp_locals_name_10;
    PyObject *tmp_locals_name_11;
    PyObject *tmp_locals_name_12;
    PyObject *tmp_locals_name_13;
    PyObject *tmp_locals_name_14;
    PyObject *tmp_locals_name_15;
    PyObject *tmp_locals_name_16;
    PyObject *tmp_locals_name_17;
    PyObject *tmp_locals_name_18;
    PyObject *tmp_locals_name_19;
    PyObject *tmp_locals_name_20;
    PyObject *tmp_locals_name_21;
    PyObject *tmp_locals_name_22;
    PyObject *tmp_locals_name_23;
    PyObject *tmp_locals_name_24;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_name_name_8;
    PyObject *tmp_name_name_9;
    PyObject *tmp_name_name_10;
    PyObject *tmp_name_name_11;
    PyObject *tmp_name_name_12;
    PyObject *tmp_name_name_13;
    PyObject *tmp_name_name_14;
    PyObject *tmp_name_name_15;
    PyObject *tmp_name_name_16;
    PyObject *tmp_name_name_17;
    PyObject *tmp_name_name_18;
    PyObject *tmp_name_name_19;
    PyObject *tmp_name_name_20;
    PyObject *tmp_name_name_21;
    PyObject *tmp_name_name_22;
    PyObject *tmp_name_name_23;
    PyObject *tmp_name_name_24;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    struct Nuitka_FrameObject *frame_c903e9fcfa6e50b5e5395abd059022d9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_36f2cbe4d50f034138c2092f8c74dad5;
    UPDATE_STRING_DICT0( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_c903e9fcfa6e50b5e5395abd059022d9 = MAKE_MODULE_FRAME( codeobj_c903e9fcfa6e50b5e5395abd059022d9, module_oauthlib$oauth2 );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_c903e9fcfa6e50b5e5395abd059022d9 );
    assert( Py_REFCNT( frame_c903e9fcfa6e50b5e5395abd059022d9 ) == 2 );

    // Framed code:
    tmp_assign_source_3 = PyList_New( 3 );
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 1;
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
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 1;
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
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 1;
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
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 1;
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
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 1;
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
    tmp_args_element_name_3 = const_str_plain_oauth2;
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 1;
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
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 1;
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
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 1;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_539dea2cd54b8ce307b91d1abbd4ab87_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 2, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_4 );
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 1;
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
    tmp_args_element_name_4 = const_str_digest_dffaae249b91b231b148c94c8a39b4f6;
    tmp_args_element_name_5 = metapath_based_loader;
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_5 );
    tmp_assign_source_6 = Py_None;
    UPDATE_STRING_DICT0( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_dffaae249b91b231b148c94c8a39b4f6;
    UPDATE_STRING_DICT0( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_7 );
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 9;
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
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_9 );
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
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_10 );
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

    tmp_name_name_1 = const_str_digest_1ac91638f095e768631a3f4a3e0a5833;
    tmp_globals_name_1 = (PyObject *)moduledict_oauthlib$oauth2;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_Client_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 11;
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
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_Client, tmp_assign_source_11 );
    tmp_name_name_2 = const_str_digest_1ac91638f095e768631a3f4a3e0a5833;
    tmp_globals_name_2 = (PyObject *)moduledict_oauthlib$oauth2;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_WebApplicationClient_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 12;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_WebApplicationClient );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_WebApplicationClient, tmp_assign_source_12 );
    tmp_name_name_3 = const_str_digest_1ac91638f095e768631a3f4a3e0a5833;
    tmp_globals_name_3 = (PyObject *)moduledict_oauthlib$oauth2;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_MobileApplicationClient_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 13;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_MobileApplicationClient );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_MobileApplicationClient, tmp_assign_source_13 );
    tmp_name_name_4 = const_str_digest_1ac91638f095e768631a3f4a3e0a5833;
    tmp_globals_name_4 = (PyObject *)moduledict_oauthlib$oauth2;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_LegacyApplicationClient_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 14;
    tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_LegacyApplicationClient );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_LegacyApplicationClient, tmp_assign_source_14 );
    tmp_name_name_5 = const_str_digest_1ac91638f095e768631a3f4a3e0a5833;
    tmp_globals_name_5 = (PyObject *)moduledict_oauthlib$oauth2;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_BackendApplicationClient_tuple;
    tmp_level_name_5 = const_int_pos_1;
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 15;
    tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_BackendApplicationClient );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_BackendApplicationClient, tmp_assign_source_15 );
    tmp_name_name_6 = const_str_digest_1ac91638f095e768631a3f4a3e0a5833;
    tmp_globals_name_6 = (PyObject *)moduledict_oauthlib$oauth2;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_ServiceApplicationClient_tuple;
    tmp_level_name_6 = const_int_pos_1;
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 16;
    tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_ServiceApplicationClient );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_ServiceApplicationClient, tmp_assign_source_16 );
    tmp_name_name_7 = const_str_digest_9a78c9c4c57fb5870af9b6daaebf05c8;
    tmp_globals_name_7 = (PyObject *)moduledict_oauthlib$oauth2;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_AuthorizationEndpoint_tuple;
    tmp_level_name_7 = const_int_pos_1;
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 17;
    tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_AuthorizationEndpoint );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_AuthorizationEndpoint, tmp_assign_source_17 );
    tmp_name_name_8 = const_str_digest_9a78c9c4c57fb5870af9b6daaebf05c8;
    tmp_globals_name_8 = (PyObject *)moduledict_oauthlib$oauth2;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_TokenEndpoint_tuple;
    tmp_level_name_8 = const_int_pos_1;
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 18;
    tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_TokenEndpoint );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_TokenEndpoint, tmp_assign_source_18 );
    tmp_name_name_9 = const_str_digest_9a78c9c4c57fb5870af9b6daaebf05c8;
    tmp_globals_name_9 = (PyObject *)moduledict_oauthlib$oauth2;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_str_plain_ResourceEndpoint_tuple;
    tmp_level_name_9 = const_int_pos_1;
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 19;
    tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_ResourceEndpoint );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_ResourceEndpoint, tmp_assign_source_19 );
    tmp_name_name_10 = const_str_digest_9a78c9c4c57fb5870af9b6daaebf05c8;
    tmp_globals_name_10 = (PyObject *)moduledict_oauthlib$oauth2;
    tmp_locals_name_10 = Py_None;
    tmp_fromlist_name_10 = const_tuple_str_plain_RevocationEndpoint_tuple;
    tmp_level_name_10 = const_int_pos_1;
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 20;
    tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_RevocationEndpoint );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_RevocationEndpoint, tmp_assign_source_20 );
    tmp_name_name_11 = const_str_digest_9a78c9c4c57fb5870af9b6daaebf05c8;
    tmp_globals_name_11 = (PyObject *)moduledict_oauthlib$oauth2;
    tmp_locals_name_11 = Py_None;
    tmp_fromlist_name_11 = const_tuple_str_plain_Server_tuple;
    tmp_level_name_11 = const_int_pos_1;
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 21;
    tmp_import_name_from_13 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_Server );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_Server, tmp_assign_source_21 );
    tmp_name_name_12 = const_str_digest_9a78c9c4c57fb5870af9b6daaebf05c8;
    tmp_globals_name_12 = (PyObject *)moduledict_oauthlib$oauth2;
    tmp_locals_name_12 = Py_None;
    tmp_fromlist_name_12 = const_tuple_str_plain_WebApplicationServer_tuple;
    tmp_level_name_12 = const_int_pos_1;
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 22;
    tmp_import_name_from_14 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_WebApplicationServer );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_WebApplicationServer, tmp_assign_source_22 );
    tmp_name_name_13 = const_str_digest_9a78c9c4c57fb5870af9b6daaebf05c8;
    tmp_globals_name_13 = (PyObject *)moduledict_oauthlib$oauth2;
    tmp_locals_name_13 = Py_None;
    tmp_fromlist_name_13 = const_tuple_str_plain_MobileApplicationServer_tuple;
    tmp_level_name_13 = const_int_pos_1;
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 23;
    tmp_import_name_from_15 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_MobileApplicationServer );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_MobileApplicationServer, tmp_assign_source_23 );
    tmp_name_name_14 = const_str_digest_9a78c9c4c57fb5870af9b6daaebf05c8;
    tmp_globals_name_14 = (PyObject *)moduledict_oauthlib$oauth2;
    tmp_locals_name_14 = Py_None;
    tmp_fromlist_name_14 = const_tuple_str_plain_LegacyApplicationServer_tuple;
    tmp_level_name_14 = const_int_pos_1;
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 24;
    tmp_import_name_from_16 = IMPORT_MODULE5( tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_LegacyApplicationServer );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_LegacyApplicationServer, tmp_assign_source_24 );
    tmp_name_name_15 = const_str_digest_9a78c9c4c57fb5870af9b6daaebf05c8;
    tmp_globals_name_15 = (PyObject *)moduledict_oauthlib$oauth2;
    tmp_locals_name_15 = Py_None;
    tmp_fromlist_name_15 = const_tuple_str_plain_BackendApplicationServer_tuple;
    tmp_level_name_15 = const_int_pos_1;
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 25;
    tmp_import_name_from_17 = IMPORT_MODULE5( tmp_name_name_15, tmp_globals_name_15, tmp_locals_name_15, tmp_fromlist_name_15, tmp_level_name_15 );
    if ( tmp_import_name_from_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_BackendApplicationServer );
    Py_DECREF( tmp_import_name_from_17 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_BackendApplicationServer, tmp_assign_source_25 );
    tmp_name_name_16 = const_str_digest_4d4d9ca1943cb92efc9e059534eea70b;
    tmp_globals_name_16 = (PyObject *)moduledict_oauthlib$oauth2;
    tmp_locals_name_16 = Py_None;
    tmp_fromlist_name_16 = const_tuple_539df862de1637405ed334563b325e40_tuple;
    tmp_level_name_16 = const_int_pos_1;
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 26;
    tmp_assign_source_26 = IMPORT_MODULE5( tmp_name_name_16, tmp_globals_name_16, tmp_locals_name_16, tmp_fromlist_name_16, tmp_level_name_16 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_26;

    // Tried code:
    tmp_import_name_from_18 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_18 );
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_AccessDeniedError );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_AccessDeniedError, tmp_assign_source_27 );
    tmp_import_name_from_19 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_19 );
    tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_AccountSelectionRequired );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_AccountSelectionRequired, tmp_assign_source_28 );
    tmp_import_name_from_20 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_20 );
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_ConsentRequired );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_ConsentRequired, tmp_assign_source_29 );
    tmp_import_name_from_21 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_21 );
    tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_FatalClientError );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_FatalClientError, tmp_assign_source_30 );
    tmp_import_name_from_22 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_22 );
    tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_FatalOpenIDClientError );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_FatalOpenIDClientError, tmp_assign_source_31 );
    tmp_import_name_from_23 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_23 );
    tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_InsecureTransportError );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_InsecureTransportError, tmp_assign_source_32 );
    tmp_import_name_from_24 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_24 );
    tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_InteractionRequired );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_InteractionRequired, tmp_assign_source_33 );
    tmp_import_name_from_25 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_25 );
    tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_25, const_str_plain_InvalidClientError );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_InvalidClientError, tmp_assign_source_34 );
    tmp_import_name_from_26 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_26 );
    tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_26, const_str_plain_InvalidClientIdError );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_InvalidClientIdError, tmp_assign_source_35 );
    tmp_import_name_from_27 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_27 );
    tmp_assign_source_36 = IMPORT_NAME( tmp_import_name_from_27, const_str_plain_InvalidGrantError );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_InvalidGrantError, tmp_assign_source_36 );
    tmp_import_name_from_28 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_28 );
    tmp_assign_source_37 = IMPORT_NAME( tmp_import_name_from_28, const_str_plain_InvalidRedirectURIError );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_InvalidRedirectURIError, tmp_assign_source_37 );
    tmp_import_name_from_29 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_29 );
    tmp_assign_source_38 = IMPORT_NAME( tmp_import_name_from_29, const_str_plain_InvalidRequestError );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_InvalidRequestError, tmp_assign_source_38 );
    tmp_import_name_from_30 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_30 );
    tmp_assign_source_39 = IMPORT_NAME( tmp_import_name_from_30, const_str_plain_InvalidRequestFatalError );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_InvalidRequestFatalError, tmp_assign_source_39 );
    tmp_import_name_from_31 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_31 );
    tmp_assign_source_40 = IMPORT_NAME( tmp_import_name_from_31, const_str_plain_InvalidScopeError );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_InvalidScopeError, tmp_assign_source_40 );
    tmp_import_name_from_32 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_32 );
    tmp_assign_source_41 = IMPORT_NAME( tmp_import_name_from_32, const_str_plain_LoginRequired );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_LoginRequired, tmp_assign_source_41 );
    tmp_import_name_from_33 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_33 );
    tmp_assign_source_42 = IMPORT_NAME( tmp_import_name_from_33, const_str_plain_MismatchingRedirectURIError );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_MismatchingRedirectURIError, tmp_assign_source_42 );
    tmp_import_name_from_34 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_34 );
    tmp_assign_source_43 = IMPORT_NAME( tmp_import_name_from_34, const_str_plain_MismatchingStateError );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_MismatchingStateError, tmp_assign_source_43 );
    tmp_import_name_from_35 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_35 );
    tmp_assign_source_44 = IMPORT_NAME( tmp_import_name_from_35, const_str_plain_MissingClientIdError );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_MissingClientIdError, tmp_assign_source_44 );
    tmp_import_name_from_36 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_36 );
    tmp_assign_source_45 = IMPORT_NAME( tmp_import_name_from_36, const_str_plain_MissingCodeError );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_MissingCodeError, tmp_assign_source_45 );
    tmp_import_name_from_37 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_37 );
    tmp_assign_source_46 = IMPORT_NAME( tmp_import_name_from_37, const_str_plain_MissingRedirectURIError );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_MissingRedirectURIError, tmp_assign_source_46 );
    tmp_import_name_from_38 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_38 );
    tmp_assign_source_47 = IMPORT_NAME( tmp_import_name_from_38, const_str_plain_MissingResponseTypeError );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_MissingResponseTypeError, tmp_assign_source_47 );
    tmp_import_name_from_39 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_39 );
    tmp_assign_source_48 = IMPORT_NAME( tmp_import_name_from_39, const_str_plain_MissingTokenError );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_MissingTokenError, tmp_assign_source_48 );
    tmp_import_name_from_40 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_40 );
    tmp_assign_source_49 = IMPORT_NAME( tmp_import_name_from_40, const_str_plain_MissingTokenTypeError );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_MissingTokenTypeError, tmp_assign_source_49 );
    tmp_import_name_from_41 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_41 );
    tmp_assign_source_50 = IMPORT_NAME( tmp_import_name_from_41, const_str_plain_OAuth2Error );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_OAuth2Error, tmp_assign_source_50 );
    tmp_import_name_from_42 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_42 );
    tmp_assign_source_51 = IMPORT_NAME( tmp_import_name_from_42, const_str_plain_OpenIDClientError );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_OpenIDClientError, tmp_assign_source_51 );
    tmp_import_name_from_43 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_43 );
    tmp_assign_source_52 = IMPORT_NAME( tmp_import_name_from_43, const_str_plain_ServerError );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_ServerError, tmp_assign_source_52 );
    tmp_import_name_from_44 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_44 );
    tmp_assign_source_53 = IMPORT_NAME( tmp_import_name_from_44, const_str_plain_TemporarilyUnavailableError );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_TemporarilyUnavailableError, tmp_assign_source_53 );
    tmp_import_name_from_45 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_45 );
    tmp_assign_source_54 = IMPORT_NAME( tmp_import_name_from_45, const_str_plain_TokenExpiredError );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_TokenExpiredError, tmp_assign_source_54 );
    tmp_import_name_from_46 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_46 );
    tmp_assign_source_55 = IMPORT_NAME( tmp_import_name_from_46, const_str_plain_UnauthorizedClientError );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_UnauthorizedClientError, tmp_assign_source_55 );
    tmp_import_name_from_47 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_47 );
    tmp_assign_source_56 = IMPORT_NAME( tmp_import_name_from_47, const_str_plain_UnsupportedGrantTypeError );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_UnsupportedGrantTypeError, tmp_assign_source_56 );
    tmp_import_name_from_48 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_48 );
    tmp_assign_source_57 = IMPORT_NAME( tmp_import_name_from_48, const_str_plain_UnsupportedResponseTypeError );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_UnsupportedResponseTypeError, tmp_assign_source_57 );
    tmp_import_name_from_49 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_49 );
    tmp_assign_source_58 = IMPORT_NAME( tmp_import_name_from_49, const_str_plain_UnsupportedTokenTypeError );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_UnsupportedTokenTypeError, tmp_assign_source_58 );
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

    tmp_name_name_17 = const_str_digest_4a3c4244dc35910f4874cd46ae886ee0;
    tmp_globals_name_17 = (PyObject *)moduledict_oauthlib$oauth2;
    tmp_locals_name_17 = Py_None;
    tmp_fromlist_name_17 = const_tuple_str_plain_AuthorizationCodeGrant_tuple;
    tmp_level_name_17 = const_int_pos_1;
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 27;
    tmp_import_name_from_50 = IMPORT_MODULE5( tmp_name_name_17, tmp_globals_name_17, tmp_locals_name_17, tmp_fromlist_name_17, tmp_level_name_17 );
    if ( tmp_import_name_from_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_59 = IMPORT_NAME( tmp_import_name_from_50, const_str_plain_AuthorizationCodeGrant );
    Py_DECREF( tmp_import_name_from_50 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_AuthorizationCodeGrant, tmp_assign_source_59 );
    tmp_name_name_18 = const_str_digest_4a3c4244dc35910f4874cd46ae886ee0;
    tmp_globals_name_18 = (PyObject *)moduledict_oauthlib$oauth2;
    tmp_locals_name_18 = Py_None;
    tmp_fromlist_name_18 = const_tuple_str_plain_ImplicitGrant_tuple;
    tmp_level_name_18 = const_int_pos_1;
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 28;
    tmp_import_name_from_51 = IMPORT_MODULE5( tmp_name_name_18, tmp_globals_name_18, tmp_locals_name_18, tmp_fromlist_name_18, tmp_level_name_18 );
    if ( tmp_import_name_from_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_60 = IMPORT_NAME( tmp_import_name_from_51, const_str_plain_ImplicitGrant );
    Py_DECREF( tmp_import_name_from_51 );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_ImplicitGrant, tmp_assign_source_60 );
    tmp_name_name_19 = const_str_digest_4a3c4244dc35910f4874cd46ae886ee0;
    tmp_globals_name_19 = (PyObject *)moduledict_oauthlib$oauth2;
    tmp_locals_name_19 = Py_None;
    tmp_fromlist_name_19 = const_tuple_str_plain_ResourceOwnerPasswordCredentialsGrant_tuple;
    tmp_level_name_19 = const_int_pos_1;
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 29;
    tmp_import_name_from_52 = IMPORT_MODULE5( tmp_name_name_19, tmp_globals_name_19, tmp_locals_name_19, tmp_fromlist_name_19, tmp_level_name_19 );
    if ( tmp_import_name_from_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_61 = IMPORT_NAME( tmp_import_name_from_52, const_str_plain_ResourceOwnerPasswordCredentialsGrant );
    Py_DECREF( tmp_import_name_from_52 );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_ResourceOwnerPasswordCredentialsGrant, tmp_assign_source_61 );
    tmp_name_name_20 = const_str_digest_4a3c4244dc35910f4874cd46ae886ee0;
    tmp_globals_name_20 = (PyObject *)moduledict_oauthlib$oauth2;
    tmp_locals_name_20 = Py_None;
    tmp_fromlist_name_20 = const_tuple_str_plain_ClientCredentialsGrant_tuple;
    tmp_level_name_20 = const_int_pos_1;
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 30;
    tmp_import_name_from_53 = IMPORT_MODULE5( tmp_name_name_20, tmp_globals_name_20, tmp_locals_name_20, tmp_fromlist_name_20, tmp_level_name_20 );
    if ( tmp_import_name_from_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_62 = IMPORT_NAME( tmp_import_name_from_53, const_str_plain_ClientCredentialsGrant );
    Py_DECREF( tmp_import_name_from_53 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_ClientCredentialsGrant, tmp_assign_source_62 );
    tmp_name_name_21 = const_str_digest_4a3c4244dc35910f4874cd46ae886ee0;
    tmp_globals_name_21 = (PyObject *)moduledict_oauthlib$oauth2;
    tmp_locals_name_21 = Py_None;
    tmp_fromlist_name_21 = const_tuple_str_plain_RefreshTokenGrant_tuple;
    tmp_level_name_21 = const_int_pos_1;
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 31;
    tmp_import_name_from_54 = IMPORT_MODULE5( tmp_name_name_21, tmp_globals_name_21, tmp_locals_name_21, tmp_fromlist_name_21, tmp_level_name_21 );
    if ( tmp_import_name_from_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_63 = IMPORT_NAME( tmp_import_name_from_54, const_str_plain_RefreshTokenGrant );
    Py_DECREF( tmp_import_name_from_54 );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_RefreshTokenGrant, tmp_assign_source_63 );
    tmp_name_name_22 = const_str_digest_b503e4f965e51a9aceda60474f9c73c4;
    tmp_globals_name_22 = (PyObject *)moduledict_oauthlib$oauth2;
    tmp_locals_name_22 = Py_None;
    tmp_fromlist_name_22 = const_tuple_str_plain_RequestValidator_tuple;
    tmp_level_name_22 = const_int_pos_1;
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 32;
    tmp_import_name_from_55 = IMPORT_MODULE5( tmp_name_name_22, tmp_globals_name_22, tmp_locals_name_22, tmp_fromlist_name_22, tmp_level_name_22 );
    if ( tmp_import_name_from_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_64 = IMPORT_NAME( tmp_import_name_from_55, const_str_plain_RequestValidator );
    Py_DECREF( tmp_import_name_from_55 );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_RequestValidator, tmp_assign_source_64 );
    tmp_name_name_23 = const_str_digest_32622e9defaacec5deb503a2651791b0;
    tmp_globals_name_23 = (PyObject *)moduledict_oauthlib$oauth2;
    tmp_locals_name_23 = Py_None;
    tmp_fromlist_name_23 = const_tuple_str_plain_BearerToken_str_plain_OAuth2Token_tuple;
    tmp_level_name_23 = const_int_pos_1;
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 33;
    tmp_assign_source_65 = IMPORT_MODULE5( tmp_name_name_23, tmp_globals_name_23, tmp_locals_name_23, tmp_fromlist_name_23, tmp_level_name_23 );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_65;

    // Tried code:
    tmp_import_name_from_56 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_56 );
    tmp_assign_source_66 = IMPORT_NAME( tmp_import_name_from_56, const_str_plain_BearerToken );
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_BearerToken, tmp_assign_source_66 );
    tmp_import_name_from_57 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_57 );
    tmp_assign_source_67 = IMPORT_NAME( tmp_import_name_from_57, const_str_plain_OAuth2Token );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_OAuth2Token, tmp_assign_source_67 );
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

    tmp_name_name_24 = const_str_digest_e397f72e6dc77da2ad0189fdc319acec;
    tmp_globals_name_24 = (PyObject *)moduledict_oauthlib$oauth2;
    tmp_locals_name_24 = Py_None;
    tmp_fromlist_name_24 = const_tuple_str_plain_is_secure_transport_tuple;
    tmp_level_name_24 = const_int_pos_1;
    frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame.f_lineno = 34;
    tmp_import_name_from_58 = IMPORT_MODULE5( tmp_name_name_24, tmp_globals_name_24, tmp_locals_name_24, tmp_fromlist_name_24, tmp_level_name_24 );
    if ( tmp_import_name_from_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_68 = IMPORT_NAME( tmp_import_name_from_58, const_str_plain_is_secure_transport );
    Py_DECREF( tmp_import_name_from_58 );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_oauthlib$oauth2, (Nuitka_StringObject *)const_str_plain_is_secure_transport, tmp_assign_source_68 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c903e9fcfa6e50b5e5395abd059022d9 );
#endif
    popFrameStack();

    assertFrameObject( frame_c903e9fcfa6e50b5e5395abd059022d9 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c903e9fcfa6e50b5e5395abd059022d9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c903e9fcfa6e50b5e5395abd059022d9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c903e9fcfa6e50b5e5395abd059022d9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c903e9fcfa6e50b5e5395abd059022d9, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_oauthlib$oauth2 );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
