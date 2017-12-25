/* Generated code for Python source for module 'django.template'
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

/* The _module_django$template is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$template;
PyDictObject *moduledict_django$template;

/* The module constants used, if any. */
extern PyObject *const_str_plain_Engine;
extern PyObject *const_str_plain_Node;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_StringOrigin;
extern PyObject *const_tuple_str_plain_Library_tuple;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_Variable;
extern PyObject *const_str_plain_library;
extern PyObject *const_str_plain_TemplateDoesNotExist;
extern PyObject *const_str_digest_6980fe85b537b92ddfc78c6a18354abc;
extern PyObject *const_str_plain_template;
extern PyObject *const_str_plain_Context;
static PyObject *const_tuple_91fb4199dd37d70e5bcc99ad8dfab0c6_tuple;
static PyObject *const_str_digest_7934c3342396306eddb693f70c1cd760;
extern PyObject *const_str_plain_ContextPopException;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_NUITKA_PACKAGE_django_template;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_VariableDoesNotExist;
static PyObject *const_str_digest_10b86df583098c0343b8286cb9591ec4;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_Library;
static PyObject *const_tuple_str_plain_EngineHandler_tuple;
static PyObject *const_tuple_31e87816d0add0f5628d740ba727a692_tuple;
extern PyObject *const_str_plain_NUITKA_PACKAGE_django;
static PyObject *const_tuple_str_plain_ContextPopException_tuple;
static PyObject *const_str_digest_9fef67259a02841963b2f50c827dd736;
extern PyObject *const_str_plain_Template;
extern PyObject *const_str_plain_engine;
static PyObject *const_tuple_str_plain_Engine_str_plain_engines_tuple;
extern PyObject *const_tuple_str_plain_TemplateDoesNotExist_str_plain_TemplateSyntaxError_tuple;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_str_plain_context;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_c15243b3ba68498da186d5d65ae367ca_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_base;
extern PyObject *const_str_plain_engines;
static PyObject *const_tuple_str_plain_VariableDoesNotExist_tuple;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_join;
extern PyObject *const_tuple_d1c8daca5132efd9b4cd4181dfa157c8_tuple;
extern PyObject *const_str_plain_TemplateSyntaxError;
extern PyObject *const_str_plain_NodeList;
extern PyObject *const_str_plain_Origin;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain_utils;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_RequestContext;
extern PyObject *const_tuple_str_plain_Engine_tuple;
extern PyObject *const_str_plain_EngineHandler;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_91fb4199dd37d70e5bcc99ad8dfab0c6_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_91fb4199dd37d70e5bcc99ad8dfab0c6_tuple, 0, const_str_plain_Template ); Py_INCREF( const_str_plain_Template );
    PyTuple_SET_ITEM( const_tuple_91fb4199dd37d70e5bcc99ad8dfab0c6_tuple, 1, const_str_plain_Context ); Py_INCREF( const_str_plain_Context );
    PyTuple_SET_ITEM( const_tuple_91fb4199dd37d70e5bcc99ad8dfab0c6_tuple, 2, const_str_plain_RequestContext ); Py_INCREF( const_str_plain_RequestContext );
    const_str_digest_7934c3342396306eddb693f70c1cd760 = UNSTREAM_STRING( &constant_bin[ 1097420 ], 24, 0 );
    const_str_digest_10b86df583098c0343b8286cb9591ec4 = UNSTREAM_STRING( &constant_bin[ 1097444 ], 1044, 0 );
    const_tuple_str_plain_EngineHandler_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_EngineHandler_tuple, 0, const_str_plain_EngineHandler ); Py_INCREF( const_str_plain_EngineHandler );
    const_tuple_31e87816d0add0f5628d740ba727a692_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_31e87816d0add0f5628d740ba727a692_tuple, 0, const_str_plain_Context ); Py_INCREF( const_str_plain_Context );
    PyTuple_SET_ITEM( const_tuple_31e87816d0add0f5628d740ba727a692_tuple, 1, const_str_plain_Node ); Py_INCREF( const_str_plain_Node );
    PyTuple_SET_ITEM( const_tuple_31e87816d0add0f5628d740ba727a692_tuple, 2, const_str_plain_NodeList ); Py_INCREF( const_str_plain_NodeList );
    PyTuple_SET_ITEM( const_tuple_31e87816d0add0f5628d740ba727a692_tuple, 3, const_str_plain_Origin ); Py_INCREF( const_str_plain_Origin );
    PyTuple_SET_ITEM( const_tuple_31e87816d0add0f5628d740ba727a692_tuple, 4, const_str_plain_RequestContext ); Py_INCREF( const_str_plain_RequestContext );
    PyTuple_SET_ITEM( const_tuple_31e87816d0add0f5628d740ba727a692_tuple, 5, const_str_plain_StringOrigin ); Py_INCREF( const_str_plain_StringOrigin );
    PyTuple_SET_ITEM( const_tuple_31e87816d0add0f5628d740ba727a692_tuple, 6, const_str_plain_Template ); Py_INCREF( const_str_plain_Template );
    PyTuple_SET_ITEM( const_tuple_31e87816d0add0f5628d740ba727a692_tuple, 7, const_str_plain_Variable ); Py_INCREF( const_str_plain_Variable );
    const_tuple_str_plain_ContextPopException_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ContextPopException_tuple, 0, const_str_plain_ContextPopException ); Py_INCREF( const_str_plain_ContextPopException );
    const_str_digest_9fef67259a02841963b2f50c827dd736 = UNSTREAM_STRING( &constant_bin[ 1098488 ], 27, 0 );
    const_tuple_str_plain_Engine_str_plain_engines_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Engine_str_plain_engines_tuple, 0, const_str_plain_Engine ); Py_INCREF( const_str_plain_Engine );
    PyTuple_SET_ITEM( const_tuple_str_plain_Engine_str_plain_engines_tuple, 1, const_str_plain_engines ); Py_INCREF( const_str_plain_engines );
    const_tuple_str_plain_VariableDoesNotExist_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_VariableDoesNotExist_tuple, 0, const_str_plain_VariableDoesNotExist ); Py_INCREF( const_str_plain_VariableDoesNotExist );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$template( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b7eeb56c555be520c14d08bae873c046;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_9fef67259a02841963b2f50c827dd736 );
    codeobj_b7eeb56c555be520c14d08bae873c046 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_7934c3342396306eddb693f70c1cd760, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$template =
{
    PyModuleDef_HEAD_INIT,
    "django.template",   /* m_name */
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

MOD_INIT_DECL( django$template )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$template );
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
    puts("django.template: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.template: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$template" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$template = Py_InitModule4(
        "django.template",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$template = PyModule_Create( &mdef_django$template );
#endif

    moduledict_django$template = MODULE_DICT( module_django$template );

    CHECK_OBJECT( module_django$template );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_6980fe85b537b92ddfc78c6a18354abc, module_django$template );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$template, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$template, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$template, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
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
    PyObject *tmp_left_name_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_list_element_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    struct Nuitka_FrameObject *frame_b7eeb56c555be520c14d08bae873c046;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_10b86df583098c0343b8286cb9591ec4;
    UPDATE_STRING_DICT0( moduledict_django$template, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$template, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_b7eeb56c555be520c14d08bae873c046 = MAKE_MODULE_FRAME( codeobj_b7eeb56c555be520c14d08bae873c046, module_django$template );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_b7eeb56c555be520c14d08bae873c046 );
    assert( Py_REFCNT( frame_b7eeb56c555be520c14d08bae873c046 ) == 2 );

    // Framed code:
    tmp_assign_source_3 = PyList_New( 3 );
    frame_b7eeb56c555be520c14d08bae873c046->m_frame.f_lineno = 1;
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
    frame_b7eeb56c555be520c14d08bae873c046->m_frame.f_lineno = 1;
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
    frame_b7eeb56c555be520c14d08bae873c046->m_frame.f_lineno = 1;
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
    frame_b7eeb56c555be520c14d08bae873c046->m_frame.f_lineno = 1;
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
    frame_b7eeb56c555be520c14d08bae873c046->m_frame.f_lineno = 1;
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
    tmp_args_element_name_3 = const_str_plain_template;
    frame_b7eeb56c555be520c14d08bae873c046->m_frame.f_lineno = 1;
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
    frame_b7eeb56c555be520c14d08bae873c046->m_frame.f_lineno = 1;
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
    frame_b7eeb56c555be520c14d08bae873c046->m_frame.f_lineno = 1;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_d1c8daca5132efd9b4cd4181dfa157c8_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 2, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_django$template, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$template, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_4 );
    frame_b7eeb56c555be520c14d08bae873c046->m_frame.f_lineno = 1;
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
    tmp_args_element_name_4 = const_str_digest_6980fe85b537b92ddfc78c6a18354abc;
    tmp_args_element_name_5 = metapath_based_loader;
    frame_b7eeb56c555be520c14d08bae873c046->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_django$template, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_5 );
    tmp_assign_source_6 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$template, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_6980fe85b537b92ddfc78c6a18354abc;
    UPDATE_STRING_DICT0( moduledict_django$template, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_7 );
    tmp_name_name_1 = const_str_plain_engine;
    tmp_globals_name_1 = (PyObject *)moduledict_django$template;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_Engine_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_b7eeb56c555be520c14d08bae873c046->m_frame.f_lineno = 44;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Engine );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$template, (Nuitka_StringObject *)const_str_plain_Engine, tmp_assign_source_8 );
    tmp_name_name_2 = const_str_plain_utils;
    tmp_globals_name_2 = (PyObject *)moduledict_django$template;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_EngineHandler_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_b7eeb56c555be520c14d08bae873c046->m_frame.f_lineno = 45;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_EngineHandler );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$template, (Nuitka_StringObject *)const_str_plain_EngineHandler, tmp_assign_source_9 );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_django$template, (Nuitka_StringObject *)const_str_plain_EngineHandler );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EngineHandler );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EngineHandler" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;

        goto frame_exception_exit_1;
    }

    frame_b7eeb56c555be520c14d08bae873c046->m_frame.f_lineno = 47;
    tmp_assign_source_10 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$template, (Nuitka_StringObject *)const_str_plain_engines, tmp_assign_source_10 );
    tmp_assign_source_11 = const_tuple_str_plain_Engine_str_plain_engines_tuple;
    UPDATE_STRING_DICT0( moduledict_django$template, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_11 );
    tmp_name_name_3 = const_str_plain_base;
    tmp_globals_name_3 = (PyObject *)moduledict_django$template;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_VariableDoesNotExist_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_b7eeb56c555be520c14d08bae873c046->m_frame.f_lineno = 55;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_VariableDoesNotExist );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$template, (Nuitka_StringObject *)const_str_plain_VariableDoesNotExist, tmp_assign_source_12 );
    tmp_name_name_4 = const_str_plain_context;
    tmp_globals_name_4 = (PyObject *)moduledict_django$template;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_ContextPopException_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_b7eeb56c555be520c14d08bae873c046->m_frame.f_lineno = 56;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_ContextPopException );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$template, (Nuitka_StringObject *)const_str_plain_ContextPopException, tmp_assign_source_13 );
    tmp_name_name_5 = const_str_plain_exceptions;
    tmp_globals_name_5 = (PyObject *)moduledict_django$template;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_TemplateDoesNotExist_str_plain_TemplateSyntaxError_tuple;
    tmp_level_name_5 = const_int_pos_1;
    frame_b7eeb56c555be520c14d08bae873c046->m_frame.f_lineno = 57;
    tmp_assign_source_14 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_14;

    // Tried code:
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_TemplateDoesNotExist );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$template, (Nuitka_StringObject *)const_str_plain_TemplateDoesNotExist, tmp_assign_source_15 );
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_TemplateSyntaxError );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$template, (Nuitka_StringObject *)const_str_plain_TemplateSyntaxError, tmp_assign_source_16 );
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

    tmp_name_name_6 = const_str_plain_base;
    tmp_globals_name_6 = (PyObject *)moduledict_django$template;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_31e87816d0add0f5628d740ba727a692_tuple;
    tmp_level_name_6 = const_int_pos_1;
    frame_b7eeb56c555be520c14d08bae873c046->m_frame.f_lineno = 60;
    tmp_assign_source_17 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_17;

    // Tried code:
    tmp_import_name_from_7 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_Context );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$template, (Nuitka_StringObject *)const_str_plain_Context, tmp_assign_source_18 );
    tmp_import_name_from_8 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_Node );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$template, (Nuitka_StringObject *)const_str_plain_Node, tmp_assign_source_19 );
    tmp_import_name_from_9 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_NodeList );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$template, (Nuitka_StringObject *)const_str_plain_NodeList, tmp_assign_source_20 );
    tmp_import_name_from_10 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_Origin );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$template, (Nuitka_StringObject *)const_str_plain_Origin, tmp_assign_source_21 );
    tmp_import_name_from_11 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_RequestContext );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$template, (Nuitka_StringObject *)const_str_plain_RequestContext, tmp_assign_source_22 );
    tmp_import_name_from_12 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_StringOrigin );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$template, (Nuitka_StringObject *)const_str_plain_StringOrigin, tmp_assign_source_23 );
    tmp_import_name_from_13 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_Template );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$template, (Nuitka_StringObject *)const_str_plain_Template, tmp_assign_source_24 );
    tmp_import_name_from_14 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_14 );
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_Variable );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$template, (Nuitka_StringObject *)const_str_plain_Variable, tmp_assign_source_25 );
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

    tmp_name_name_7 = const_str_plain_library;
    tmp_globals_name_7 = (PyObject *)moduledict_django$template;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_Library_tuple;
    tmp_level_name_7 = const_int_pos_1;
    frame_b7eeb56c555be520c14d08bae873c046->m_frame.f_lineno = 66;
    tmp_import_name_from_15 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_Library );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$template, (Nuitka_StringObject *)const_str_plain_Library, tmp_assign_source_26 );
    tmp_left_name_1 = GET_STRING_DICT_VALUE( moduledict_django$template, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_1 == NULL ))
    {
        tmp_left_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;

        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = const_tuple_91fb4199dd37d70e5bcc99ad8dfab0c6_tuple;
    tmp_assign_source_27 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$template, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_27 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7eeb56c555be520c14d08bae873c046 );
#endif
    popFrameStack();

    assertFrameObject( frame_b7eeb56c555be520c14d08bae873c046 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7eeb56c555be520c14d08bae873c046 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b7eeb56c555be520c14d08bae873c046, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b7eeb56c555be520c14d08bae873c046->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b7eeb56c555be520c14d08bae873c046, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_django$template );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
