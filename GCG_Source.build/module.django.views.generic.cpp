/* Generated code for Python source for module 'django.views.generic'
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

/* The _module_django$views$generic is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$views$generic;
PyDictObject *moduledict_django$views$generic;

/* The module constants used, if any. */
extern PyObject *const_str_plain_TemplateView;
extern PyObject *const_str_plain_CreateView;
static PyObject *const_tuple_str_plain_ListView_tuple;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_ArchiveIndexView;
static PyObject *const_str_plain_NUITKA_PACKAGE_django_views_generic;
extern PyObject *const_str_plain_NUITKA_PACKAGE_django_views;
extern PyObject *const_str_digest_954df429f902baec29ab91ffbfe61eb5;
extern PyObject *const_str_plain_DateDetailView;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_list_aeecc757d397dcfdf4e14353d8daf18f_list;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_73e94d742d367a9f3c93e9d89e269084_tuple;
static PyObject *const_tuple_ad594a55eb3c77cf9694d9be540d60df_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_path;
extern PyObject *const_tuple_9e0741fe5f1f615bd9d3760a031b5cf0_tuple;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_UpdateView;
extern PyObject *const_str_plain_DeleteView;
static PyObject *const_tuple_c6beec3251ee8e3dac6992913ce8a51c_tuple;
extern PyObject *const_str_plain_NUITKA_PACKAGE_django;
extern PyObject *const_str_plain_YearArchiveView;
extern PyObject *const_str_plain_FormView;
extern PyObject *const_str_plain_RedirectView;
static PyObject *const_str_digest_2a96329d706d0a8c3224035c1275b5fc;
static PyObject *const_str_digest_1eb460d7babd93f7a423d4c9293964fe;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_str_plain_TodayArchiveView;
extern PyObject *const_str_plain_MonthArchiveView;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_View;
extern PyObject *const_tuple_c15243b3ba68498da186d5d65ae367ca_tuple;
static PyObject *const_tuple_str_plain_DetailView_tuple;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_digest_d95d14c69874304545b16ed90e4a32b9;
extern PyObject *const_str_plain_DetailView;
extern PyObject *const_str_plain_WeekArchiveView;
extern PyObject *const_str_digest_74dd0272a461d4529c7c1864fcc7315b;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_generic;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_join;
static PyObject *const_str_digest_a628ebc1c9206163f8d78525232c0d22;
extern PyObject *const_str_digest_db1a22d2a1320325deec9db6b3d43a43;
extern PyObject *const_str_digest_f7b71d8629ac20070908153568808476;
extern PyObject *const_str_plain_dirname;
static PyObject *const_tuple_str_plain_RedirectView_str_plain_TemplateView_str_plain_View_tuple;
extern PyObject *const_str_digest_f85fd54577d665cd6eedd921b39200d0;
extern PyObject *const_str_plain_DayArchiveView;
static PyObject *const_str_plain_GenericViewError;
static PyObject *const_str_digest_2f9717c4fe71d8c8c342f27f90552bc5;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_ListView;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_ListView_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ListView_tuple, 0, const_str_plain_ListView ); Py_INCREF( const_str_plain_ListView );
    const_str_plain_NUITKA_PACKAGE_django_views_generic = UNSTREAM_STRING( &constant_bin[ 1257088 ], 35, 1 );
    const_list_aeecc757d397dcfdf4e14353d8daf18f_list = PyList_New( 17 );
    PyList_SET_ITEM( const_list_aeecc757d397dcfdf4e14353d8daf18f_list, 0, const_str_plain_View ); Py_INCREF( const_str_plain_View );
    PyList_SET_ITEM( const_list_aeecc757d397dcfdf4e14353d8daf18f_list, 1, const_str_plain_TemplateView ); Py_INCREF( const_str_plain_TemplateView );
    PyList_SET_ITEM( const_list_aeecc757d397dcfdf4e14353d8daf18f_list, 2, const_str_plain_RedirectView ); Py_INCREF( const_str_plain_RedirectView );
    PyList_SET_ITEM( const_list_aeecc757d397dcfdf4e14353d8daf18f_list, 3, const_str_plain_ArchiveIndexView ); Py_INCREF( const_str_plain_ArchiveIndexView );
    PyList_SET_ITEM( const_list_aeecc757d397dcfdf4e14353d8daf18f_list, 4, const_str_plain_YearArchiveView ); Py_INCREF( const_str_plain_YearArchiveView );
    PyList_SET_ITEM( const_list_aeecc757d397dcfdf4e14353d8daf18f_list, 5, const_str_plain_MonthArchiveView ); Py_INCREF( const_str_plain_MonthArchiveView );
    PyList_SET_ITEM( const_list_aeecc757d397dcfdf4e14353d8daf18f_list, 6, const_str_plain_WeekArchiveView ); Py_INCREF( const_str_plain_WeekArchiveView );
    PyList_SET_ITEM( const_list_aeecc757d397dcfdf4e14353d8daf18f_list, 7, const_str_plain_DayArchiveView ); Py_INCREF( const_str_plain_DayArchiveView );
    PyList_SET_ITEM( const_list_aeecc757d397dcfdf4e14353d8daf18f_list, 8, const_str_plain_TodayArchiveView ); Py_INCREF( const_str_plain_TodayArchiveView );
    PyList_SET_ITEM( const_list_aeecc757d397dcfdf4e14353d8daf18f_list, 9, const_str_plain_DateDetailView ); Py_INCREF( const_str_plain_DateDetailView );
    PyList_SET_ITEM( const_list_aeecc757d397dcfdf4e14353d8daf18f_list, 10, const_str_plain_DetailView ); Py_INCREF( const_str_plain_DetailView );
    PyList_SET_ITEM( const_list_aeecc757d397dcfdf4e14353d8daf18f_list, 11, const_str_plain_FormView ); Py_INCREF( const_str_plain_FormView );
    PyList_SET_ITEM( const_list_aeecc757d397dcfdf4e14353d8daf18f_list, 12, const_str_plain_CreateView ); Py_INCREF( const_str_plain_CreateView );
    PyList_SET_ITEM( const_list_aeecc757d397dcfdf4e14353d8daf18f_list, 13, const_str_plain_UpdateView ); Py_INCREF( const_str_plain_UpdateView );
    PyList_SET_ITEM( const_list_aeecc757d397dcfdf4e14353d8daf18f_list, 14, const_str_plain_DeleteView ); Py_INCREF( const_str_plain_DeleteView );
    PyList_SET_ITEM( const_list_aeecc757d397dcfdf4e14353d8daf18f_list, 15, const_str_plain_ListView ); Py_INCREF( const_str_plain_ListView );
    const_str_plain_GenericViewError = UNSTREAM_STRING( &constant_bin[ 1257123 ], 16, 1 );
    PyList_SET_ITEM( const_list_aeecc757d397dcfdf4e14353d8daf18f_list, 16, const_str_plain_GenericViewError ); Py_INCREF( const_str_plain_GenericViewError );
    const_tuple_73e94d742d367a9f3c93e9d89e269084_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_73e94d742d367a9f3c93e9d89e269084_tuple, 0, const_str_plain_CreateView ); Py_INCREF( const_str_plain_CreateView );
    PyTuple_SET_ITEM( const_tuple_73e94d742d367a9f3c93e9d89e269084_tuple, 1, const_str_plain_DeleteView ); Py_INCREF( const_str_plain_DeleteView );
    PyTuple_SET_ITEM( const_tuple_73e94d742d367a9f3c93e9d89e269084_tuple, 2, const_str_plain_FormView ); Py_INCREF( const_str_plain_FormView );
    PyTuple_SET_ITEM( const_tuple_73e94d742d367a9f3c93e9d89e269084_tuple, 3, const_str_plain_UpdateView ); Py_INCREF( const_str_plain_UpdateView );
    const_tuple_ad594a55eb3c77cf9694d9be540d60df_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_ad594a55eb3c77cf9694d9be540d60df_tuple, 0, const_str_plain_NUITKA_PACKAGE_django_views_generic ); Py_INCREF( const_str_plain_NUITKA_PACKAGE_django_views_generic );
    PyTuple_SET_ITEM( const_tuple_ad594a55eb3c77cf9694d9be540d60df_tuple, 1, const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 ); Py_INCREF( const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 );
    const_tuple_c6beec3251ee8e3dac6992913ce8a51c_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_c6beec3251ee8e3dac6992913ce8a51c_tuple, 0, const_str_plain_ArchiveIndexView ); Py_INCREF( const_str_plain_ArchiveIndexView );
    PyTuple_SET_ITEM( const_tuple_c6beec3251ee8e3dac6992913ce8a51c_tuple, 1, const_str_plain_DateDetailView ); Py_INCREF( const_str_plain_DateDetailView );
    PyTuple_SET_ITEM( const_tuple_c6beec3251ee8e3dac6992913ce8a51c_tuple, 2, const_str_plain_DayArchiveView ); Py_INCREF( const_str_plain_DayArchiveView );
    PyTuple_SET_ITEM( const_tuple_c6beec3251ee8e3dac6992913ce8a51c_tuple, 3, const_str_plain_MonthArchiveView ); Py_INCREF( const_str_plain_MonthArchiveView );
    PyTuple_SET_ITEM( const_tuple_c6beec3251ee8e3dac6992913ce8a51c_tuple, 4, const_str_plain_TodayArchiveView ); Py_INCREF( const_str_plain_TodayArchiveView );
    PyTuple_SET_ITEM( const_tuple_c6beec3251ee8e3dac6992913ce8a51c_tuple, 5, const_str_plain_WeekArchiveView ); Py_INCREF( const_str_plain_WeekArchiveView );
    PyTuple_SET_ITEM( const_tuple_c6beec3251ee8e3dac6992913ce8a51c_tuple, 6, const_str_plain_YearArchiveView ); Py_INCREF( const_str_plain_YearArchiveView );
    const_str_digest_2a96329d706d0a8c3224035c1275b5fc = UNSTREAM_STRING( &constant_bin[ 1257139 ], 32, 0 );
    const_str_digest_1eb460d7babd93f7a423d4c9293964fe = UNSTREAM_STRING( &constant_bin[ 1257171 ], 28, 0 );
    const_tuple_str_plain_DetailView_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_DetailView_tuple, 0, const_str_plain_DetailView ); Py_INCREF( const_str_plain_DetailView );
    const_str_plain_generic = UNSTREAM_STRING( &constant_bin[ 961838 ], 7, 1 );
    const_str_digest_a628ebc1c9206163f8d78525232c0d22 = UNSTREAM_STRING( &constant_bin[ 1257146 ], 13, 0 );
    const_tuple_str_plain_RedirectView_str_plain_TemplateView_str_plain_View_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_RedirectView_str_plain_TemplateView_str_plain_View_tuple, 0, const_str_plain_RedirectView ); Py_INCREF( const_str_plain_RedirectView );
    PyTuple_SET_ITEM( const_tuple_str_plain_RedirectView_str_plain_TemplateView_str_plain_View_tuple, 1, const_str_plain_TemplateView ); Py_INCREF( const_str_plain_TemplateView );
    PyTuple_SET_ITEM( const_tuple_str_plain_RedirectView_str_plain_TemplateView_str_plain_View_tuple, 2, const_str_plain_View ); Py_INCREF( const_str_plain_View );
    const_str_digest_2f9717c4fe71d8c8c342f27f90552bc5 = UNSTREAM_STRING( &constant_bin[ 1257199 ], 29, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$views$generic( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_7f649c2c9ba04e7ca2a2586d047cddc9;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_2a96329d706d0a8c3224035c1275b5fc );
    codeobj_7f649c2c9ba04e7ca2a2586d047cddc9 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_2f9717c4fe71d8c8c342f27f90552bc5, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$views$generic =
{
    PyModuleDef_HEAD_INIT,
    "django.views.generic",   /* m_name */
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

MOD_INIT_DECL( django$views$generic )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$views$generic );
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
    puts("django.views.generic: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.views.generic: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$views$generic" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$views$generic = Py_InitModule4(
        "django.views.generic",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$views$generic = PyModule_Create( &mdef_django$views$generic );
#endif

    moduledict_django$views$generic = MODULE_DICT( module_django$views$generic );

    CHECK_OBJECT( module_django$views$generic );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d95d14c69874304545b16ed90e4a32b9, module_django$views$generic );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_0_var___qualname__ = NULL;
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
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
    PyObject *tmp_key_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_list_element_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_type_arg_1;
    struct Nuitka_FrameObject *frame_7f649c2c9ba04e7ca2a2586d047cddc9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    // Locals dictionary setup.
PyObject *locals_dict_1 = PyDict_New();


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_7f649c2c9ba04e7ca2a2586d047cddc9 = MAKE_MODULE_FRAME( codeobj_7f649c2c9ba04e7ca2a2586d047cddc9, module_django$views$generic );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_7f649c2c9ba04e7ca2a2586d047cddc9 );
    assert( Py_REFCNT( frame_7f649c2c9ba04e7ca2a2586d047cddc9 ) == 2 );

    // Framed code:
    tmp_assign_source_3 = PyList_New( 4 );
    frame_7f649c2c9ba04e7ca2a2586d047cddc9->m_frame.f_lineno = 1;
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
    frame_7f649c2c9ba04e7ca2a2586d047cddc9->m_frame.f_lineno = 1;
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
    frame_7f649c2c9ba04e7ca2a2586d047cddc9->m_frame.f_lineno = 1;
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
    frame_7f649c2c9ba04e7ca2a2586d047cddc9->m_frame.f_lineno = 1;
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
    frame_7f649c2c9ba04e7ca2a2586d047cddc9->m_frame.f_lineno = 1;
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
    tmp_args_element_name_3 = const_str_digest_a628ebc1c9206163f8d78525232c0d22;
    frame_7f649c2c9ba04e7ca2a2586d047cddc9->m_frame.f_lineno = 1;
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
    frame_7f649c2c9ba04e7ca2a2586d047cddc9->m_frame.f_lineno = 1;
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
    frame_7f649c2c9ba04e7ca2a2586d047cddc9->m_frame.f_lineno = 1;
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
    frame_7f649c2c9ba04e7ca2a2586d047cddc9->m_frame.f_lineno = 1;
    tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_9e0741fe5f1f615bd9d3760a031b5cf0_tuple, 0 ) );

    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = const_str_plain_generic;
    frame_7f649c2c9ba04e7ca2a2586d047cddc9->m_frame.f_lineno = 1;
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
    frame_7f649c2c9ba04e7ca2a2586d047cddc9->m_frame.f_lineno = 1;
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
    frame_7f649c2c9ba04e7ca2a2586d047cddc9->m_frame.f_lineno = 1;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_ad594a55eb3c77cf9694d9be540d60df_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 3, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_4 );
    frame_7f649c2c9ba04e7ca2a2586d047cddc9->m_frame.f_lineno = 1;
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
    tmp_args_element_name_6 = const_str_digest_d95d14c69874304545b16ed90e4a32b9;
    tmp_args_element_name_7 = metapath_based_loader;
    frame_7f649c2c9ba04e7ca2a2586d047cddc9->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_5 );
    tmp_assign_source_6 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_d95d14c69874304545b16ed90e4a32b9;
    UPDATE_STRING_DICT0( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_7 );
    tmp_name_name_1 = const_str_digest_f85fd54577d665cd6eedd921b39200d0;
    tmp_globals_name_1 = (PyObject *)moduledict_django$views$generic;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_RedirectView_str_plain_TemplateView_str_plain_View_tuple;
    tmp_level_name_1 = const_int_0;
    frame_7f649c2c9ba04e7ca2a2586d047cddc9->m_frame.f_lineno = 1;
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
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_RedirectView );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain_RedirectView, tmp_assign_source_9 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_TemplateView );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain_TemplateView, tmp_assign_source_10 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_View );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain_View, tmp_assign_source_11 );
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

    tmp_name_name_2 = const_str_digest_f7b71d8629ac20070908153568808476;
    tmp_globals_name_2 = (PyObject *)moduledict_django$views$generic;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_c6beec3251ee8e3dac6992913ce8a51c_tuple;
    tmp_level_name_2 = const_int_0;
    frame_7f649c2c9ba04e7ca2a2586d047cddc9->m_frame.f_lineno = 2;
    tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_12;

    // Tried code:
    tmp_import_name_from_4 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_ArchiveIndexView );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain_ArchiveIndexView, tmp_assign_source_13 );
    tmp_import_name_from_5 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_DateDetailView );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain_DateDetailView, tmp_assign_source_14 );
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_DayArchiveView );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain_DayArchiveView, tmp_assign_source_15 );
    tmp_import_name_from_7 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_MonthArchiveView );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain_MonthArchiveView, tmp_assign_source_16 );
    tmp_import_name_from_8 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_TodayArchiveView );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain_TodayArchiveView, tmp_assign_source_17 );
    tmp_import_name_from_9 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_WeekArchiveView );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain_WeekArchiveView, tmp_assign_source_18 );
    tmp_import_name_from_10 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_YearArchiveView );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain_YearArchiveView, tmp_assign_source_19 );
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

    tmp_name_name_3 = const_str_digest_db1a22d2a1320325deec9db6b3d43a43;
    tmp_globals_name_3 = (PyObject *)moduledict_django$views$generic;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_DetailView_tuple;
    tmp_level_name_3 = const_int_0;
    frame_7f649c2c9ba04e7ca2a2586d047cddc9->m_frame.f_lineno = 6;
    tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_DetailView );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain_DetailView, tmp_assign_source_20 );
    tmp_name_name_4 = const_str_digest_74dd0272a461d4529c7c1864fcc7315b;
    tmp_globals_name_4 = (PyObject *)moduledict_django$views$generic;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_73e94d742d367a9f3c93e9d89e269084_tuple;
    tmp_level_name_4 = const_int_0;
    frame_7f649c2c9ba04e7ca2a2586d047cddc9->m_frame.f_lineno = 7;
    tmp_assign_source_21 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_21;

    // Tried code:
    tmp_import_name_from_12 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_CreateView );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain_CreateView, tmp_assign_source_22 );
    tmp_import_name_from_13 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_DeleteView );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain_DeleteView, tmp_assign_source_23 );
    tmp_import_name_from_14 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_14 );
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_FormView );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain_FormView, tmp_assign_source_24 );
    tmp_import_name_from_15 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_15 );
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_UpdateView );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain_UpdateView, tmp_assign_source_25 );
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

    tmp_name_name_5 = const_str_digest_954df429f902baec29ab91ffbfe61eb5;
    tmp_globals_name_5 = (PyObject *)moduledict_django$views$generic;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_ListView_tuple;
    tmp_level_name_5 = const_int_0;
    frame_7f649c2c9ba04e7ca2a2586d047cddc9->m_frame.f_lineno = 10;
    tmp_import_name_from_16 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_ListView );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain_ListView, tmp_assign_source_26 );
    tmp_assign_source_27 = LIST_COPY( const_list_aeecc757d397dcfdf4e14353d8daf18f_list );
    UPDATE_STRING_DICT1( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_27 );
    tmp_assign_source_28 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyExc_Exception;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_28, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_28;

    tmp_assign_source_29 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_29;

    // Tried code:
    tmp_compare_left_1 = const_str_plain_metaclass;
    tmp_compare_right_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_4;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_4;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_4;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_4;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_30 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 20;

        goto try_except_handler_4;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_30;

    tmp_compare_left_2 = const_str_plain_metaclass;
    tmp_compare_right_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_4;
    }
    branch_no_1:;
    tmp_hasattr_source_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_4;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_source_name_4 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_4;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_GenericViewError;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_7f649c2c9ba04e7ca2a2586d047cddc9->m_frame.f_lineno = 20;
    tmp_assign_source_31 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_4;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_31 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_31;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_1);
    locals_dict_1 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_33 = const_str_digest_d95d14c69874304545b16ed90e4a32b9;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_33 );
    outline_0_var___module__ = tmp_assign_source_33;

    tmp_assign_source_34 = const_str_digest_1eb460d7babd93f7a423d4c9293964fe;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_34 );
    outline_0_var___doc__ = tmp_assign_source_34;

    tmp_assign_source_35 = const_str_plain_GenericViewError;
    assert( outline_0_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_35 );
    outline_0_var___qualname__ = tmp_assign_source_35;

    // Tried code:
    tmp_called_name_6 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_6 );
    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_3 = const_str_plain_GenericViewError;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = locals_dict_1;
    Py_INCREF( tmp_tuple_element_3 );
    if ( outline_0_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain___qualname__,
            outline_0_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain___qualname__
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_3 );

        exception_lineno = 20;

        goto try_except_handler_5;
    }
    if ( outline_0_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain___module__,
            outline_0_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain___module__
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_3 );

        exception_lineno = 20;

        goto try_except_handler_5;
    }
    if ( outline_0_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain___doc__,
            outline_0_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain___doc__
            );

            tmp_result = res == 0;
        }
        else
        {
            CLEAR_ERROR_OCCURRED();
            tmp_result = true;
        }
    }

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_tuple_element_3 );

        exception_lineno = 20;

        goto try_except_handler_5;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_7f649c2c9ba04e7ca2a2586d047cddc9->m_frame.f_lineno = 20;
    tmp_assign_source_36 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_5;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_36;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$views$generic );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_5:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    Py_XDECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    Py_XDECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$views$generic );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 20;
    goto try_except_handler_4;
    outline_result_1:;
    tmp_assign_source_32 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_django$views$generic, (Nuitka_StringObject *)const_str_plain_GenericViewError, tmp_assign_source_32 );
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7f649c2c9ba04e7ca2a2586d047cddc9 );
#endif
    popFrameStack();

    assertFrameObject( frame_7f649c2c9ba04e7ca2a2586d047cddc9 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7f649c2c9ba04e7ca2a2586d047cddc9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7f649c2c9ba04e7ca2a2586d047cddc9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7f649c2c9ba04e7ca2a2586d047cddc9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7f649c2c9ba04e7ca2a2586d047cddc9, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;


    return MOD_RETURN_VALUE( module_django$views$generic );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
