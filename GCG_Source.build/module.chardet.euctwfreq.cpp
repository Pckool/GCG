/* Generated code for Python source for module 'chardet.euctwfreq'
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

/* The _module_chardet$euctwfreq is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$euctwfreq;
PyDictObject *moduledict_chardet$euctwfreq;

/* The module constants used, if any. */
static PyObject *const_tuple_c7857aa12bb2e86b5fb641a93cd629e0_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_EUCTW_TABLE_SIZE;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_chardet;
extern PyObject *const_float_0_75;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_digest_0f315324483a843be058846d7c63975f;
static PyObject *const_str_digest_7b3211b526ef3a244faa78813f032abb;
static PyObject *const_str_digest_10a0f1ada1e698398f1a37a36b457666;
extern PyObject *const_str_plain_EUCTW_TYPICAL_DISTRIBUTION_RATIO;
extern PyObject *const_str_plain_EUCTW_CHAR_TO_FREQ_ORDER;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_tuple_empty;
extern PyObject *const_int_pos_5376;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_c7857aa12bb2e86b5fb641a93cd629e0_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 183062 ], 26885 );
    const_str_digest_0f315324483a843be058846d7c63975f = UNSTREAM_STRING( &constant_bin[ 209947 ], 26, 0 );
    const_str_digest_7b3211b526ef3a244faa78813f032abb = UNSTREAM_STRING( &constant_bin[ 209973 ], 20, 0 );
    const_str_digest_10a0f1ada1e698398f1a37a36b457666 = UNSTREAM_STRING( &constant_bin[ 209955 ], 17, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$euctwfreq( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_30877de0d7d35e059042bf4013023243;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_7b3211b526ef3a244faa78813f032abb );
    codeobj_30877de0d7d35e059042bf4013023243 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_0f315324483a843be058846d7c63975f, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$euctwfreq =
{
    PyModuleDef_HEAD_INIT,
    "chardet.euctwfreq",   /* m_name */
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

MOD_INIT_DECL( chardet$euctwfreq )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_chardet$euctwfreq );
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
    puts("chardet.euctwfreq: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("chardet.euctwfreq: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initchardet$euctwfreq" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$euctwfreq = Py_InitModule4(
        "chardet.euctwfreq",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_chardet$euctwfreq = PyModule_Create( &mdef_chardet$euctwfreq );
#endif

    moduledict_chardet$euctwfreq = MODULE_DICT( module_chardet$euctwfreq );

    CHECK_OBJECT( module_chardet$euctwfreq );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_10a0f1ada1e698398f1a37a36b457666, module_chardet$euctwfreq );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_chardet$euctwfreq, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_chardet$euctwfreq, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_chardet$euctwfreq, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_called_name_1;
    struct Nuitka_FrameObject *frame_30877de0d7d35e059042bf4013023243;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$euctwfreq, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_chardet$euctwfreq, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_chardet$euctwfreq, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_30877de0d7d35e059042bf4013023243 = MAKE_MODULE_FRAME( codeobj_30877de0d7d35e059042bf4013023243, module_chardet$euctwfreq );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_30877de0d7d35e059042bf4013023243 );
    assert( Py_REFCNT( frame_30877de0d7d35e059042bf4013023243 ) == 2 );

    // Framed code:
    frame_30877de0d7d35e059042bf4013023243->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("importlib._bootstrap");
        if (likely( module != NULL ))
        {
            tmp_called_name_1 = PyObject_GetAttr( module, const_str_plain_ModuleSpec );
        }
        else
        {
            tmp_called_name_1 = NULL;
        }
    }

    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_10a0f1ada1e698398f1a37a36b457666;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_30877de0d7d35e059042bf4013023243->m_frame.f_lineno = 1;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_chardet$euctwfreq, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_30877de0d7d35e059042bf4013023243 );
#endif
    popFrameStack();

    assertFrameObject( frame_30877de0d7d35e059042bf4013023243 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_30877de0d7d35e059042bf4013023243 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_30877de0d7d35e059042bf4013023243, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_30877de0d7d35e059042bf4013023243->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_30877de0d7d35e059042bf4013023243, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_chardet$euctwfreq, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_chardet;
    UPDATE_STRING_DICT0( moduledict_chardet$euctwfreq, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_float_0_75;
    UPDATE_STRING_DICT0( moduledict_chardet$euctwfreq, (Nuitka_StringObject *)const_str_plain_EUCTW_TYPICAL_DISTRIBUTION_RATIO, tmp_assign_source_7 );
    tmp_assign_source_8 = const_int_pos_5376;
    UPDATE_STRING_DICT0( moduledict_chardet$euctwfreq, (Nuitka_StringObject *)const_str_plain_EUCTW_TABLE_SIZE, tmp_assign_source_8 );
    tmp_assign_source_9 = const_tuple_c7857aa12bb2e86b5fb641a93cd629e0_tuple;
    UPDATE_STRING_DICT0( moduledict_chardet$euctwfreq, (Nuitka_StringObject *)const_str_plain_EUCTW_CHAR_TO_FREQ_ORDER, tmp_assign_source_9 );

    return MOD_RETURN_VALUE( module_chardet$euctwfreq );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
