/* Generated code for Python source for module 'django.http'
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

/* The _module_django$http is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$http;
PyDictObject *moduledict_django$http;

/* The module constants used, if any. */
extern PyObject *const_str_plain_HttpRequest;
extern PyObject *const_str_plain_FileResponse;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_HttpResponseServerError;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_RawPostDataException;
extern PyObject *const_str_plain_JsonResponse;
static PyObject *const_tuple_59e8e367554d2f9ccbf22a788757827a_tuple;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_UnreadablePostError;
extern PyObject *const_str_plain_Http404;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_1c85e882e62d3c637a14fa327571a281;
extern PyObject *const_str_plain_parse_cookie;
extern PyObject *const_str_plain_path;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_StreamingHttpResponse;
static PyObject *const_tuple_678b48184e15fd91fd447b52b311f184_tuple;
extern PyObject *const_str_plain_HttpResponseBadRequest;
static PyObject *const_str_plain_NUITKA_PACKAGE_django_http;
extern PyObject *const_str_plain_NUITKA_PACKAGE_django;
extern PyObject *const_str_digest_839f471fb70eb4f2ba35b61b63f588d5;
extern PyObject *const_str_plain_HttpResponseNotModified;
extern PyObject *const_str_plain_HttpResponse;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_str_plain_HttpResponseForbidden;
static PyObject *const_str_digest_1530283b7dd640d66a89cea03af73cfd;
extern PyObject *const_str_plain___path__;
static PyObject *const_tuple_str_plain_SimpleCookie_str_plain_parse_cookie_tuple;
extern PyObject *const_tuple_c15243b3ba68498da186d5d65ae367ca_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_digest_b8587b2a960a14064fb678845861c0a5;
static PyObject *const_str_digest_190655c658a439bcf395631b4b9d1361;
extern PyObject *const_str_plain_QueryDict;
extern PyObject *const_str_plain_http;
extern PyObject *const_str_plain_HttpResponseRedirect;
extern PyObject *const_str_plain_HttpResponseGone;
static PyObject *const_tuple_1e5d9ef27e36f9991eb9f206f0cda52d_tuple;
extern PyObject *const_str_digest_a3f3d61fd44d83df344d31d384f87a22;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_HttpResponseNotFound;
extern PyObject *const_str_plain_BadHeaderError;
extern PyObject *const_str_plain_HttpResponsePermanentRedirect;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain_HttpResponseNotAllowed;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_list_872fe4bf6766a13d688006873bbb2b32_list;
extern PyObject *const_str_plain_SimpleCookie;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_59e8e367554d2f9ccbf22a788757827a_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_59e8e367554d2f9ccbf22a788757827a_tuple, 0, const_str_plain_BadHeaderError ); Py_INCREF( const_str_plain_BadHeaderError );
    PyTuple_SET_ITEM( const_tuple_59e8e367554d2f9ccbf22a788757827a_tuple, 1, const_str_plain_FileResponse ); Py_INCREF( const_str_plain_FileResponse );
    PyTuple_SET_ITEM( const_tuple_59e8e367554d2f9ccbf22a788757827a_tuple, 2, const_str_plain_Http404 ); Py_INCREF( const_str_plain_Http404 );
    PyTuple_SET_ITEM( const_tuple_59e8e367554d2f9ccbf22a788757827a_tuple, 3, const_str_plain_HttpResponse ); Py_INCREF( const_str_plain_HttpResponse );
    PyTuple_SET_ITEM( const_tuple_59e8e367554d2f9ccbf22a788757827a_tuple, 4, const_str_plain_HttpResponseBadRequest ); Py_INCREF( const_str_plain_HttpResponseBadRequest );
    PyTuple_SET_ITEM( const_tuple_59e8e367554d2f9ccbf22a788757827a_tuple, 5, const_str_plain_HttpResponseForbidden ); Py_INCREF( const_str_plain_HttpResponseForbidden );
    PyTuple_SET_ITEM( const_tuple_59e8e367554d2f9ccbf22a788757827a_tuple, 6, const_str_plain_HttpResponseGone ); Py_INCREF( const_str_plain_HttpResponseGone );
    PyTuple_SET_ITEM( const_tuple_59e8e367554d2f9ccbf22a788757827a_tuple, 7, const_str_plain_HttpResponseNotAllowed ); Py_INCREF( const_str_plain_HttpResponseNotAllowed );
    PyTuple_SET_ITEM( const_tuple_59e8e367554d2f9ccbf22a788757827a_tuple, 8, const_str_plain_HttpResponseNotFound ); Py_INCREF( const_str_plain_HttpResponseNotFound );
    PyTuple_SET_ITEM( const_tuple_59e8e367554d2f9ccbf22a788757827a_tuple, 9, const_str_plain_HttpResponseNotModified ); Py_INCREF( const_str_plain_HttpResponseNotModified );
    PyTuple_SET_ITEM( const_tuple_59e8e367554d2f9ccbf22a788757827a_tuple, 10, const_str_plain_HttpResponsePermanentRedirect ); Py_INCREF( const_str_plain_HttpResponsePermanentRedirect );
    PyTuple_SET_ITEM( const_tuple_59e8e367554d2f9ccbf22a788757827a_tuple, 11, const_str_plain_HttpResponseRedirect ); Py_INCREF( const_str_plain_HttpResponseRedirect );
    PyTuple_SET_ITEM( const_tuple_59e8e367554d2f9ccbf22a788757827a_tuple, 12, const_str_plain_HttpResponseServerError ); Py_INCREF( const_str_plain_HttpResponseServerError );
    PyTuple_SET_ITEM( const_tuple_59e8e367554d2f9ccbf22a788757827a_tuple, 13, const_str_plain_JsonResponse ); Py_INCREF( const_str_plain_JsonResponse );
    PyTuple_SET_ITEM( const_tuple_59e8e367554d2f9ccbf22a788757827a_tuple, 14, const_str_plain_StreamingHttpResponse ); Py_INCREF( const_str_plain_StreamingHttpResponse );
    const_tuple_678b48184e15fd91fd447b52b311f184_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_678b48184e15fd91fd447b52b311f184_tuple, 0, const_str_plain_HttpRequest ); Py_INCREF( const_str_plain_HttpRequest );
    PyTuple_SET_ITEM( const_tuple_678b48184e15fd91fd447b52b311f184_tuple, 1, const_str_plain_QueryDict ); Py_INCREF( const_str_plain_QueryDict );
    PyTuple_SET_ITEM( const_tuple_678b48184e15fd91fd447b52b311f184_tuple, 2, const_str_plain_RawPostDataException ); Py_INCREF( const_str_plain_RawPostDataException );
    PyTuple_SET_ITEM( const_tuple_678b48184e15fd91fd447b52b311f184_tuple, 3, const_str_plain_UnreadablePostError ); Py_INCREF( const_str_plain_UnreadablePostError );
    const_str_plain_NUITKA_PACKAGE_django_http = UNSTREAM_STRING( &constant_bin[ 1076951 ], 26, 1 );
    const_str_digest_1530283b7dd640d66a89cea03af73cfd = UNSTREAM_STRING( &constant_bin[ 1076977 ], 23, 0 );
    const_tuple_str_plain_SimpleCookie_str_plain_parse_cookie_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SimpleCookie_str_plain_parse_cookie_tuple, 0, const_str_plain_SimpleCookie ); Py_INCREF( const_str_plain_SimpleCookie );
    PyTuple_SET_ITEM( const_tuple_str_plain_SimpleCookie_str_plain_parse_cookie_tuple, 1, const_str_plain_parse_cookie ); Py_INCREF( const_str_plain_parse_cookie );
    const_str_digest_190655c658a439bcf395631b4b9d1361 = UNSTREAM_STRING( &constant_bin[ 1077000 ], 20, 0 );
    const_tuple_1e5d9ef27e36f9991eb9f206f0cda52d_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_1e5d9ef27e36f9991eb9f206f0cda52d_tuple, 0, const_str_plain_NUITKA_PACKAGE_django_http ); Py_INCREF( const_str_plain_NUITKA_PACKAGE_django_http );
    PyTuple_SET_ITEM( const_tuple_1e5d9ef27e36f9991eb9f206f0cda52d_tuple, 1, const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 ); Py_INCREF( const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 );
    const_list_872fe4bf6766a13d688006873bbb2b32_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 1077020 ], 404 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$http( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_7b1fd8dffcad6961cca4b82935a5b890;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_1530283b7dd640d66a89cea03af73cfd );
    codeobj_7b1fd8dffcad6961cca4b82935a5b890 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_190655c658a439bcf395631b4b9d1361, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$http =
{
    PyModuleDef_HEAD_INIT,
    "django.http",   /* m_name */
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

MOD_INIT_DECL( django$http )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$http );
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
    puts("django.http: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.http: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$http" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$http = Py_InitModule4(
        "django.http",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$http = PyModule_Create( &mdef_django$http );
#endif

    moduledict_django$http = MODULE_DICT( module_django$http );

    CHECK_OBJECT( module_django$http );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_a3f3d61fd44d83df344d31d384f87a22, module_django$http );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$http, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$http, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$http, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
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
    PyObject *tmp_list_element_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    struct Nuitka_FrameObject *frame_7b1fd8dffcad6961cca4b82935a5b890;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$http, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$http, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_7b1fd8dffcad6961cca4b82935a5b890 = MAKE_MODULE_FRAME( codeobj_7b1fd8dffcad6961cca4b82935a5b890, module_django$http );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_7b1fd8dffcad6961cca4b82935a5b890 );
    assert( Py_REFCNT( frame_7b1fd8dffcad6961cca4b82935a5b890 ) == 2 );

    // Framed code:
    tmp_assign_source_3 = PyList_New( 3 );
    frame_7b1fd8dffcad6961cca4b82935a5b890->m_frame.f_lineno = 1;
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
    frame_7b1fd8dffcad6961cca4b82935a5b890->m_frame.f_lineno = 1;
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
    frame_7b1fd8dffcad6961cca4b82935a5b890->m_frame.f_lineno = 1;
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
    frame_7b1fd8dffcad6961cca4b82935a5b890->m_frame.f_lineno = 1;
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
    frame_7b1fd8dffcad6961cca4b82935a5b890->m_frame.f_lineno = 1;
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
    tmp_args_element_name_3 = const_str_plain_http;
    frame_7b1fd8dffcad6961cca4b82935a5b890->m_frame.f_lineno = 1;
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
    frame_7b1fd8dffcad6961cca4b82935a5b890->m_frame.f_lineno = 1;
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
    frame_7b1fd8dffcad6961cca4b82935a5b890->m_frame.f_lineno = 1;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_1e5d9ef27e36f9991eb9f206f0cda52d_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 2, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_django$http, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$http, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_4 );
    frame_7b1fd8dffcad6961cca4b82935a5b890->m_frame.f_lineno = 1;
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
    tmp_args_element_name_4 = const_str_digest_a3f3d61fd44d83df344d31d384f87a22;
    tmp_args_element_name_5 = metapath_based_loader;
    frame_7b1fd8dffcad6961cca4b82935a5b890->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_django$http, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_5 );
    tmp_assign_source_6 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$http, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_a3f3d61fd44d83df344d31d384f87a22;
    UPDATE_STRING_DICT0( moduledict_django$http, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_7 );
    tmp_name_name_1 = const_str_digest_1c85e882e62d3c637a14fa327571a281;
    tmp_globals_name_1 = (PyObject *)moduledict_django$http;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_SimpleCookie_str_plain_parse_cookie_tuple;
    tmp_level_name_1 = const_int_0;
    frame_7b1fd8dffcad6961cca4b82935a5b890->m_frame.f_lineno = 1;
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
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_SimpleCookie );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$http, (Nuitka_StringObject *)const_str_plain_SimpleCookie, tmp_assign_source_9 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_parse_cookie );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$http, (Nuitka_StringObject *)const_str_plain_parse_cookie, tmp_assign_source_10 );
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

    tmp_name_name_2 = const_str_digest_839f471fb70eb4f2ba35b61b63f588d5;
    tmp_globals_name_2 = (PyObject *)moduledict_django$http;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_678b48184e15fd91fd447b52b311f184_tuple;
    tmp_level_name_2 = const_int_0;
    frame_7b1fd8dffcad6961cca4b82935a5b890->m_frame.f_lineno = 2;
    tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_11;

    // Tried code:
    tmp_import_name_from_3 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_HttpRequest );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$http, (Nuitka_StringObject *)const_str_plain_HttpRequest, tmp_assign_source_12 );
    tmp_import_name_from_4 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_QueryDict );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$http, (Nuitka_StringObject *)const_str_plain_QueryDict, tmp_assign_source_13 );
    tmp_import_name_from_5 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_RawPostDataException );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$http, (Nuitka_StringObject *)const_str_plain_RawPostDataException, tmp_assign_source_14 );
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_UnreadablePostError );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$http, (Nuitka_StringObject *)const_str_plain_UnreadablePostError, tmp_assign_source_15 );
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

    tmp_name_name_3 = const_str_digest_b8587b2a960a14064fb678845861c0a5;
    tmp_globals_name_3 = (PyObject *)moduledict_django$http;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_59e8e367554d2f9ccbf22a788757827a_tuple;
    tmp_level_name_3 = const_int_0;
    frame_7b1fd8dffcad6961cca4b82935a5b890->m_frame.f_lineno = 5;
    tmp_assign_source_16 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_16;

    // Tried code:
    tmp_import_name_from_7 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_BadHeaderError );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$http, (Nuitka_StringObject *)const_str_plain_BadHeaderError, tmp_assign_source_17 );
    tmp_import_name_from_8 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_FileResponse );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$http, (Nuitka_StringObject *)const_str_plain_FileResponse, tmp_assign_source_18 );
    tmp_import_name_from_9 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_Http404 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$http, (Nuitka_StringObject *)const_str_plain_Http404, tmp_assign_source_19 );
    tmp_import_name_from_10 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_HttpResponse );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$http, (Nuitka_StringObject *)const_str_plain_HttpResponse, tmp_assign_source_20 );
    tmp_import_name_from_11 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_HttpResponseBadRequest );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$http, (Nuitka_StringObject *)const_str_plain_HttpResponseBadRequest, tmp_assign_source_21 );
    tmp_import_name_from_12 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_HttpResponseForbidden );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$http, (Nuitka_StringObject *)const_str_plain_HttpResponseForbidden, tmp_assign_source_22 );
    tmp_import_name_from_13 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_HttpResponseGone );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$http, (Nuitka_StringObject *)const_str_plain_HttpResponseGone, tmp_assign_source_23 );
    tmp_import_name_from_14 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_14 );
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_HttpResponseNotAllowed );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$http, (Nuitka_StringObject *)const_str_plain_HttpResponseNotAllowed, tmp_assign_source_24 );
    tmp_import_name_from_15 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_15 );
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_HttpResponseNotFound );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$http, (Nuitka_StringObject *)const_str_plain_HttpResponseNotFound, tmp_assign_source_25 );
    tmp_import_name_from_16 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_16 );
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_HttpResponseNotModified );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$http, (Nuitka_StringObject *)const_str_plain_HttpResponseNotModified, tmp_assign_source_26 );
    tmp_import_name_from_17 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_17 );
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_HttpResponsePermanentRedirect );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$http, (Nuitka_StringObject *)const_str_plain_HttpResponsePermanentRedirect, tmp_assign_source_27 );
    tmp_import_name_from_18 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_18 );
    tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_HttpResponseRedirect );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$http, (Nuitka_StringObject *)const_str_plain_HttpResponseRedirect, tmp_assign_source_28 );
    tmp_import_name_from_19 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_19 );
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_HttpResponseServerError );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$http, (Nuitka_StringObject *)const_str_plain_HttpResponseServerError, tmp_assign_source_29 );
    tmp_import_name_from_20 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_20 );
    tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_JsonResponse );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$http, (Nuitka_StringObject *)const_str_plain_JsonResponse, tmp_assign_source_30 );
    tmp_import_name_from_21 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_21 );
    tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_StreamingHttpResponse );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$http, (Nuitka_StringObject *)const_str_plain_StreamingHttpResponse, tmp_assign_source_31 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b1fd8dffcad6961cca4b82935a5b890 );
#endif
    popFrameStack();

    assertFrameObject( frame_7b1fd8dffcad6961cca4b82935a5b890 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7b1fd8dffcad6961cca4b82935a5b890 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7b1fd8dffcad6961cca4b82935a5b890, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7b1fd8dffcad6961cca4b82935a5b890->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7b1fd8dffcad6961cca4b82935a5b890, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    Py_XDECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    tmp_assign_source_32 = LIST_COPY( const_list_872fe4bf6766a13d688006873bbb2b32_list );
    UPDATE_STRING_DICT1( moduledict_django$http, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_32 );

    return MOD_RETURN_VALUE( module_django$http );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
