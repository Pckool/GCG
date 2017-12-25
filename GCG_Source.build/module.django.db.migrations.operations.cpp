/* Generated code for Python source for module 'django.db.migrations.operations'
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

/* The _module_django$db$migrations$operations is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$db$migrations$operations;
PyDictObject *moduledict_django$db$migrations$operations;

/* The module constants used, if any. */
extern PyObject *const_str_plain_RunPython;
static PyObject *const_str_digest_265417329bb32bf52e73117bea59e473;
extern PyObject *const_str_plain_NUITKA_PACKAGE_django_db_migrations;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_AddField;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_AlterIndexTogether;
extern PyObject *const_str_plain_AlterField;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_AlterUniqueTogether;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_AddIndex;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_AlterModelTable;
extern PyObject *const_str_plain_DeleteModel;
extern PyObject *const_tuple_9aafdb4681f02593d1d6ac7779e00e9d_tuple;
static PyObject *const_list_532316105bfd9b9468bef7c71c67a7a4_list;
extern PyObject *const_str_plain_operations;
static PyObject *const_tuple_cad3732356ad918fd57652465ccd3c72_tuple;
extern PyObject *const_str_plain_path;
extern PyObject *const_tuple_d111375a586f690a6a5fd2c05f0911d5_tuple;
static PyObject *const_tuple_a671c95bec23b8becc2fa8070f7a5796_tuple;
static PyObject *const_tuple_5054e9ed064dc9a7fd47613aac24af61_tuple;
extern PyObject *const_str_plain_AlterModelOptions;
extern PyObject *const_str_plain_RemoveField;
static PyObject *const_str_plain_special;
extern PyObject *const_str_plain_AlterOrderWithRespectTo;
extern PyObject *const_str_plain_fields;
extern PyObject *const_str_plain_NUITKA_PACKAGE_django;
extern PyObject *const_str_plain_AlterModelManagers;
static PyObject *const_tuple_0d577a4c9ec6335a7541994750eef60c_tuple;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
static PyObject *const_str_digest_bb4b65516be903360146acf2463a64ba;
extern PyObject *const_str_digest_2b7b98e4cd78d872601e23891b8dec71;
extern PyObject *const_str_plain_RenameModel;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_c15243b3ba68498da186d5d65ae367ca_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_SeparateDatabaseAndState;
extern PyObject *const_str_plain_NUITKA_PACKAGE_django_db;
static PyObject *const_str_digest_829e88b86a678c1b9ee716ac53c1c0d3;
extern PyObject *const_str_plain_models;
extern PyObject *const_str_plain_RemoveIndex;
extern PyObject *const_str_plain___loader__;
static PyObject *const_str_digest_654cbe724444365b5c0beac2be37aab2;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_CreateModel;
extern PyObject *const_str_plain_dirname;
static PyObject *const_str_digest_eb7a2fb01bc6ccded783921770ee2531;
extern PyObject *const_str_plain_RunSQL;
extern PyObject *const_str_plain_RenameField;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_265417329bb32bf52e73117bea59e473 = UNSTREAM_STRING( &constant_bin[ 845322 ], 46, 1 );
    const_list_532316105bfd9b9468bef7c71c67a7a4_list = PyList_New( 18 );
    PyList_SET_ITEM( const_list_532316105bfd9b9468bef7c71c67a7a4_list, 0, const_str_plain_CreateModel ); Py_INCREF( const_str_plain_CreateModel );
    PyList_SET_ITEM( const_list_532316105bfd9b9468bef7c71c67a7a4_list, 1, const_str_plain_DeleteModel ); Py_INCREF( const_str_plain_DeleteModel );
    PyList_SET_ITEM( const_list_532316105bfd9b9468bef7c71c67a7a4_list, 2, const_str_plain_AlterModelTable ); Py_INCREF( const_str_plain_AlterModelTable );
    PyList_SET_ITEM( const_list_532316105bfd9b9468bef7c71c67a7a4_list, 3, const_str_plain_AlterUniqueTogether ); Py_INCREF( const_str_plain_AlterUniqueTogether );
    PyList_SET_ITEM( const_list_532316105bfd9b9468bef7c71c67a7a4_list, 4, const_str_plain_RenameModel ); Py_INCREF( const_str_plain_RenameModel );
    PyList_SET_ITEM( const_list_532316105bfd9b9468bef7c71c67a7a4_list, 5, const_str_plain_AlterIndexTogether ); Py_INCREF( const_str_plain_AlterIndexTogether );
    PyList_SET_ITEM( const_list_532316105bfd9b9468bef7c71c67a7a4_list, 6, const_str_plain_AlterModelOptions ); Py_INCREF( const_str_plain_AlterModelOptions );
    PyList_SET_ITEM( const_list_532316105bfd9b9468bef7c71c67a7a4_list, 7, const_str_plain_AddIndex ); Py_INCREF( const_str_plain_AddIndex );
    PyList_SET_ITEM( const_list_532316105bfd9b9468bef7c71c67a7a4_list, 8, const_str_plain_RemoveIndex ); Py_INCREF( const_str_plain_RemoveIndex );
    PyList_SET_ITEM( const_list_532316105bfd9b9468bef7c71c67a7a4_list, 9, const_str_plain_AddField ); Py_INCREF( const_str_plain_AddField );
    PyList_SET_ITEM( const_list_532316105bfd9b9468bef7c71c67a7a4_list, 10, const_str_plain_RemoveField ); Py_INCREF( const_str_plain_RemoveField );
    PyList_SET_ITEM( const_list_532316105bfd9b9468bef7c71c67a7a4_list, 11, const_str_plain_AlterField ); Py_INCREF( const_str_plain_AlterField );
    PyList_SET_ITEM( const_list_532316105bfd9b9468bef7c71c67a7a4_list, 12, const_str_plain_RenameField ); Py_INCREF( const_str_plain_RenameField );
    PyList_SET_ITEM( const_list_532316105bfd9b9468bef7c71c67a7a4_list, 13, const_str_plain_SeparateDatabaseAndState ); Py_INCREF( const_str_plain_SeparateDatabaseAndState );
    PyList_SET_ITEM( const_list_532316105bfd9b9468bef7c71c67a7a4_list, 14, const_str_plain_RunSQL ); Py_INCREF( const_str_plain_RunSQL );
    PyList_SET_ITEM( const_list_532316105bfd9b9468bef7c71c67a7a4_list, 15, const_str_plain_RunPython ); Py_INCREF( const_str_plain_RunPython );
    PyList_SET_ITEM( const_list_532316105bfd9b9468bef7c71c67a7a4_list, 16, const_str_plain_AlterOrderWithRespectTo ); Py_INCREF( const_str_plain_AlterOrderWithRespectTo );
    PyList_SET_ITEM( const_list_532316105bfd9b9468bef7c71c67a7a4_list, 17, const_str_plain_AlterModelManagers ); Py_INCREF( const_str_plain_AlterModelManagers );
    const_tuple_cad3732356ad918fd57652465ccd3c72_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_cad3732356ad918fd57652465ccd3c72_tuple, 0, const_str_plain_AddField ); Py_INCREF( const_str_plain_AddField );
    PyTuple_SET_ITEM( const_tuple_cad3732356ad918fd57652465ccd3c72_tuple, 1, const_str_plain_AlterField ); Py_INCREF( const_str_plain_AlterField );
    PyTuple_SET_ITEM( const_tuple_cad3732356ad918fd57652465ccd3c72_tuple, 2, const_str_plain_RemoveField ); Py_INCREF( const_str_plain_RemoveField );
    PyTuple_SET_ITEM( const_tuple_cad3732356ad918fd57652465ccd3c72_tuple, 3, const_str_plain_RenameField ); Py_INCREF( const_str_plain_RenameField );
    const_tuple_a671c95bec23b8becc2fa8070f7a5796_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_a671c95bec23b8becc2fa8070f7a5796_tuple, 0, const_str_plain_AddIndex ); Py_INCREF( const_str_plain_AddIndex );
    PyTuple_SET_ITEM( const_tuple_a671c95bec23b8becc2fa8070f7a5796_tuple, 1, const_str_plain_AlterIndexTogether ); Py_INCREF( const_str_plain_AlterIndexTogether );
    PyTuple_SET_ITEM( const_tuple_a671c95bec23b8becc2fa8070f7a5796_tuple, 2, const_str_plain_AlterModelManagers ); Py_INCREF( const_str_plain_AlterModelManagers );
    PyTuple_SET_ITEM( const_tuple_a671c95bec23b8becc2fa8070f7a5796_tuple, 3, const_str_plain_AlterModelOptions ); Py_INCREF( const_str_plain_AlterModelOptions );
    PyTuple_SET_ITEM( const_tuple_a671c95bec23b8becc2fa8070f7a5796_tuple, 4, const_str_plain_AlterModelTable ); Py_INCREF( const_str_plain_AlterModelTable );
    PyTuple_SET_ITEM( const_tuple_a671c95bec23b8becc2fa8070f7a5796_tuple, 5, const_str_plain_AlterOrderWithRespectTo ); Py_INCREF( const_str_plain_AlterOrderWithRespectTo );
    PyTuple_SET_ITEM( const_tuple_a671c95bec23b8becc2fa8070f7a5796_tuple, 6, const_str_plain_AlterUniqueTogether ); Py_INCREF( const_str_plain_AlterUniqueTogether );
    PyTuple_SET_ITEM( const_tuple_a671c95bec23b8becc2fa8070f7a5796_tuple, 7, const_str_plain_CreateModel ); Py_INCREF( const_str_plain_CreateModel );
    PyTuple_SET_ITEM( const_tuple_a671c95bec23b8becc2fa8070f7a5796_tuple, 8, const_str_plain_DeleteModel ); Py_INCREF( const_str_plain_DeleteModel );
    PyTuple_SET_ITEM( const_tuple_a671c95bec23b8becc2fa8070f7a5796_tuple, 9, const_str_plain_RemoveIndex ); Py_INCREF( const_str_plain_RemoveIndex );
    PyTuple_SET_ITEM( const_tuple_a671c95bec23b8becc2fa8070f7a5796_tuple, 10, const_str_plain_RenameModel ); Py_INCREF( const_str_plain_RenameModel );
    const_tuple_5054e9ed064dc9a7fd47613aac24af61_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_5054e9ed064dc9a7fd47613aac24af61_tuple, 0, const_str_digest_265417329bb32bf52e73117bea59e473 ); Py_INCREF( const_str_digest_265417329bb32bf52e73117bea59e473 );
    PyTuple_SET_ITEM( const_tuple_5054e9ed064dc9a7fd47613aac24af61_tuple, 1, const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 ); Py_INCREF( const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 );
    const_str_plain_special = UNSTREAM_STRING( &constant_bin[ 804656 ], 7, 1 );
    const_tuple_0d577a4c9ec6335a7541994750eef60c_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_0d577a4c9ec6335a7541994750eef60c_tuple, 0, const_str_plain_RunPython ); Py_INCREF( const_str_plain_RunPython );
    PyTuple_SET_ITEM( const_tuple_0d577a4c9ec6335a7541994750eef60c_tuple, 1, const_str_plain_RunSQL ); Py_INCREF( const_str_plain_RunSQL );
    PyTuple_SET_ITEM( const_tuple_0d577a4c9ec6335a7541994750eef60c_tuple, 2, const_str_plain_SeparateDatabaseAndState ); Py_INCREF( const_str_plain_SeparateDatabaseAndState );
    const_str_digest_bb4b65516be903360146acf2463a64ba = UNSTREAM_STRING( &constant_bin[ 845368 ], 21, 0 );
    const_str_digest_829e88b86a678c1b9ee716ac53c1c0d3 = UNSTREAM_STRING( &constant_bin[ 845389 ], 24, 0 );
    const_str_digest_654cbe724444365b5c0beac2be37aab2 = UNSTREAM_STRING( &constant_bin[ 845413 ], 43, 0 );
    const_str_digest_eb7a2fb01bc6ccded783921770ee2531 = UNSTREAM_STRING( &constant_bin[ 845456 ], 40, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$db$migrations$operations( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_2e928eea152b68575ded340461e796b0;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_654cbe724444365b5c0beac2be37aab2 );
    codeobj_2e928eea152b68575ded340461e796b0 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_eb7a2fb01bc6ccded783921770ee2531, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$db$migrations$operations =
{
    PyModuleDef_HEAD_INIT,
    "django.db.migrations.operations",   /* m_name */
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

MOD_INIT_DECL( django$db$migrations$operations )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$db$migrations$operations );
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
    puts("django.db.migrations.operations: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.db.migrations.operations: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$db$migrations$operations" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$db$migrations$operations = Py_InitModule4(
        "django.db.migrations.operations",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$db$migrations$operations = PyModule_Create( &mdef_django$db$migrations$operations );
#endif

    moduledict_django$db$migrations$operations = MODULE_DICT( module_django$db$migrations$operations );

    CHECK_OBJECT( module_django$db$migrations$operations );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_2b7b98e4cd78d872601e23891b8dec71, module_django$db$migrations$operations );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
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
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    struct Nuitka_FrameObject *frame_2e928eea152b68575ded340461e796b0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_2e928eea152b68575ded340461e796b0 = MAKE_MODULE_FRAME( codeobj_2e928eea152b68575ded340461e796b0, module_django$db$migrations$operations );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_2e928eea152b68575ded340461e796b0 );
    assert( Py_REFCNT( frame_2e928eea152b68575ded340461e796b0 ) == 2 );

    // Framed code:
    tmp_assign_source_3 = PyList_New( 5 );
    frame_2e928eea152b68575ded340461e796b0->m_frame.f_lineno = 1;
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
    frame_2e928eea152b68575ded340461e796b0->m_frame.f_lineno = 1;
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
    frame_2e928eea152b68575ded340461e796b0->m_frame.f_lineno = 1;
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
    frame_2e928eea152b68575ded340461e796b0->m_frame.f_lineno = 1;
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
    frame_2e928eea152b68575ded340461e796b0->m_frame.f_lineno = 1;
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
    tmp_args_element_name_3 = const_str_digest_829e88b86a678c1b9ee716ac53c1c0d3;
    frame_2e928eea152b68575ded340461e796b0->m_frame.f_lineno = 1;
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
    frame_2e928eea152b68575ded340461e796b0->m_frame.f_lineno = 1;
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
    frame_2e928eea152b68575ded340461e796b0->m_frame.f_lineno = 1;
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
    frame_2e928eea152b68575ded340461e796b0->m_frame.f_lineno = 1;
    tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_9aafdb4681f02593d1d6ac7779e00e9d_tuple, 0 ) );

    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = const_str_digest_bb4b65516be903360146acf2463a64ba;
    frame_2e928eea152b68575ded340461e796b0->m_frame.f_lineno = 1;
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
    frame_2e928eea152b68575ded340461e796b0->m_frame.f_lineno = 1;
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
    frame_2e928eea152b68575ded340461e796b0->m_frame.f_lineno = 1;
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
    frame_2e928eea152b68575ded340461e796b0->m_frame.f_lineno = 1;
    tmp_args_element_name_6 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_d111375a586f690a6a5fd2c05f0911d5_tuple, 0 ) );

    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = const_str_plain_operations;
    frame_2e928eea152b68575ded340461e796b0->m_frame.f_lineno = 1;
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
    frame_2e928eea152b68575ded340461e796b0->m_frame.f_lineno = 1;
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
    frame_2e928eea152b68575ded340461e796b0->m_frame.f_lineno = 1;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_5054e9ed064dc9a7fd47613aac24af61_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 4, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_4 );
    frame_2e928eea152b68575ded340461e796b0->m_frame.f_lineno = 1;
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
    tmp_args_element_name_8 = const_str_digest_2b7b98e4cd78d872601e23891b8dec71;
    tmp_args_element_name_9 = metapath_based_loader;
    frame_2e928eea152b68575ded340461e796b0->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_5 );
    tmp_assign_source_6 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_2b7b98e4cd78d872601e23891b8dec71;
    UPDATE_STRING_DICT0( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_7 );
    tmp_name_name_1 = const_str_plain_fields;
    tmp_globals_name_1 = (PyObject *)moduledict_django$db$migrations$operations;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_cad3732356ad918fd57652465ccd3c72_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_2e928eea152b68575ded340461e796b0->m_frame.f_lineno = 1;
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
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_AddField );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain_AddField, tmp_assign_source_9 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_AlterField );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain_AlterField, tmp_assign_source_10 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_RemoveField );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain_RemoveField, tmp_assign_source_11 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_RenameField );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain_RenameField, tmp_assign_source_12 );
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

    tmp_name_name_2 = const_str_plain_models;
    tmp_globals_name_2 = (PyObject *)moduledict_django$db$migrations$operations;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_a671c95bec23b8becc2fa8070f7a5796_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_2e928eea152b68575ded340461e796b0->m_frame.f_lineno = 2;
    tmp_assign_source_13 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_13;

    // Tried code:
    tmp_import_name_from_5 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_AddIndex );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain_AddIndex, tmp_assign_source_14 );
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_AlterIndexTogether );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain_AlterIndexTogether, tmp_assign_source_15 );
    tmp_import_name_from_7 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_AlterModelManagers );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain_AlterModelManagers, tmp_assign_source_16 );
    tmp_import_name_from_8 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_AlterModelOptions );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain_AlterModelOptions, tmp_assign_source_17 );
    tmp_import_name_from_9 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_AlterModelTable );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain_AlterModelTable, tmp_assign_source_18 );
    tmp_import_name_from_10 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_AlterOrderWithRespectTo );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain_AlterOrderWithRespectTo, tmp_assign_source_19 );
    tmp_import_name_from_11 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_AlterUniqueTogether );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain_AlterUniqueTogether, tmp_assign_source_20 );
    tmp_import_name_from_12 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_CreateModel );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain_CreateModel, tmp_assign_source_21 );
    tmp_import_name_from_13 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_DeleteModel );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain_DeleteModel, tmp_assign_source_22 );
    tmp_import_name_from_14 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_14 );
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_RemoveIndex );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain_RemoveIndex, tmp_assign_source_23 );
    tmp_import_name_from_15 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_15 );
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_RenameModel );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain_RenameModel, tmp_assign_source_24 );
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

    tmp_name_name_3 = const_str_plain_special;
    tmp_globals_name_3 = (PyObject *)moduledict_django$db$migrations$operations;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_0d577a4c9ec6335a7541994750eef60c_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_2e928eea152b68575ded340461e796b0->m_frame.f_lineno = 7;
    tmp_assign_source_25 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_25;

    // Tried code:
    tmp_import_name_from_16 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_16 );
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_RunPython );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain_RunPython, tmp_assign_source_26 );
    tmp_import_name_from_17 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_17 );
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_RunSQL );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain_RunSQL, tmp_assign_source_27 );
    tmp_import_name_from_18 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_18 );
    tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_SeparateDatabaseAndState );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain_SeparateDatabaseAndState, tmp_assign_source_28 );
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
    RESTORE_FRAME_EXCEPTION( frame_2e928eea152b68575ded340461e796b0 );
#endif
    popFrameStack();

    assertFrameObject( frame_2e928eea152b68575ded340461e796b0 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2e928eea152b68575ded340461e796b0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2e928eea152b68575ded340461e796b0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2e928eea152b68575ded340461e796b0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2e928eea152b68575ded340461e796b0, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    Py_XDECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    tmp_assign_source_29 = LIST_COPY( const_list_532316105bfd9b9468bef7c71c67a7a4_list );
    UPDATE_STRING_DICT1( moduledict_django$db$migrations$operations, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_29 );

    return MOD_RETURN_VALUE( module_django$db$migrations$operations );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
