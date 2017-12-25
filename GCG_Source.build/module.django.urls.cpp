/* Generated code for Python source for module 'django.urls'
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

/* The _module_django$urls is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$urls;
PyDictObject *moduledict_django$urls;

/* The module constants used, if any. */
static PyObject *const_tuple_fca5782d46b314fb1093766cc3ddbc26_tuple;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_resolve;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_set_script_prefix;
static PyObject *const_str_plain_NUITKA_PACKAGE_django_urls;
extern PyObject *const_str_plain_clear_url_caches;
extern PyObject *const_str_plain_ResolverMatch;
static PyObject *const_tuple_0fe3b51a87ec39c57a229bdce966e29c_tuple;
extern PyObject *const_str_plain_is_valid_path;
extern PyObject *const_str_plain_Resolver404;
extern PyObject *const_str_plain_set_urlconf;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_get_urlconf;
static PyObject *const_str_digest_40e4647f123c43af8257929241718724;
extern PyObject *const_str_plain_clear_script_prefix;
extern PyObject *const_str_plain_RegexURLPattern;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_get_ns_resolver;
static PyObject *const_list_fda558efe8f43b22922bebffd8a72cf4_list;
extern PyObject *const_tuple_str_plain_NoReverseMatch_str_plain_Resolver404_tuple;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_get_callable;
extern PyObject *const_str_digest_c48c695ee87e11eee5579c73bc52a23e;
extern PyObject *const_str_plain_NUITKA_PACKAGE_django;
extern PyObject *const_str_plain_LocaleRegexProvider;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_str_plain_urls;
extern PyObject *const_str_plain_get_mod_func;
extern PyObject *const_str_plain___path__;
static PyObject *const_tuple_str_plain_get_callable_str_plain_get_mod_func_tuple;
extern PyObject *const_tuple_c15243b3ba68498da186d5d65ae367ca_tuple;
static PyObject *const_str_digest_57392d89603ae600657219f24b647d76;
extern PyObject *const_str_plain_get;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_get_script_prefix;
extern PyObject *const_str_plain_base;
extern PyObject *const_str_plain_NoReverseMatch;
extern PyObject *const_str_plain_reverse_lazy;
extern PyObject *const_str_plain_resolvers;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_get_resolver;
extern PyObject *const_str_plain_RegexURLResolver;
static PyObject *const_tuple_3472d3eca35822bc795d148864d260a0_tuple;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain_utils;
extern PyObject *const_str_plain_translate_url;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_LocaleRegexURLResolver;
extern PyObject *const_str_plain_reverse;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_fca5782d46b314fb1093766cc3ddbc26_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_fca5782d46b314fb1093766cc3ddbc26_tuple, 0, const_str_plain_LocaleRegexProvider ); Py_INCREF( const_str_plain_LocaleRegexProvider );
    PyTuple_SET_ITEM( const_tuple_fca5782d46b314fb1093766cc3ddbc26_tuple, 1, const_str_plain_LocaleRegexURLResolver ); Py_INCREF( const_str_plain_LocaleRegexURLResolver );
    PyTuple_SET_ITEM( const_tuple_fca5782d46b314fb1093766cc3ddbc26_tuple, 2, const_str_plain_RegexURLPattern ); Py_INCREF( const_str_plain_RegexURLPattern );
    PyTuple_SET_ITEM( const_tuple_fca5782d46b314fb1093766cc3ddbc26_tuple, 3, const_str_plain_RegexURLResolver ); Py_INCREF( const_str_plain_RegexURLResolver );
    PyTuple_SET_ITEM( const_tuple_fca5782d46b314fb1093766cc3ddbc26_tuple, 4, const_str_plain_ResolverMatch ); Py_INCREF( const_str_plain_ResolverMatch );
    PyTuple_SET_ITEM( const_tuple_fca5782d46b314fb1093766cc3ddbc26_tuple, 5, const_str_plain_get_ns_resolver ); Py_INCREF( const_str_plain_get_ns_resolver );
    PyTuple_SET_ITEM( const_tuple_fca5782d46b314fb1093766cc3ddbc26_tuple, 6, const_str_plain_get_resolver ); Py_INCREF( const_str_plain_get_resolver );
    const_str_plain_NUITKA_PACKAGE_django_urls = UNSTREAM_STRING( &constant_bin[ 1135263 ], 26, 1 );
    const_tuple_0fe3b51a87ec39c57a229bdce966e29c_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_0fe3b51a87ec39c57a229bdce966e29c_tuple, 0, const_str_plain_clear_script_prefix ); Py_INCREF( const_str_plain_clear_script_prefix );
    PyTuple_SET_ITEM( const_tuple_0fe3b51a87ec39c57a229bdce966e29c_tuple, 1, const_str_plain_clear_url_caches ); Py_INCREF( const_str_plain_clear_url_caches );
    PyTuple_SET_ITEM( const_tuple_0fe3b51a87ec39c57a229bdce966e29c_tuple, 2, const_str_plain_get_script_prefix ); Py_INCREF( const_str_plain_get_script_prefix );
    PyTuple_SET_ITEM( const_tuple_0fe3b51a87ec39c57a229bdce966e29c_tuple, 3, const_str_plain_get_urlconf ); Py_INCREF( const_str_plain_get_urlconf );
    PyTuple_SET_ITEM( const_tuple_0fe3b51a87ec39c57a229bdce966e29c_tuple, 4, const_str_plain_is_valid_path ); Py_INCREF( const_str_plain_is_valid_path );
    PyTuple_SET_ITEM( const_tuple_0fe3b51a87ec39c57a229bdce966e29c_tuple, 5, const_str_plain_resolve ); Py_INCREF( const_str_plain_resolve );
    PyTuple_SET_ITEM( const_tuple_0fe3b51a87ec39c57a229bdce966e29c_tuple, 6, const_str_plain_reverse ); Py_INCREF( const_str_plain_reverse );
    PyTuple_SET_ITEM( const_tuple_0fe3b51a87ec39c57a229bdce966e29c_tuple, 7, const_str_plain_reverse_lazy ); Py_INCREF( const_str_plain_reverse_lazy );
    PyTuple_SET_ITEM( const_tuple_0fe3b51a87ec39c57a229bdce966e29c_tuple, 8, const_str_plain_set_script_prefix ); Py_INCREF( const_str_plain_set_script_prefix );
    PyTuple_SET_ITEM( const_tuple_0fe3b51a87ec39c57a229bdce966e29c_tuple, 9, const_str_plain_set_urlconf ); Py_INCREF( const_str_plain_set_urlconf );
    PyTuple_SET_ITEM( const_tuple_0fe3b51a87ec39c57a229bdce966e29c_tuple, 10, const_str_plain_translate_url ); Py_INCREF( const_str_plain_translate_url );
    const_str_digest_40e4647f123c43af8257929241718724 = UNSTREAM_STRING( &constant_bin[ 1135289 ], 23, 0 );
    const_list_fda558efe8f43b22922bebffd8a72cf4_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 1135312 ], 353 );
    const_tuple_str_plain_get_callable_str_plain_get_mod_func_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_get_callable_str_plain_get_mod_func_tuple, 0, const_str_plain_get_callable ); Py_INCREF( const_str_plain_get_callable );
    PyTuple_SET_ITEM( const_tuple_str_plain_get_callable_str_plain_get_mod_func_tuple, 1, const_str_plain_get_mod_func ); Py_INCREF( const_str_plain_get_mod_func );
    const_str_digest_57392d89603ae600657219f24b647d76 = UNSTREAM_STRING( &constant_bin[ 1135665 ], 20, 0 );
    const_tuple_3472d3eca35822bc795d148864d260a0_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_3472d3eca35822bc795d148864d260a0_tuple, 0, const_str_plain_NUITKA_PACKAGE_django_urls ); Py_INCREF( const_str_plain_NUITKA_PACKAGE_django_urls );
    PyTuple_SET_ITEM( const_tuple_3472d3eca35822bc795d148864d260a0_tuple, 1, const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 ); Py_INCREF( const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$urls( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_78fb7c4db1208b2a699290efbd50daba;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_40e4647f123c43af8257929241718724 );
    codeobj_78fb7c4db1208b2a699290efbd50daba = MAKE_CODEOBJ( module_filename_obj, const_str_digest_57392d89603ae600657219f24b647d76, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$urls =
{
    PyModuleDef_HEAD_INIT,
    "django.urls",   /* m_name */
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

MOD_INIT_DECL( django$urls )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$urls );
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
    puts("django.urls: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.urls: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$urls" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$urls = Py_InitModule4(
        "django.urls",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$urls = PyModule_Create( &mdef_django$urls );
#endif

    moduledict_django$urls = MODULE_DICT( module_django$urls );

    CHECK_OBJECT( module_django$urls );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_c48c695ee87e11eee5579c73bc52a23e, module_django$urls );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
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
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_list_element_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    struct Nuitka_FrameObject *frame_78fb7c4db1208b2a699290efbd50daba;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_78fb7c4db1208b2a699290efbd50daba = MAKE_MODULE_FRAME( codeobj_78fb7c4db1208b2a699290efbd50daba, module_django$urls );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_78fb7c4db1208b2a699290efbd50daba );
    assert( Py_REFCNT( frame_78fb7c4db1208b2a699290efbd50daba ) == 2 );

    // Framed code:
    tmp_assign_source_3 = PyList_New( 3 );
    frame_78fb7c4db1208b2a699290efbd50daba->m_frame.f_lineno = 1;
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
    frame_78fb7c4db1208b2a699290efbd50daba->m_frame.f_lineno = 1;
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
    frame_78fb7c4db1208b2a699290efbd50daba->m_frame.f_lineno = 1;
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
    frame_78fb7c4db1208b2a699290efbd50daba->m_frame.f_lineno = 1;
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
    frame_78fb7c4db1208b2a699290efbd50daba->m_frame.f_lineno = 1;
    tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_c15243b3ba68498da186d5d65ae367ca_tuple, 0 ) );

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = const_str_plain_urls;
    frame_78fb7c4db1208b2a699290efbd50daba->m_frame.f_lineno = 1;
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
    frame_78fb7c4db1208b2a699290efbd50daba->m_frame.f_lineno = 1;
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
    frame_78fb7c4db1208b2a699290efbd50daba->m_frame.f_lineno = 1;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_3472d3eca35822bc795d148864d260a0_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 2, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_4 );
    frame_78fb7c4db1208b2a699290efbd50daba->m_frame.f_lineno = 1;
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
    tmp_args_element_name_4 = const_str_digest_c48c695ee87e11eee5579c73bc52a23e;
    tmp_args_element_name_5 = metapath_based_loader;
    frame_78fb7c4db1208b2a699290efbd50daba->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_5 );
    tmp_assign_source_6 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_c48c695ee87e11eee5579c73bc52a23e;
    UPDATE_STRING_DICT0( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_7 );
    tmp_name_name_1 = const_str_plain_base;
    tmp_globals_name_1 = (PyObject *)moduledict_django$urls;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_0fe3b51a87ec39c57a229bdce966e29c_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_78fb7c4db1208b2a699290efbd50daba->m_frame.f_lineno = 1;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_8;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_clear_script_prefix );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain_clear_script_prefix, tmp_assign_source_9 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_clear_url_caches );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain_clear_url_caches, tmp_assign_source_10 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_get_script_prefix );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain_get_script_prefix, tmp_assign_source_11 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_get_urlconf );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain_get_urlconf, tmp_assign_source_12 );
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_is_valid_path );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain_is_valid_path, tmp_assign_source_13 );
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_resolve );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain_resolve, tmp_assign_source_14 );
    tmp_import_name_from_7 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_reverse );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain_reverse, tmp_assign_source_15 );
    tmp_import_name_from_8 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_reverse_lazy );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain_reverse_lazy, tmp_assign_source_16 );
    tmp_import_name_from_9 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_set_script_prefix );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain_set_script_prefix, tmp_assign_source_17 );
    tmp_import_name_from_10 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_set_urlconf );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain_set_urlconf, tmp_assign_source_18 );
    tmp_import_name_from_11 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_translate_url );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain_translate_url, tmp_assign_source_19 );
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

    tmp_name_name_2 = const_str_plain_exceptions;
    tmp_globals_name_2 = (PyObject *)moduledict_django$urls;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_NoReverseMatch_str_plain_Resolver404_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_78fb7c4db1208b2a699290efbd50daba->m_frame.f_lineno = 6;
    tmp_assign_source_20 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_20;

    // Tried code:
    tmp_import_name_from_12 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_NoReverseMatch );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain_NoReverseMatch, tmp_assign_source_21 );
    tmp_import_name_from_13 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_Resolver404 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain_Resolver404, tmp_assign_source_22 );
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

    tmp_name_name_3 = const_str_plain_resolvers;
    tmp_globals_name_3 = (PyObject *)moduledict_django$urls;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_fca5782d46b314fb1093766cc3ddbc26_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_78fb7c4db1208b2a699290efbd50daba->m_frame.f_lineno = 7;
    tmp_assign_source_23 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_23;

    // Tried code:
    tmp_import_name_from_14 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_14 );
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_LocaleRegexProvider );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain_LocaleRegexProvider, tmp_assign_source_24 );
    tmp_import_name_from_15 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_15 );
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_LocaleRegexURLResolver );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain_LocaleRegexURLResolver, tmp_assign_source_25 );
    tmp_import_name_from_16 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_16 );
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_RegexURLPattern );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain_RegexURLPattern, tmp_assign_source_26 );
    tmp_import_name_from_17 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_17 );
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_RegexURLResolver );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain_RegexURLResolver, tmp_assign_source_27 );
    tmp_import_name_from_18 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_18 );
    tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_ResolverMatch );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain_ResolverMatch, tmp_assign_source_28 );
    tmp_import_name_from_19 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_19 );
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_get_ns_resolver );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain_get_ns_resolver, tmp_assign_source_29 );
    tmp_import_name_from_20 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_20 );
    tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_get_resolver );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain_get_resolver, tmp_assign_source_30 );
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

    tmp_name_name_4 = const_str_plain_utils;
    tmp_globals_name_4 = (PyObject *)moduledict_django$urls;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_get_callable_str_plain_get_mod_func_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_78fb7c4db1208b2a699290efbd50daba->m_frame.f_lineno = 11;
    tmp_assign_source_31 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_4__module == NULL );
    tmp_import_from_4__module = tmp_assign_source_31;

    // Tried code:
    tmp_import_name_from_21 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_21 );
    tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_get_callable );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain_get_callable, tmp_assign_source_32 );
    tmp_import_name_from_22 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_22 );
    tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_get_mod_func );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain_get_mod_func, tmp_assign_source_33 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_78fb7c4db1208b2a699290efbd50daba );
#endif
    popFrameStack();

    assertFrameObject( frame_78fb7c4db1208b2a699290efbd50daba );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_78fb7c4db1208b2a699290efbd50daba );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_78fb7c4db1208b2a699290efbd50daba, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_78fb7c4db1208b2a699290efbd50daba->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_78fb7c4db1208b2a699290efbd50daba, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    Py_XDECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    tmp_assign_source_34 = LIST_COPY( const_list_fda558efe8f43b22922bebffd8a72cf4_list );
    UPDATE_STRING_DICT1( moduledict_django$urls, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_34 );

    return MOD_RETURN_VALUE( module_django$urls );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
