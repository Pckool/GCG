/* Generated code for Python source for module 'django.core.checks'
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

/* The _module_django$core$checks is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$core$checks;
PyDictObject *moduledict_django$core$checks;

/* The module constants used, if any. */
extern PyObject *const_str_digest_ed0d8c4bc90765c0a3591e094cad0c8f;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
static PyObject *const_list_b9f7f4723913b9fd379df862f42e95d0_list;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_str_digest_41372c5996a4d1c4961e11df7f2ec48f;
extern PyObject *const_str_plain_Warning;
static PyObject *const_tuple_01671fb28f222e6d9bc3c65281605b74_tuple;
extern PyObject *const_str_digest_409d0737ac7598efba8c63379d7ee3fd;
extern PyObject *const_str_plain_Debug;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_run_checks;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_Tags;
extern PyObject *const_str_plain_CheckMessage;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_CRITICAL;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_registry;
extern PyObject *const_int_0;
static PyObject *const_str_digest_413417890618d4182c177e591451abfa;
extern PyObject *const_str_plain_tag_exists;
extern PyObject *const_str_digest_d7803f988ae9afc17e4a4fd2b91f50ce;
extern PyObject *const_str_digest_75377a4b501c8cdce139eb931cc2ca74;
extern PyObject *const_str_plain_Error;
extern PyObject *const_str_plain_ERROR;
static PyObject *const_str_digest_47d9c1738469e7d0614d96d622133063;
static PyObject *const_tuple_032dfe695c9238e912ed5c4b91d7ac52_tuple;
extern PyObject *const_str_plain_NUITKA_PACKAGE_django_core_checks;
extern PyObject *const_str_plain_register;
extern PyObject *const_str_digest_fa9785906682a8e0f6b22d6a022035e5;
extern PyObject *const_str_plain_NUITKA_PACKAGE_django;
extern PyObject *const_str_plain_Info;
extern PyObject *const_str_digest_c532b4d6e2e612a12cff90f47e2f93db;
extern PyObject *const_str_plain_django;
extern PyObject *const_str_digest_fa133991df808b3571d5fc7f23523a98;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_str_plain_checks;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_c15243b3ba68498da186d5d65ae367ca_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_DEBUG;
extern PyObject *const_str_plain_Critical;
extern PyObject *const_str_plain_NUITKA_PACKAGE_django_core;
extern PyObject *const_str_digest_e3f33b4ad07684ed9cb0c31a02c995fa;
extern PyObject *const_str_digest_ca065b702ee036e3c45719e327789ab6;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_messages;
extern PyObject *const_str_plain_join;
extern PyObject *const_tuple_51a679e52dc30b2a16a12d2160142036_tuple;
extern PyObject *const_str_plain_INFO;
extern PyObject *const_str_plain_dirname;
static PyObject *const_str_digest_2320b07365314d6cd0cf7389a9d36e4d;
extern PyObject *const_tuple_b868c6b0937f28ff9b15f6cc52ff2098_tuple;
extern PyObject *const_str_digest_b742d48a59f126ed32118ce778718dd8;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_WARNING;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_list_b9f7f4723913b9fd379df862f42e95d0_list = PyList_New( 15 );
    PyList_SET_ITEM( const_list_b9f7f4723913b9fd379df862f42e95d0_list, 0, const_str_plain_CheckMessage ); Py_INCREF( const_str_plain_CheckMessage );
    PyList_SET_ITEM( const_list_b9f7f4723913b9fd379df862f42e95d0_list, 1, const_str_plain_Debug ); Py_INCREF( const_str_plain_Debug );
    PyList_SET_ITEM( const_list_b9f7f4723913b9fd379df862f42e95d0_list, 2, const_str_plain_Info ); Py_INCREF( const_str_plain_Info );
    PyList_SET_ITEM( const_list_b9f7f4723913b9fd379df862f42e95d0_list, 3, const_str_plain_Warning ); Py_INCREF( const_str_plain_Warning );
    PyList_SET_ITEM( const_list_b9f7f4723913b9fd379df862f42e95d0_list, 4, const_str_plain_Error ); Py_INCREF( const_str_plain_Error );
    PyList_SET_ITEM( const_list_b9f7f4723913b9fd379df862f42e95d0_list, 5, const_str_plain_Critical ); Py_INCREF( const_str_plain_Critical );
    PyList_SET_ITEM( const_list_b9f7f4723913b9fd379df862f42e95d0_list, 6, const_str_plain_DEBUG ); Py_INCREF( const_str_plain_DEBUG );
    PyList_SET_ITEM( const_list_b9f7f4723913b9fd379df862f42e95d0_list, 7, const_str_plain_INFO ); Py_INCREF( const_str_plain_INFO );
    PyList_SET_ITEM( const_list_b9f7f4723913b9fd379df862f42e95d0_list, 8, const_str_plain_WARNING ); Py_INCREF( const_str_plain_WARNING );
    PyList_SET_ITEM( const_list_b9f7f4723913b9fd379df862f42e95d0_list, 9, const_str_plain_ERROR ); Py_INCREF( const_str_plain_ERROR );
    PyList_SET_ITEM( const_list_b9f7f4723913b9fd379df862f42e95d0_list, 10, const_str_plain_CRITICAL ); Py_INCREF( const_str_plain_CRITICAL );
    PyList_SET_ITEM( const_list_b9f7f4723913b9fd379df862f42e95d0_list, 11, const_str_plain_register ); Py_INCREF( const_str_plain_register );
    PyList_SET_ITEM( const_list_b9f7f4723913b9fd379df862f42e95d0_list, 12, const_str_plain_run_checks ); Py_INCREF( const_str_plain_run_checks );
    PyList_SET_ITEM( const_list_b9f7f4723913b9fd379df862f42e95d0_list, 13, const_str_plain_tag_exists ); Py_INCREF( const_str_plain_tag_exists );
    PyList_SET_ITEM( const_list_b9f7f4723913b9fd379df862f42e95d0_list, 14, const_str_plain_Tags ); Py_INCREF( const_str_plain_Tags );
    const_tuple_01671fb28f222e6d9bc3c65281605b74_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_01671fb28f222e6d9bc3c65281605b74_tuple, 0, const_str_plain_Tags ); Py_INCREF( const_str_plain_Tags );
    PyTuple_SET_ITEM( const_tuple_01671fb28f222e6d9bc3c65281605b74_tuple, 1, const_str_plain_register ); Py_INCREF( const_str_plain_register );
    PyTuple_SET_ITEM( const_tuple_01671fb28f222e6d9bc3c65281605b74_tuple, 2, const_str_plain_run_checks ); Py_INCREF( const_str_plain_run_checks );
    PyTuple_SET_ITEM( const_tuple_01671fb28f222e6d9bc3c65281605b74_tuple, 3, const_str_plain_tag_exists ); Py_INCREF( const_str_plain_tag_exists );
    const_str_digest_413417890618d4182c177e591451abfa = UNSTREAM_STRING( &constant_bin[ 761757 ], 30, 0 );
    const_str_digest_47d9c1738469e7d0614d96d622133063 = UNSTREAM_STRING( &constant_bin[ 761764 ], 11, 0 );
    const_tuple_032dfe695c9238e912ed5c4b91d7ac52_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_032dfe695c9238e912ed5c4b91d7ac52_tuple, 0, const_str_plain_CRITICAL ); Py_INCREF( const_str_plain_CRITICAL );
    PyTuple_SET_ITEM( const_tuple_032dfe695c9238e912ed5c4b91d7ac52_tuple, 1, const_str_plain_DEBUG ); Py_INCREF( const_str_plain_DEBUG );
    PyTuple_SET_ITEM( const_tuple_032dfe695c9238e912ed5c4b91d7ac52_tuple, 2, const_str_plain_ERROR ); Py_INCREF( const_str_plain_ERROR );
    PyTuple_SET_ITEM( const_tuple_032dfe695c9238e912ed5c4b91d7ac52_tuple, 3, const_str_plain_INFO ); Py_INCREF( const_str_plain_INFO );
    PyTuple_SET_ITEM( const_tuple_032dfe695c9238e912ed5c4b91d7ac52_tuple, 4, const_str_plain_WARNING ); Py_INCREF( const_str_plain_WARNING );
    PyTuple_SET_ITEM( const_tuple_032dfe695c9238e912ed5c4b91d7ac52_tuple, 5, const_str_plain_CheckMessage ); Py_INCREF( const_str_plain_CheckMessage );
    PyTuple_SET_ITEM( const_tuple_032dfe695c9238e912ed5c4b91d7ac52_tuple, 6, const_str_plain_Critical ); Py_INCREF( const_str_plain_Critical );
    PyTuple_SET_ITEM( const_tuple_032dfe695c9238e912ed5c4b91d7ac52_tuple, 7, const_str_plain_Debug ); Py_INCREF( const_str_plain_Debug );
    PyTuple_SET_ITEM( const_tuple_032dfe695c9238e912ed5c4b91d7ac52_tuple, 8, const_str_plain_Error ); Py_INCREF( const_str_plain_Error );
    PyTuple_SET_ITEM( const_tuple_032dfe695c9238e912ed5c4b91d7ac52_tuple, 9, const_str_plain_Info ); Py_INCREF( const_str_plain_Info );
    PyTuple_SET_ITEM( const_tuple_032dfe695c9238e912ed5c4b91d7ac52_tuple, 10, const_str_plain_Warning ); Py_INCREF( const_str_plain_Warning );
    const_str_digest_2320b07365314d6cd0cf7389a9d36e4d = UNSTREAM_STRING( &constant_bin[ 761787 ], 27, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$core$checks( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_1d36c4da4b8db92b290689cf435f7fa2;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_413417890618d4182c177e591451abfa );
    codeobj_1d36c4da4b8db92b290689cf435f7fa2 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_2320b07365314d6cd0cf7389a9d36e4d, 1, const_tuple_empty, 0, 0, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$core$checks =
{
    PyModuleDef_HEAD_INIT,
    "django.core.checks",   /* m_name */
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

MOD_INIT_DECL( django$core$checks )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$core$checks );
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
    puts("django.core.checks: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.core.checks: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$core$checks" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$core$checks = Py_InitModule4(
        "django.core.checks",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$core$checks = PyModule_Create( &mdef_django$core$checks );
#endif

    moduledict_django$core$checks = MODULE_DICT( module_django$core$checks );

    CHECK_OBJECT( module_django$core$checks );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d7803f988ae9afc17e4a4fd2b91f50ce, module_django$core$checks );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
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
    PyObject *tmp_fromlist_name_8;
    PyObject *tmp_fromlist_name_9;
    PyObject *tmp_fromlist_name_10;
    PyObject *tmp_fromlist_name_11;
    PyObject *tmp_fromlist_name_12;
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
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    struct Nuitka_FrameObject *frame_1d36c4da4b8db92b290689cf435f7fa2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_1d36c4da4b8db92b290689cf435f7fa2 = MAKE_MODULE_FRAME( codeobj_1d36c4da4b8db92b290689cf435f7fa2, module_django$core$checks );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_1d36c4da4b8db92b290689cf435f7fa2 );
    assert( Py_REFCNT( frame_1d36c4da4b8db92b290689cf435f7fa2 ) == 2 );

    // Framed code:
    tmp_assign_source_3 = PyList_New( 4 );
    frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame.f_lineno = 1;
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
    frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame.f_lineno = 1;
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
    frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame.f_lineno = 1;
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
    frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame.f_lineno = 1;
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
    frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame.f_lineno = 1;
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
    tmp_args_element_name_3 = const_str_digest_47d9c1738469e7d0614d96d622133063;
    frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame.f_lineno = 1;
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
    frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame.f_lineno = 1;
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
    frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame.f_lineno = 1;
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
    frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame.f_lineno = 1;
    tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_b868c6b0937f28ff9b15f6cc52ff2098_tuple, 0 ) );

    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = const_str_plain_checks;
    frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame.f_lineno = 1;
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
    frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame.f_lineno = 1;
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

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame.f_lineno = 1;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_51a679e52dc30b2a16a12d2160142036_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 3, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_4 );
    frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("importlib._bootstrap");
        if (likely( module != NULL ))
        {
            tmp_called_name_4 = PyObject_GetAttr( module, const_str_plain_ModuleSpec );
        }
        else
        {
            tmp_called_name_4 = NULL;
        }
    }

    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = const_str_digest_d7803f988ae9afc17e4a4fd2b91f50ce;
    tmp_args_element_name_7 = metapath_based_loader;
    frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame.f_lineno = 1;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_5 );
    tmp_assign_source_6 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_d7803f988ae9afc17e4a4fd2b91f50ce;
    UPDATE_STRING_DICT0( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_7 );
    frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame.f_lineno = 2;
    tmp_import_name_from_1 = PyImport_ImportModule("__future__");
    assert( tmp_import_name_from_1 != NULL );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_unicode_literals );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_8 );
    tmp_name_name_1 = const_str_plain_messages;
    tmp_globals_name_1 = (PyObject *)moduledict_django$core$checks;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_032dfe695c9238e912ed5c4b91d7ac52_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame.f_lineno = 4;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_9;

    // Tried code:
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_CRITICAL );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain_CRITICAL, tmp_assign_source_10 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_DEBUG );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain_DEBUG, tmp_assign_source_11 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_ERROR );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain_ERROR, tmp_assign_source_12 );
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_INFO );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain_INFO, tmp_assign_source_13 );
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_WARNING );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain_WARNING, tmp_assign_source_14 );
    tmp_import_name_from_7 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_CheckMessage );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain_CheckMessage, tmp_assign_source_15 );
    tmp_import_name_from_8 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_Critical );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain_Critical, tmp_assign_source_16 );
    tmp_import_name_from_9 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_Debug );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain_Debug, tmp_assign_source_17 );
    tmp_import_name_from_10 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_Error );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain_Error, tmp_assign_source_18 );
    tmp_import_name_from_11 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_Info );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain_Info, tmp_assign_source_19 );
    tmp_import_name_from_12 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_Warning );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain_Warning, tmp_assign_source_20 );
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

    tmp_name_name_2 = const_str_plain_registry;
    tmp_globals_name_2 = (PyObject *)moduledict_django$core$checks;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_01671fb28f222e6d9bc3c65281605b74_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame.f_lineno = 8;
    tmp_assign_source_21 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_21;

    // Tried code:
    tmp_import_name_from_13 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_Tags );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain_Tags, tmp_assign_source_22 );
    tmp_import_name_from_14 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_14 );
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_register );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain_register, tmp_assign_source_23 );
    tmp_import_name_from_15 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_15 );
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_run_checks );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain_run_checks, tmp_assign_source_24 );
    tmp_import_name_from_16 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_16 );
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_tag_exists );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain_tag_exists, tmp_assign_source_25 );
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

    tmp_name_name_3 = const_str_digest_c532b4d6e2e612a12cff90f47e2f93db;
    tmp_globals_name_3 = (PyObject *)moduledict_django$core$checks;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame.f_lineno = 11;
    tmp_assign_source_26 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain_django, tmp_assign_source_26 );
    tmp_name_name_4 = const_str_digest_41372c5996a4d1c4961e11df7f2ec48f;
    tmp_globals_name_4 = (PyObject *)moduledict_django$core$checks;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = Py_None;
    tmp_level_name_4 = const_int_0;
    frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame.f_lineno = 12;
    tmp_assign_source_27 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain_django, tmp_assign_source_27 );
    tmp_name_name_5 = const_str_digest_ca065b702ee036e3c45719e327789ab6;
    tmp_globals_name_5 = (PyObject *)moduledict_django$core$checks;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = Py_None;
    tmp_level_name_5 = const_int_0;
    frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame.f_lineno = 13;
    tmp_assign_source_28 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain_django, tmp_assign_source_28 );
    tmp_name_name_6 = const_str_digest_409d0737ac7598efba8c63379d7ee3fd;
    tmp_globals_name_6 = (PyObject *)moduledict_django$core$checks;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = Py_None;
    tmp_level_name_6 = const_int_0;
    frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame.f_lineno = 14;
    tmp_assign_source_29 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain_django, tmp_assign_source_29 );
    tmp_name_name_7 = const_str_digest_fa9785906682a8e0f6b22d6a022035e5;
    tmp_globals_name_7 = (PyObject *)moduledict_django$core$checks;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = Py_None;
    tmp_level_name_7 = const_int_0;
    frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame.f_lineno = 15;
    tmp_assign_source_30 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain_django, tmp_assign_source_30 );
    tmp_name_name_8 = const_str_digest_b742d48a59f126ed32118ce778718dd8;
    tmp_globals_name_8 = (PyObject *)moduledict_django$core$checks;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = Py_None;
    tmp_level_name_8 = const_int_0;
    frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame.f_lineno = 16;
    tmp_assign_source_31 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain_django, tmp_assign_source_31 );
    tmp_name_name_9 = const_str_digest_75377a4b501c8cdce139eb931cc2ca74;
    tmp_globals_name_9 = (PyObject *)moduledict_django$core$checks;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = Py_None;
    tmp_level_name_9 = const_int_0;
    frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame.f_lineno = 17;
    tmp_assign_source_32 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain_django, tmp_assign_source_32 );
    tmp_name_name_10 = const_str_digest_e3f33b4ad07684ed9cb0c31a02c995fa;
    tmp_globals_name_10 = (PyObject *)moduledict_django$core$checks;
    tmp_locals_name_10 = Py_None;
    tmp_fromlist_name_10 = Py_None;
    tmp_level_name_10 = const_int_0;
    frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame.f_lineno = 18;
    tmp_assign_source_33 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain_django, tmp_assign_source_33 );
    tmp_name_name_11 = const_str_digest_fa133991df808b3571d5fc7f23523a98;
    tmp_globals_name_11 = (PyObject *)moduledict_django$core$checks;
    tmp_locals_name_11 = Py_None;
    tmp_fromlist_name_11 = Py_None;
    tmp_level_name_11 = const_int_0;
    frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame.f_lineno = 19;
    tmp_assign_source_34 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain_django, tmp_assign_source_34 );
    tmp_name_name_12 = const_str_digest_ed0d8c4bc90765c0a3591e094cad0c8f;
    tmp_globals_name_12 = (PyObject *)moduledict_django$core$checks;
    tmp_locals_name_12 = Py_None;
    tmp_fromlist_name_12 = Py_None;
    tmp_level_name_12 = const_int_0;
    frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame.f_lineno = 20;
    tmp_assign_source_35 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain_django, tmp_assign_source_35 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1d36c4da4b8db92b290689cf435f7fa2 );
#endif
    popFrameStack();

    assertFrameObject( frame_1d36c4da4b8db92b290689cf435f7fa2 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1d36c4da4b8db92b290689cf435f7fa2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1d36c4da4b8db92b290689cf435f7fa2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1d36c4da4b8db92b290689cf435f7fa2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1d36c4da4b8db92b290689cf435f7fa2, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_36 = LIST_COPY( const_list_b9f7f4723913b9fd379df862f42e95d0_list );
    UPDATE_STRING_DICT1( moduledict_django$core$checks, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_36 );

    return MOD_RETURN_VALUE( module_django$core$checks );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
