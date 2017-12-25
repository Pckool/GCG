/* Generated code for Python source for module 'django.db.models.functions'
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

/* The _module_django$db$models$functions is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$db$models$functions;
PyDictObject *moduledict_django$db$models$functions;

/* The module constants used, if any. */
extern PyObject *const_str_plain_ExtractMinute;
extern PyObject *const_str_plain_Trunc;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_TruncDate;
extern PyObject *const_tuple_e264d9df221704bac1b8813696d55517_tuple;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_ConcatPair;
static PyObject *const_str_digest_fe19ab428a9952bfcba7a98da752b153;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_ExtractYear;
extern PyObject *const_str_plain_TruncMinute;
extern PyObject *const_str_plain_Substr;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_Upper;
extern PyObject *const_str_plain_ExtractSecond;
extern PyObject *const_tuple_9aafdb4681f02593d1d6ac7779e00e9d_tuple;
extern PyObject *const_str_plain_Greatest;
extern PyObject *const_str_plain_Coalesce;
extern PyObject *const_str_plain_Lower;
extern PyObject *const_str_plain_path;
static PyObject *const_tuple_ae54af5000b7d151d08db7b05d852532_tuple;
extern PyObject *const_str_plain_Now;
extern PyObject *const_str_plain_Extract;
extern PyObject *const_str_plain_ExtractDay;
static PyObject *const_str_digest_80646b51abf2eb839e622666027e3d26;
extern PyObject *const_str_plain_TruncYear;
extern PyObject *const_str_plain_Cast;
static PyObject *const_str_digest_d4825e9eae920f54e180fef58beae80c;
static PyObject *const_tuple_f37e9448a2e04decb7f95c5d37fa2ec4_tuple;
extern PyObject *const_str_plain_TruncDay;
extern PyObject *const_str_plain_NUITKA_PACKAGE_django;
extern PyObject *const_str_plain_TruncHour;
extern PyObject *const_str_plain_Concat;
static PyObject *const_tuple_a57d7a35df18217b92792bce665af9a6_tuple;
extern PyObject *const_str_plain_TruncSecond;
extern PyObject *const_str_plain_TruncMonth;
static PyObject *const_list_6be8e1a18107e0f2e8d82c61e79fe2e7_list;
extern PyObject *const_str_plain_NUITKA_PACKAGE_django_db_models;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
static PyObject *const_str_digest_41a75782b67d10db27aeaed25e51e404;
extern PyObject *const_str_plain_ExtractWeek;
extern PyObject *const_str_plain_ExtractHour;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_c15243b3ba68498da186d5d65ae367ca_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_base;
extern PyObject *const_str_plain_NUITKA_PACKAGE_django_db;
extern PyObject *const_str_plain_ExtractWeekDay;
extern PyObject *const_str_plain_datetime;
extern PyObject *const_str_plain_TruncTime;
static PyObject *const_str_digest_8f6c0325827ce7275904d2bbc39c7bde;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_digest_4e7e693e251a89f57ec4f0dd4f537b0c;
static PyObject *const_str_plain_functions;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain_Length;
extern PyObject *const_str_plain_ExtractMonth;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_Least;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_fe19ab428a9952bfcba7a98da752b153 = UNSTREAM_STRING( &constant_bin[ 950214 ], 38, 0 );
    const_tuple_ae54af5000b7d151d08db7b05d852532_tuple = PyTuple_New( 18 );
    PyTuple_SET_ITEM( const_tuple_ae54af5000b7d151d08db7b05d852532_tuple, 0, const_str_plain_Extract ); Py_INCREF( const_str_plain_Extract );
    PyTuple_SET_ITEM( const_tuple_ae54af5000b7d151d08db7b05d852532_tuple, 1, const_str_plain_ExtractDay ); Py_INCREF( const_str_plain_ExtractDay );
    PyTuple_SET_ITEM( const_tuple_ae54af5000b7d151d08db7b05d852532_tuple, 2, const_str_plain_ExtractHour ); Py_INCREF( const_str_plain_ExtractHour );
    PyTuple_SET_ITEM( const_tuple_ae54af5000b7d151d08db7b05d852532_tuple, 3, const_str_plain_ExtractMinute ); Py_INCREF( const_str_plain_ExtractMinute );
    PyTuple_SET_ITEM( const_tuple_ae54af5000b7d151d08db7b05d852532_tuple, 4, const_str_plain_ExtractMonth ); Py_INCREF( const_str_plain_ExtractMonth );
    PyTuple_SET_ITEM( const_tuple_ae54af5000b7d151d08db7b05d852532_tuple, 5, const_str_plain_ExtractSecond ); Py_INCREF( const_str_plain_ExtractSecond );
    PyTuple_SET_ITEM( const_tuple_ae54af5000b7d151d08db7b05d852532_tuple, 6, const_str_plain_ExtractWeek ); Py_INCREF( const_str_plain_ExtractWeek );
    PyTuple_SET_ITEM( const_tuple_ae54af5000b7d151d08db7b05d852532_tuple, 7, const_str_plain_ExtractWeekDay ); Py_INCREF( const_str_plain_ExtractWeekDay );
    PyTuple_SET_ITEM( const_tuple_ae54af5000b7d151d08db7b05d852532_tuple, 8, const_str_plain_ExtractYear ); Py_INCREF( const_str_plain_ExtractYear );
    PyTuple_SET_ITEM( const_tuple_ae54af5000b7d151d08db7b05d852532_tuple, 9, const_str_plain_Trunc ); Py_INCREF( const_str_plain_Trunc );
    PyTuple_SET_ITEM( const_tuple_ae54af5000b7d151d08db7b05d852532_tuple, 10, const_str_plain_TruncDate ); Py_INCREF( const_str_plain_TruncDate );
    PyTuple_SET_ITEM( const_tuple_ae54af5000b7d151d08db7b05d852532_tuple, 11, const_str_plain_TruncDay ); Py_INCREF( const_str_plain_TruncDay );
    PyTuple_SET_ITEM( const_tuple_ae54af5000b7d151d08db7b05d852532_tuple, 12, const_str_plain_TruncHour ); Py_INCREF( const_str_plain_TruncHour );
    PyTuple_SET_ITEM( const_tuple_ae54af5000b7d151d08db7b05d852532_tuple, 13, const_str_plain_TruncMinute ); Py_INCREF( const_str_plain_TruncMinute );
    PyTuple_SET_ITEM( const_tuple_ae54af5000b7d151d08db7b05d852532_tuple, 14, const_str_plain_TruncMonth ); Py_INCREF( const_str_plain_TruncMonth );
    PyTuple_SET_ITEM( const_tuple_ae54af5000b7d151d08db7b05d852532_tuple, 15, const_str_plain_TruncSecond ); Py_INCREF( const_str_plain_TruncSecond );
    PyTuple_SET_ITEM( const_tuple_ae54af5000b7d151d08db7b05d852532_tuple, 16, const_str_plain_TruncTime ); Py_INCREF( const_str_plain_TruncTime );
    PyTuple_SET_ITEM( const_tuple_ae54af5000b7d151d08db7b05d852532_tuple, 17, const_str_plain_TruncYear ); Py_INCREF( const_str_plain_TruncYear );
    const_str_digest_80646b51abf2eb839e622666027e3d26 = UNSTREAM_STRING( &constant_bin[ 950252 ], 35, 0 );
    const_str_digest_d4825e9eae920f54e180fef58beae80c = UNSTREAM_STRING( &constant_bin[ 950224 ], 16, 0 );
    const_tuple_f37e9448a2e04decb7f95c5d37fa2ec4_tuple = PyTuple_New( 2 );
    const_str_digest_41a75782b67d10db27aeaed25e51e404 = UNSTREAM_STRING( &constant_bin[ 950287 ], 41, 1 );
    PyTuple_SET_ITEM( const_tuple_f37e9448a2e04decb7f95c5d37fa2ec4_tuple, 0, const_str_digest_41a75782b67d10db27aeaed25e51e404 ); Py_INCREF( const_str_digest_41a75782b67d10db27aeaed25e51e404 );
    PyTuple_SET_ITEM( const_tuple_f37e9448a2e04decb7f95c5d37fa2ec4_tuple, 1, const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 ); Py_INCREF( const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 );
    const_tuple_a57d7a35df18217b92792bce665af9a6_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_a57d7a35df18217b92792bce665af9a6_tuple, 0, const_str_plain_Cast ); Py_INCREF( const_str_plain_Cast );
    PyTuple_SET_ITEM( const_tuple_a57d7a35df18217b92792bce665af9a6_tuple, 1, const_str_plain_Coalesce ); Py_INCREF( const_str_plain_Coalesce );
    PyTuple_SET_ITEM( const_tuple_a57d7a35df18217b92792bce665af9a6_tuple, 2, const_str_plain_Concat ); Py_INCREF( const_str_plain_Concat );
    PyTuple_SET_ITEM( const_tuple_a57d7a35df18217b92792bce665af9a6_tuple, 3, const_str_plain_ConcatPair ); Py_INCREF( const_str_plain_ConcatPair );
    PyTuple_SET_ITEM( const_tuple_a57d7a35df18217b92792bce665af9a6_tuple, 4, const_str_plain_Greatest ); Py_INCREF( const_str_plain_Greatest );
    PyTuple_SET_ITEM( const_tuple_a57d7a35df18217b92792bce665af9a6_tuple, 5, const_str_plain_Least ); Py_INCREF( const_str_plain_Least );
    PyTuple_SET_ITEM( const_tuple_a57d7a35df18217b92792bce665af9a6_tuple, 6, const_str_plain_Length ); Py_INCREF( const_str_plain_Length );
    PyTuple_SET_ITEM( const_tuple_a57d7a35df18217b92792bce665af9a6_tuple, 7, const_str_plain_Lower ); Py_INCREF( const_str_plain_Lower );
    PyTuple_SET_ITEM( const_tuple_a57d7a35df18217b92792bce665af9a6_tuple, 8, const_str_plain_Now ); Py_INCREF( const_str_plain_Now );
    PyTuple_SET_ITEM( const_tuple_a57d7a35df18217b92792bce665af9a6_tuple, 9, const_str_plain_Substr ); Py_INCREF( const_str_plain_Substr );
    PyTuple_SET_ITEM( const_tuple_a57d7a35df18217b92792bce665af9a6_tuple, 10, const_str_plain_Upper ); Py_INCREF( const_str_plain_Upper );
    const_list_6be8e1a18107e0f2e8d82c61e79fe2e7_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 950328 ], 312 );
    const_str_digest_8f6c0325827ce7275904d2bbc39c7bde = UNSTREAM_STRING( &constant_bin[ 950221 ], 19, 0 );
    const_str_plain_functions = UNSTREAM_STRING( &constant_bin[ 21991 ], 9, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$db$models$functions( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_61b49fd0c6a37a70ca165f42c98db6a8;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_fe19ab428a9952bfcba7a98da752b153 );
    codeobj_61b49fd0c6a37a70ca165f42c98db6a8 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_80646b51abf2eb839e622666027e3d26, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$db$models$functions =
{
    PyModuleDef_HEAD_INIT,
    "django.db.models.functions",   /* m_name */
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

MOD_INIT_DECL( django$db$models$functions )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$db$models$functions );
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
    puts("django.db.models.functions: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.db.models.functions: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$db$models$functions" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$db$models$functions = Py_InitModule4(
        "django.db.models.functions",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$db$models$functions = PyModule_Create( &mdef_django$db$models$functions );
#endif

    moduledict_django$db$models$functions = MODULE_DICT( module_django$db$models$functions );

    CHECK_OBJECT( module_django$db$models$functions );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_4e7e693e251a89f57ec4f0dd4f537b0c, module_django$db$models$functions );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
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
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    struct Nuitka_FrameObject *frame_61b49fd0c6a37a70ca165f42c98db6a8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_61b49fd0c6a37a70ca165f42c98db6a8 = MAKE_MODULE_FRAME( codeobj_61b49fd0c6a37a70ca165f42c98db6a8, module_django$db$models$functions );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_61b49fd0c6a37a70ca165f42c98db6a8 );
    assert( Py_REFCNT( frame_61b49fd0c6a37a70ca165f42c98db6a8 ) == 2 );

    // Framed code:
    tmp_assign_source_3 = PyList_New( 5 );
    frame_61b49fd0c6a37a70ca165f42c98db6a8->m_frame.f_lineno = 1;
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
    frame_61b49fd0c6a37a70ca165f42c98db6a8->m_frame.f_lineno = 1;
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
    frame_61b49fd0c6a37a70ca165f42c98db6a8->m_frame.f_lineno = 1;
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
    frame_61b49fd0c6a37a70ca165f42c98db6a8->m_frame.f_lineno = 1;
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
    frame_61b49fd0c6a37a70ca165f42c98db6a8->m_frame.f_lineno = 1;
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
    tmp_args_element_name_3 = const_str_digest_8f6c0325827ce7275904d2bbc39c7bde;
    frame_61b49fd0c6a37a70ca165f42c98db6a8->m_frame.f_lineno = 1;
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
    frame_61b49fd0c6a37a70ca165f42c98db6a8->m_frame.f_lineno = 1;
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
    frame_61b49fd0c6a37a70ca165f42c98db6a8->m_frame.f_lineno = 1;
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
    frame_61b49fd0c6a37a70ca165f42c98db6a8->m_frame.f_lineno = 1;
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
    tmp_args_element_name_5 = const_str_digest_d4825e9eae920f54e180fef58beae80c;
    frame_61b49fd0c6a37a70ca165f42c98db6a8->m_frame.f_lineno = 1;
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
    frame_61b49fd0c6a37a70ca165f42c98db6a8->m_frame.f_lineno = 1;
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
    frame_61b49fd0c6a37a70ca165f42c98db6a8->m_frame.f_lineno = 1;
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
    frame_61b49fd0c6a37a70ca165f42c98db6a8->m_frame.f_lineno = 1;
    tmp_args_element_name_6 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_e264d9df221704bac1b8813696d55517_tuple, 0 ) );

    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = const_str_plain_functions;
    frame_61b49fd0c6a37a70ca165f42c98db6a8->m_frame.f_lineno = 1;
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
    frame_61b49fd0c6a37a70ca165f42c98db6a8->m_frame.f_lineno = 1;
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
    frame_61b49fd0c6a37a70ca165f42c98db6a8->m_frame.f_lineno = 1;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_f37e9448a2e04decb7f95c5d37fa2ec4_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 4, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_4 );
    frame_61b49fd0c6a37a70ca165f42c98db6a8->m_frame.f_lineno = 1;
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
    tmp_args_element_name_8 = const_str_digest_4e7e693e251a89f57ec4f0dd4f537b0c;
    tmp_args_element_name_9 = metapath_based_loader;
    frame_61b49fd0c6a37a70ca165f42c98db6a8->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_5 );
    tmp_assign_source_6 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_4e7e693e251a89f57ec4f0dd4f537b0c;
    UPDATE_STRING_DICT0( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_7 );
    tmp_name_name_1 = const_str_plain_base;
    tmp_globals_name_1 = (PyObject *)moduledict_django$db$models$functions;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_a57d7a35df18217b92792bce665af9a6_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_61b49fd0c6a37a70ca165f42c98db6a8->m_frame.f_lineno = 1;
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
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Cast );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_Cast, tmp_assign_source_9 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_Coalesce );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_Coalesce, tmp_assign_source_10 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_Concat );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_Concat, tmp_assign_source_11 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_ConcatPair );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_ConcatPair, tmp_assign_source_12 );
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_Greatest );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_Greatest, tmp_assign_source_13 );
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_Least );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_Least, tmp_assign_source_14 );
    tmp_import_name_from_7 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_Length );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_Length, tmp_assign_source_15 );
    tmp_import_name_from_8 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_Lower );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_Lower, tmp_assign_source_16 );
    tmp_import_name_from_9 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_Now );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_Now, tmp_assign_source_17 );
    tmp_import_name_from_10 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_Substr );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_Substr, tmp_assign_source_18 );
    tmp_import_name_from_11 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_Upper );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_Upper, tmp_assign_source_19 );
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

    tmp_name_name_2 = const_str_plain_datetime;
    tmp_globals_name_2 = (PyObject *)moduledict_django$db$models$functions;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_ae54af5000b7d151d08db7b05d852532_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_61b49fd0c6a37a70ca165f42c98db6a8->m_frame.f_lineno = 5;
    tmp_assign_source_20 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_20;

    // Tried code:
    tmp_import_name_from_12 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_Extract );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_Extract, tmp_assign_source_21 );
    tmp_import_name_from_13 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_ExtractDay );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_ExtractDay, tmp_assign_source_22 );
    tmp_import_name_from_14 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_14 );
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_ExtractHour );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_ExtractHour, tmp_assign_source_23 );
    tmp_import_name_from_15 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_15 );
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_ExtractMinute );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_ExtractMinute, tmp_assign_source_24 );
    tmp_import_name_from_16 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_16 );
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_ExtractMonth );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_ExtractMonth, tmp_assign_source_25 );
    tmp_import_name_from_17 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_17 );
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_ExtractSecond );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_ExtractSecond, tmp_assign_source_26 );
    tmp_import_name_from_18 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_18 );
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_ExtractWeek );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_ExtractWeek, tmp_assign_source_27 );
    tmp_import_name_from_19 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_19 );
    tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_ExtractWeekDay );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_ExtractWeekDay, tmp_assign_source_28 );
    tmp_import_name_from_20 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_20 );
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_ExtractYear );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_ExtractYear, tmp_assign_source_29 );
    tmp_import_name_from_21 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_21 );
    tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_Trunc );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_Trunc, tmp_assign_source_30 );
    tmp_import_name_from_22 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_22 );
    tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_TruncDate );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_TruncDate, tmp_assign_source_31 );
    tmp_import_name_from_23 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_23 );
    tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_TruncDay );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_TruncDay, tmp_assign_source_32 );
    tmp_import_name_from_24 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_24 );
    tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_TruncHour );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_TruncHour, tmp_assign_source_33 );
    tmp_import_name_from_25 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_25 );
    tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_25, const_str_plain_TruncMinute );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_TruncMinute, tmp_assign_source_34 );
    tmp_import_name_from_26 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_26 );
    tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_26, const_str_plain_TruncMonth );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_TruncMonth, tmp_assign_source_35 );
    tmp_import_name_from_27 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_27 );
    tmp_assign_source_36 = IMPORT_NAME( tmp_import_name_from_27, const_str_plain_TruncSecond );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_TruncSecond, tmp_assign_source_36 );
    tmp_import_name_from_28 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_28 );
    tmp_assign_source_37 = IMPORT_NAME( tmp_import_name_from_28, const_str_plain_TruncTime );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_TruncTime, tmp_assign_source_37 );
    tmp_import_name_from_29 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_29 );
    tmp_assign_source_38 = IMPORT_NAME( tmp_import_name_from_29, const_str_plain_TruncYear );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain_TruncYear, tmp_assign_source_38 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_61b49fd0c6a37a70ca165f42c98db6a8 );
#endif
    popFrameStack();

    assertFrameObject( frame_61b49fd0c6a37a70ca165f42c98db6a8 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_61b49fd0c6a37a70ca165f42c98db6a8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_61b49fd0c6a37a70ca165f42c98db6a8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_61b49fd0c6a37a70ca165f42c98db6a8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_61b49fd0c6a37a70ca165f42c98db6a8, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    Py_XDECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    tmp_assign_source_39 = LIST_COPY( const_list_6be8e1a18107e0f2e8d82c61e79fe2e7_list );
    UPDATE_STRING_DICT1( moduledict_django$db$models$functions, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_39 );

    return MOD_RETURN_VALUE( module_django$db$models$functions );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
