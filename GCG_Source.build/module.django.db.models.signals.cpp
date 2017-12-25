/* Generated code for Python source for module 'django.db.models.signals'
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

/* The _module_django$db$models$signals is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$db$models$signals;
PyDictObject *moduledict_django$db$models$signals;

/* The module constants used, if any. */
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_post_save;
extern PyObject *const_str_plain_sender;
extern PyObject *const_str_plain_action;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_pre_save;
extern PyObject *const_str_plain___file__;
static PyObject *const_list_a2382308453c142bdf0d2d673b44a198_list;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_digest_8530ae4788b11502fa0720c94717a318;
static PyObject *const_dict_a709d792bb4afe8fbb285373357f917a;
extern PyObject *const_str_plain_ModelSignal;
static PyObject *const_str_digest_c84a0ef38a5ec4155abb6a267aa6cb4b;
extern PyObject *const_dict_f154c9a58c9419d7e391901d7b7fe49e;
extern PyObject *const_str_plain_app_config;
static PyObject *const_list_str_plain_instance_str_plain_args_str_plain_kwargs_list;
extern PyObject *const_str_plain_instance;
extern PyObject *const_tuple_str_plain_partial_tuple;
extern PyObject *const_str_digest_031cf5a6398f1456075a1e013bc652f6;
static PyObject *const_dict_939348ab226bd85931784629a2a68a02;
extern PyObject *const_str_plain_Options;
extern PyObject *const_str_plain_using;
static PyObject *const_dict_8461fdfbd38a65fa617ce32e93ead199;
static PyObject *const_str_digest_60a4cc479704db4e3e7309d8347ebd47;
extern PyObject *const_str_plain_weak;
extern PyObject *const_str_plain_connect;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_reverse;
extern PyObject *const_str_digest_e94867646a7b466ebe32bae5b9a4d819;
extern PyObject *const_str_plain_Signal;
extern PyObject *const_str_plain_default_apps;
static PyObject *const_list_7185e383372f8bbe122131b0bc919f5e_list;
extern PyObject *const_str_plain_providing_args;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_apps;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_tuple_str_plain_Options_tuple;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_plain_interactive;
extern PyObject *const_str_plain_pk_set;
extern PyObject *const_str_plain_string_types;
extern PyObject *const_str_plain_six;
extern PyObject *const_tuple_str_plain_Signal_tuple;
extern PyObject *const_str_digest_76151557ac4cfbca827b761e50d5fea2;
extern PyObject *const_str_digest_f3705ed203bc8405b0735fb4179b32a8;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_plan;
extern PyObject *const_str_digest_467c9722f19d9d40d148689532cdc0b1;
extern PyObject *const_str_plain___loader__;
static PyObject *const_dict_69900f987d1ccbf91a947949a5fbacd6;
extern PyObject *const_str_plain_raw;
extern PyObject *const_str_plain_make_model_tuple;
extern PyObject *const_str_plain_model;
static PyObject *const_str_plain_post_migrate;
extern PyObject *const_str_plain_stacklevel;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain_receiver;
extern PyObject *const_str_plain_verbosity;
extern PyObject *const_str_digest_287a151b5f66f8e3cd4e02346aa22be8;
extern PyObject *const_tuple_none_none_none_none_none_tuple;
extern PyObject *const_str_plain_post_delete;
extern PyObject *const_str_plain_post_init;
extern PyObject *const_int_0;
static PyObject *const_list_str_plain_instance_list;
extern PyObject *const_tuple_str_plain_RemovedInDjango20Warning_tuple;
static PyObject *const_str_digest_d58ee4a858d86e1d219e97a1b5c244e3;
extern PyObject *const_str_plain_m2m_changed;
extern PyObject *const_str_plain_update_fields;
static PyObject *const_str_plain__lazy_method;
extern PyObject *const_str_digest_9fb23afae7611d365aa8317c3c593c5f;
extern PyObject *const_str_plain_class;
extern PyObject *const_tuple_str_plain_make_model_tuple_tuple;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_list_887e8c82dbafcc16342a69bdc8c43ceb_list;
extern PyObject *const_str_plain_created;
extern PyObject *const_str_plain_lazy_model_operation;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_functools;
static PyObject *const_str_plain_partial_method;
extern PyObject *const_str_plain_dispatch_uid;
extern PyObject *const_str_plain_partial;
extern PyObject *const_str_plain_class_prepared;
extern PyObject *const_tuple_none_true_none_none_tuple;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_digest_a4967fb293ca374f52ecdfda2d910583;
extern PyObject *const_str_plain_self;
static PyObject *const_dict_982c58099bc651286acc37ac771ba698;
static PyObject *const_str_plain_pre_migrate;
static PyObject *const_str_digest_dd252976e469b926a229d891d565cb07;
static PyObject *const_dict_4fce67998921d791d6704e47f86b4670;
extern PyObject *const_tuple_str_plain_six_tuple;
extern PyObject *const_str_plain_method;
static PyObject *const_list_str_plain_instance_str_plain_using_list;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_use_caching;
extern PyObject *const_str_plain_disconnect;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_pre_init;
static PyObject *const_str_digest_ffac811f3d97f365849414e781846d5f;
extern PyObject *const_str_plain_pre_delete;
extern PyObject *const_str_plain_RemovedInDjango20Warning;
static PyObject *const_list_697d819b846f8cedadcaf40c8821eec1_list;
static PyObject *const_dict_97f7331bc56c94fa17bcea314bcbfbf9;
static PyObject *const_list_str_plain_class_list;
static PyObject *const_tuple_8396d7c25dbf88a2a628411cfbdb26ce_tuple;
static PyObject *const_dict_3a06eb0f5783fc2f370376b614893de1;
static PyObject *const_tuple_f63fe02c3395d3e31f684c945d59f383_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_list_a2382308453c142bdf0d2d673b44a198_list = PyList_New( 6 );
    PyList_SET_ITEM( const_list_a2382308453c142bdf0d2d673b44a198_list, 0, const_str_plain_action ); Py_INCREF( const_str_plain_action );
    PyList_SET_ITEM( const_list_a2382308453c142bdf0d2d673b44a198_list, 1, const_str_plain_instance ); Py_INCREF( const_str_plain_instance );
    PyList_SET_ITEM( const_list_a2382308453c142bdf0d2d673b44a198_list, 2, const_str_plain_reverse ); Py_INCREF( const_str_plain_reverse );
    PyList_SET_ITEM( const_list_a2382308453c142bdf0d2d673b44a198_list, 3, const_str_plain_model ); Py_INCREF( const_str_plain_model );
    PyList_SET_ITEM( const_list_a2382308453c142bdf0d2d673b44a198_list, 4, const_str_plain_pk_set ); Py_INCREF( const_str_plain_pk_set );
    PyList_SET_ITEM( const_list_a2382308453c142bdf0d2d673b44a198_list, 5, const_str_plain_using ); Py_INCREF( const_str_plain_using );
    const_dict_a709d792bb4afe8fbb285373357f917a = _PyDict_NewPresized( 1 );
    const_list_str_plain_class_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_class_list, 0, const_str_plain_class ); Py_INCREF( const_str_plain_class );
    PyDict_SetItem( const_dict_a709d792bb4afe8fbb285373357f917a, const_str_plain_providing_args, const_list_str_plain_class_list );
    assert( PyDict_Size( const_dict_a709d792bb4afe8fbb285373357f917a ) == 1 );
    const_str_digest_c84a0ef38a5ec4155abb6a267aa6cb4b = UNSTREAM_STRING( &constant_bin[ 990568 ], 19, 0 );
    const_list_str_plain_instance_str_plain_args_str_plain_kwargs_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_str_plain_instance_str_plain_args_str_plain_kwargs_list, 0, const_str_plain_instance ); Py_INCREF( const_str_plain_instance );
    PyList_SET_ITEM( const_list_str_plain_instance_str_plain_args_str_plain_kwargs_list, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyList_SET_ITEM( const_list_str_plain_instance_str_plain_args_str_plain_kwargs_list, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_dict_939348ab226bd85931784629a2a68a02 = _PyDict_NewPresized( 2 );
    const_list_697d819b846f8cedadcaf40c8821eec1_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_697d819b846f8cedadcaf40c8821eec1_list, 0, const_str_plain_instance ); Py_INCREF( const_str_plain_instance );
    PyList_SET_ITEM( const_list_697d819b846f8cedadcaf40c8821eec1_list, 1, const_str_plain_raw ); Py_INCREF( const_str_plain_raw );
    PyList_SET_ITEM( const_list_697d819b846f8cedadcaf40c8821eec1_list, 2, const_str_plain_using ); Py_INCREF( const_str_plain_using );
    PyList_SET_ITEM( const_list_697d819b846f8cedadcaf40c8821eec1_list, 3, const_str_plain_update_fields ); Py_INCREF( const_str_plain_update_fields );
    PyDict_SetItem( const_dict_939348ab226bd85931784629a2a68a02, const_str_plain_providing_args, const_list_697d819b846f8cedadcaf40c8821eec1_list );
    PyDict_SetItem( const_dict_939348ab226bd85931784629a2a68a02, const_str_plain_use_caching, Py_True );
    assert( PyDict_Size( const_dict_939348ab226bd85931784629a2a68a02 ) == 2 );
    const_dict_8461fdfbd38a65fa617ce32e93ead199 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_8461fdfbd38a65fa617ce32e93ead199, const_str_plain_providing_args, const_list_str_plain_instance_str_plain_args_str_plain_kwargs_list );
    PyDict_SetItem( const_dict_8461fdfbd38a65fa617ce32e93ead199, const_str_plain_use_caching, Py_True );
    assert( PyDict_Size( const_dict_8461fdfbd38a65fa617ce32e93ead199 ) == 2 );
    const_str_digest_60a4cc479704db4e3e7309d8347ebd47 = UNSTREAM_STRING( &constant_bin[ 990587 ], 24, 0 );
    const_list_7185e383372f8bbe122131b0bc919f5e_list = PyList_New( 5 );
    PyList_SET_ITEM( const_list_7185e383372f8bbe122131b0bc919f5e_list, 0, const_str_plain_instance ); Py_INCREF( const_str_plain_instance );
    PyList_SET_ITEM( const_list_7185e383372f8bbe122131b0bc919f5e_list, 1, const_str_plain_raw ); Py_INCREF( const_str_plain_raw );
    PyList_SET_ITEM( const_list_7185e383372f8bbe122131b0bc919f5e_list, 2, const_str_plain_created ); Py_INCREF( const_str_plain_created );
    PyList_SET_ITEM( const_list_7185e383372f8bbe122131b0bc919f5e_list, 3, const_str_plain_using ); Py_INCREF( const_str_plain_using );
    PyList_SET_ITEM( const_list_7185e383372f8bbe122131b0bc919f5e_list, 4, const_str_plain_update_fields ); Py_INCREF( const_str_plain_update_fields );
    const_str_plain_interactive = UNSTREAM_STRING( &constant_bin[ 799332 ], 11, 1 );
    const_dict_69900f987d1ccbf91a947949a5fbacd6 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_69900f987d1ccbf91a947949a5fbacd6, const_str_plain_providing_args, const_list_a2382308453c142bdf0d2d673b44a198_list );
    PyDict_SetItem( const_dict_69900f987d1ccbf91a947949a5fbacd6, const_str_plain_use_caching, Py_True );
    assert( PyDict_Size( const_dict_69900f987d1ccbf91a947949a5fbacd6 ) == 2 );
    const_str_plain_post_migrate = UNSTREAM_STRING( &constant_bin[ 990611 ], 12, 1 );
    const_list_str_plain_instance_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_instance_list, 0, const_str_plain_instance ); Py_INCREF( const_str_plain_instance );
    const_str_digest_d58ee4a858d86e1d219e97a1b5c244e3 = UNSTREAM_STRING( &constant_bin[ 990623 ], 33, 0 );
    const_str_plain__lazy_method = UNSTREAM_STRING( &constant_bin[ 990599 ], 12, 1 );
    const_list_887e8c82dbafcc16342a69bdc8c43ceb_list = PyList_New( 6 );
    PyList_SET_ITEM( const_list_887e8c82dbafcc16342a69bdc8c43ceb_list, 0, const_str_plain_app_config ); Py_INCREF( const_str_plain_app_config );
    PyList_SET_ITEM( const_list_887e8c82dbafcc16342a69bdc8c43ceb_list, 1, const_str_plain_verbosity ); Py_INCREF( const_str_plain_verbosity );
    PyList_SET_ITEM( const_list_887e8c82dbafcc16342a69bdc8c43ceb_list, 2, const_str_plain_interactive ); Py_INCREF( const_str_plain_interactive );
    PyList_SET_ITEM( const_list_887e8c82dbafcc16342a69bdc8c43ceb_list, 3, const_str_plain_using ); Py_INCREF( const_str_plain_using );
    PyList_SET_ITEM( const_list_887e8c82dbafcc16342a69bdc8c43ceb_list, 4, const_str_plain_apps ); Py_INCREF( const_str_plain_apps );
    PyList_SET_ITEM( const_list_887e8c82dbafcc16342a69bdc8c43ceb_list, 5, const_str_plain_plan ); Py_INCREF( const_str_plain_plan );
    const_str_plain_partial_method = UNSTREAM_STRING( &constant_bin[ 990656 ], 14, 1 );
    const_str_digest_a4967fb293ca374f52ecdfda2d910583 = UNSTREAM_STRING( &constant_bin[ 990670 ], 27, 0 );
    const_dict_982c58099bc651286acc37ac771ba698 = _PyDict_NewPresized( 2 );
    const_list_str_plain_instance_str_plain_using_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_instance_str_plain_using_list, 0, const_str_plain_instance ); Py_INCREF( const_str_plain_instance );
    PyList_SET_ITEM( const_list_str_plain_instance_str_plain_using_list, 1, const_str_plain_using ); Py_INCREF( const_str_plain_using );
    PyDict_SetItem( const_dict_982c58099bc651286acc37ac771ba698, const_str_plain_providing_args, const_list_str_plain_instance_str_plain_using_list );
    PyDict_SetItem( const_dict_982c58099bc651286acc37ac771ba698, const_str_plain_use_caching, Py_True );
    assert( PyDict_Size( const_dict_982c58099bc651286acc37ac771ba698 ) == 2 );
    const_str_plain_pre_migrate = UNSTREAM_STRING( &constant_bin[ 990697 ], 11, 1 );
    const_str_digest_dd252976e469b926a229d891d565cb07 = UNSTREAM_STRING( &constant_bin[ 990708 ], 122, 0 );
    const_dict_4fce67998921d791d6704e47f86b4670 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_4fce67998921d791d6704e47f86b4670, const_str_plain_providing_args, const_list_str_plain_instance_list );
    PyDict_SetItem( const_dict_4fce67998921d791d6704e47f86b4670, const_str_plain_use_caching, Py_True );
    assert( PyDict_Size( const_dict_4fce67998921d791d6704e47f86b4670 ) == 2 );
    const_str_digest_ffac811f3d97f365849414e781846d5f = UNSTREAM_STRING( &constant_bin[ 990830 ], 22, 0 );
    const_dict_97f7331bc56c94fa17bcea314bcbfbf9 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_97f7331bc56c94fa17bcea314bcbfbf9, const_str_plain_providing_args, const_list_887e8c82dbafcc16342a69bdc8c43ceb_list );
    assert( PyDict_Size( const_dict_97f7331bc56c94fa17bcea314bcbfbf9 ) == 1 );
    const_tuple_8396d7c25dbf88a2a628411cfbdb26ce_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_8396d7c25dbf88a2a628411cfbdb26ce_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_8396d7c25dbf88a2a628411cfbdb26ce_tuple, 1, const_str_plain_receiver ); Py_INCREF( const_str_plain_receiver );
    PyTuple_SET_ITEM( const_tuple_8396d7c25dbf88a2a628411cfbdb26ce_tuple, 2, const_str_plain_sender ); Py_INCREF( const_str_plain_sender );
    PyTuple_SET_ITEM( const_tuple_8396d7c25dbf88a2a628411cfbdb26ce_tuple, 3, const_str_plain_weak ); Py_INCREF( const_str_plain_weak );
    PyTuple_SET_ITEM( const_tuple_8396d7c25dbf88a2a628411cfbdb26ce_tuple, 4, const_str_plain_dispatch_uid ); Py_INCREF( const_str_plain_dispatch_uid );
    PyTuple_SET_ITEM( const_tuple_8396d7c25dbf88a2a628411cfbdb26ce_tuple, 5, const_str_plain_apps ); Py_INCREF( const_str_plain_apps );
    PyTuple_SET_ITEM( const_tuple_8396d7c25dbf88a2a628411cfbdb26ce_tuple, 6, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_dict_3a06eb0f5783fc2f370376b614893de1 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_3a06eb0f5783fc2f370376b614893de1, const_str_plain_providing_args, const_list_7185e383372f8bbe122131b0bc919f5e_list );
    PyDict_SetItem( const_dict_3a06eb0f5783fc2f370376b614893de1, const_str_plain_use_caching, Py_True );
    assert( PyDict_Size( const_dict_3a06eb0f5783fc2f370376b614893de1 ) == 2 );
    const_tuple_f63fe02c3395d3e31f684c945d59f383_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_f63fe02c3395d3e31f684c945d59f383_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_f63fe02c3395d3e31f684c945d59f383_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_f63fe02c3395d3e31f684c945d59f383_tuple, 2, const_str_plain_apps ); Py_INCREF( const_str_plain_apps );
    PyTuple_SET_ITEM( const_tuple_f63fe02c3395d3e31f684c945d59f383_tuple, 3, const_str_plain_receiver ); Py_INCREF( const_str_plain_receiver );
    PyTuple_SET_ITEM( const_tuple_f63fe02c3395d3e31f684c945d59f383_tuple, 4, const_str_plain_sender ); Py_INCREF( const_str_plain_sender );
    PyTuple_SET_ITEM( const_tuple_f63fe02c3395d3e31f684c945d59f383_tuple, 5, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_f63fe02c3395d3e31f684c945d59f383_tuple, 6, const_str_plain_Options ); Py_INCREF( const_str_plain_Options );
    PyTuple_SET_ITEM( const_tuple_f63fe02c3395d3e31f684c945d59f383_tuple, 7, const_str_plain_partial_method ); Py_INCREF( const_str_plain_partial_method );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$db$models$signals( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_272ac0beba970525735ec4f60d7246a9;
static PyCodeObject *codeobj_ef067dce319c345dc005be1570c69941;
static PyCodeObject *codeobj_745639c50e2c7b0619be5295f62e229e;
static PyCodeObject *codeobj_5123aaa75e83144f3661a763c0c19e70;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_a4967fb293ca374f52ecdfda2d910583 );
    codeobj_272ac0beba970525735ec4f60d7246a9 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_d58ee4a858d86e1d219e97a1b5c244e3, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_ef067dce319c345dc005be1570c69941 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__lazy_method, 18, const_tuple_f63fe02c3395d3e31f684c945d59f383_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_745639c50e2c7b0619be5295f62e229e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_connect, 29, const_tuple_8396d7c25dbf88a2a628411cfbdb26ce_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_5123aaa75e83144f3661a763c0c19e70 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_disconnect, 35, const_tuple_8396d7c25dbf88a2a628411cfbdb26ce_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_pos_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_django$db$models$signals$$$function_1__lazy_method(  );


static PyObject *MAKE_FUNCTION_django$db$models$signals$$$function_2_connect( PyObject *defaults );


static PyObject *MAKE_FUNCTION_django$db$models$signals$$$function_3_disconnect( PyObject *defaults );


// The module function definitions.
static PyObject *impl_django$db$models$signals$$$function_1__lazy_method( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *par_apps = python_pars[ 2 ];
    PyObject *par_receiver = python_pars[ 3 ];
    PyObject *par_sender = python_pars[ 4 ];
    PyObject *par_kwargs = python_pars[ 5 ];
    PyObject *var_Options = NULL;
    PyObject *var_partial_method = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ef067dce319c345dc005be1570c69941 = NULL;

    struct Nuitka_FrameObject *frame_ef067dce319c345dc005be1570c69941;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ef067dce319c345dc005be1570c69941, codeobj_ef067dce319c345dc005be1570c69941, module_django$db$models$signals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ef067dce319c345dc005be1570c69941 = cache_frame_ef067dce319c345dc005be1570c69941;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ef067dce319c345dc005be1570c69941 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ef067dce319c345dc005be1570c69941 ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_digest_9fb23afae7611d365aa8317c3c593c5f;
    tmp_globals_name_1 = (PyObject *)moduledict_django$db$models$signals;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_Options_tuple;
    tmp_level_name_1 = const_int_0;
    frame_ef067dce319c345dc005be1570c69941->m_frame.f_lineno = 19;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Options );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_Options == NULL );
    var_Options = tmp_assign_source_1;

    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_partial );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_partial );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "partial" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_method;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_receiver;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "receiver" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = par_kwargs;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwargs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_assign_source_2 = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_partial_method == NULL );
    var_partial_method = tmp_assign_source_2;

    tmp_isinstance_inst_1 = par_sender;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sender" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 23;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 23;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_string_types );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_or_left_value_1 = par_apps;

    if ( tmp_or_left_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "apps" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_source_name_2 = var_Options;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "Options" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_default_apps );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_assign_source_3 = tmp_or_left_value_1;
    or_end_1:;
    {
        PyObject *old = par_apps;
        par_apps = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_source_name_3 = par_apps;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_lazy_model_operation );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_partial_method;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "partial_method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_make_model_tuple );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_make_model_tuple );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "make_model_tuple" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_sender;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sender" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_ef067dce319c345dc005be1570c69941->m_frame.f_lineno = 25;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 25;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_ef067dce319c345dc005be1570c69941->m_frame.f_lineno = 25;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_3 = var_partial_method;

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "partial_method" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_sender;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sender" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_ef067dce319c345dc005be1570c69941->m_frame.f_lineno = 27;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef067dce319c345dc005be1570c69941 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef067dce319c345dc005be1570c69941 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef067dce319c345dc005be1570c69941 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ef067dce319c345dc005be1570c69941, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ef067dce319c345dc005be1570c69941->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ef067dce319c345dc005be1570c69941, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ef067dce319c345dc005be1570c69941,
        type_description_1,
        par_self,
        par_method,
        par_apps,
        par_receiver,
        par_sender,
        par_kwargs,
        var_Options,
        var_partial_method
    );


    // Release cached frame.
    if ( frame_ef067dce319c345dc005be1570c69941 == cache_frame_ef067dce319c345dc005be1570c69941 )
    {
        Py_DECREF( frame_ef067dce319c345dc005be1570c69941 );
    }
    cache_frame_ef067dce319c345dc005be1570c69941 = NULL;

    assertFrameObject( frame_ef067dce319c345dc005be1570c69941 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$signals$$$function_1__lazy_method );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_apps );
    par_apps = NULL;

    Py_XDECREF( par_receiver );
    par_receiver = NULL;

    Py_XDECREF( par_sender );
    par_sender = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_Options );
    var_Options = NULL;

    Py_XDECREF( var_partial_method );
    var_partial_method = NULL;

    goto function_return_exit;
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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_method );
    par_method = NULL;

    Py_XDECREF( par_apps );
    par_apps = NULL;

    Py_XDECREF( par_receiver );
    par_receiver = NULL;

    Py_XDECREF( par_sender );
    par_sender = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_Options );
    var_Options = NULL;

    Py_XDECREF( var_partial_method );
    var_partial_method = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$signals$$$function_1__lazy_method );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_django$db$models$signals$$$function_2_connect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_receiver = python_pars[ 1 ];
    PyObject *par_sender = python_pars[ 2 ];
    PyObject *par_weak = python_pars[ 3 ];
    PyObject *par_dispatch_uid = python_pars[ 4 ];
    PyObject *par_apps = python_pars[ 5 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_object_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_745639c50e2c7b0619be5295f62e229e = NULL;

    struct Nuitka_FrameObject *frame_745639c50e2c7b0619be5295f62e229e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_745639c50e2c7b0619be5295f62e229e, codeobj_745639c50e2c7b0619be5295f62e229e, module_django$db$models$signals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_745639c50e2c7b0619be5295f62e229e = cache_frame_745639c50e2c7b0619be5295f62e229e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_745639c50e2c7b0619be5295f62e229e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_745639c50e2c7b0619be5295f62e229e ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__lazy_method );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 4 );
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_ModelSignal );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ModelSignal );
    }

    if ( tmp_type_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ModelSignal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    if ( tmp_object_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 31;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_connect );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 31;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_apps;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "apps" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_receiver;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "receiver" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_sender;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sender" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 3, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_key_1 = const_str_plain_weak;
    tmp_dict_value_1 = par_weak;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "weak" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_dispatch_uid;
    tmp_dict_value_2 = par_dispatch_uid;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dispatch_uid" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_745639c50e2c7b0619be5295f62e229e->m_frame.f_lineno = 30;
    tmp_unused = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_745639c50e2c7b0619be5295f62e229e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_745639c50e2c7b0619be5295f62e229e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_745639c50e2c7b0619be5295f62e229e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_745639c50e2c7b0619be5295f62e229e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_745639c50e2c7b0619be5295f62e229e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_745639c50e2c7b0619be5295f62e229e,
        type_description_1,
        par_self,
        par_receiver,
        par_sender,
        par_weak,
        par_dispatch_uid,
        par_apps,
        NULL
    );


    // Release cached frame.
    if ( frame_745639c50e2c7b0619be5295f62e229e == cache_frame_745639c50e2c7b0619be5295f62e229e )
    {
        Py_DECREF( frame_745639c50e2c7b0619be5295f62e229e );
    }
    cache_frame_745639c50e2c7b0619be5295f62e229e = NULL;

    assertFrameObject( frame_745639c50e2c7b0619be5295f62e229e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$signals$$$function_2_connect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_receiver );
    par_receiver = NULL;

    Py_XDECREF( par_sender );
    par_sender = NULL;

    Py_XDECREF( par_weak );
    par_weak = NULL;

    Py_XDECREF( par_dispatch_uid );
    par_dispatch_uid = NULL;

    Py_XDECREF( par_apps );
    par_apps = NULL;

    goto function_return_exit;
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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_receiver );
    par_receiver = NULL;

    Py_XDECREF( par_sender );
    par_sender = NULL;

    Py_XDECREF( par_weak );
    par_weak = NULL;

    Py_XDECREF( par_dispatch_uid );
    par_dispatch_uid = NULL;

    Py_XDECREF( par_apps );
    par_apps = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$signals$$$function_2_connect );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_django$db$models$signals$$$function_3_disconnect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_receiver = python_pars[ 1 ];
    PyObject *par_sender = python_pars[ 2 ];
    PyObject *par_weak = python_pars[ 3 ];
    PyObject *par_dispatch_uid = python_pars[ 4 ];
    PyObject *par_apps = python_pars[ 5 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    bool tmp_isnot_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_object_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5123aaa75e83144f3661a763c0c19e70 = NULL;

    struct Nuitka_FrameObject *frame_5123aaa75e83144f3661a763c0c19e70;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5123aaa75e83144f3661a763c0c19e70, codeobj_5123aaa75e83144f3661a763c0c19e70, module_django$db$models$signals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5123aaa75e83144f3661a763c0c19e70 = cache_frame_5123aaa75e83144f3661a763c0c19e70;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5123aaa75e83144f3661a763c0c19e70 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5123aaa75e83144f3661a763c0c19e70 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_weak;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_digest_031cf5a6398f1456075a1e013bc652f6;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_RemovedInDjango20Warning );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RemovedInDjango20Warning );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RemovedInDjango20Warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_f154c9a58c9419d7e391901d7b7fe49e );
    frame_5123aaa75e83144f3661a763c0c19e70->m_frame.f_lineno = 37;
    tmp_unused = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__lazy_method );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 4 );
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_ModelSignal );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ModelSignal );
    }

    if ( tmp_type_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ModelSignal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    if ( tmp_object_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 39;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_disconnect );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 39;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_apps;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "apps" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_receiver;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "receiver" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_sender;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sender" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 3, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_key_1 = const_str_plain_dispatch_uid;
    tmp_dict_value_1 = par_dispatch_uid;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dispatch_uid" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_5123aaa75e83144f3661a763c0c19e70->m_frame.f_lineno = 38;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "ooooooN";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5123aaa75e83144f3661a763c0c19e70 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5123aaa75e83144f3661a763c0c19e70 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5123aaa75e83144f3661a763c0c19e70 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5123aaa75e83144f3661a763c0c19e70, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5123aaa75e83144f3661a763c0c19e70->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5123aaa75e83144f3661a763c0c19e70, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5123aaa75e83144f3661a763c0c19e70,
        type_description_1,
        par_self,
        par_receiver,
        par_sender,
        par_weak,
        par_dispatch_uid,
        par_apps,
        NULL
    );


    // Release cached frame.
    if ( frame_5123aaa75e83144f3661a763c0c19e70 == cache_frame_5123aaa75e83144f3661a763c0c19e70 )
    {
        Py_DECREF( frame_5123aaa75e83144f3661a763c0c19e70 );
    }
    cache_frame_5123aaa75e83144f3661a763c0c19e70 = NULL;

    assertFrameObject( frame_5123aaa75e83144f3661a763c0c19e70 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$signals$$$function_3_disconnect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_receiver );
    par_receiver = NULL;

    Py_XDECREF( par_sender );
    par_sender = NULL;

    Py_XDECREF( par_weak );
    par_weak = NULL;

    Py_XDECREF( par_dispatch_uid );
    par_dispatch_uid = NULL;

    Py_XDECREF( par_apps );
    par_apps = NULL;

    goto function_return_exit;
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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_receiver );
    par_receiver = NULL;

    Py_XDECREF( par_sender );
    par_sender = NULL;

    Py_XDECREF( par_weak );
    par_weak = NULL;

    Py_XDECREF( par_dispatch_uid );
    par_dispatch_uid = NULL;

    Py_XDECREF( par_apps );
    par_apps = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$signals$$$function_3_disconnect );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_django$db$models$signals$$$function_1__lazy_method(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$db$models$signals$$$function_1__lazy_method,
        const_str_plain__lazy_method,
#if PYTHON_VERSION >= 330
        const_str_digest_60a4cc479704db4e3e7309d8347ebd47,
#endif
        codeobj_ef067dce319c345dc005be1570c69941,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$db$models$signals,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$db$models$signals$$$function_2_connect( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$db$models$signals$$$function_2_connect,
        const_str_plain_connect,
#if PYTHON_VERSION >= 330
        const_str_digest_c84a0ef38a5ec4155abb6a267aa6cb4b,
#endif
        codeobj_745639c50e2c7b0619be5295f62e229e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$db$models$signals,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$db$models$signals$$$function_3_disconnect( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$db$models$signals$$$function_3_disconnect,
        const_str_plain_disconnect,
#if PYTHON_VERSION >= 330
        const_str_digest_ffac811f3d97f365849414e781846d5f,
#endif
        codeobj_5123aaa75e83144f3661a763c0c19e70,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$db$models$signals,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$db$models$signals =
{
    PyModuleDef_HEAD_INIT,
    "django.db.models.signals",   /* m_name */
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

MOD_INIT_DECL( django$db$models$signals )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$db$models$signals );
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
    puts("django.db.models.signals: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.db.models.signals: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$db$models$signals" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$db$models$signals = Py_InitModule4(
        "django.db.models.signals",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$db$models$signals = PyModule_Create( &mdef_django$db$models$signals );
#endif

    moduledict_django$db$models$signals = MODULE_DICT( module_django$db$models$signals );

    CHECK_OBJECT( module_django$db$models$signals );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_e94867646a7b466ebe32bae5b9a4d819, module_django$db$models$signals );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_0_var___qualname__ = NULL;
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *outline_0_var__lazy_method = NULL;
    PyObject *outline_0_var_connect = NULL;
    PyObject *outline_0_var_disconnect = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_key_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
    PyObject *tmp_kw_name_7;
    PyObject *tmp_kw_name_8;
    PyObject *tmp_kw_name_9;
    PyObject *tmp_kw_name_10;
    PyObject *tmp_kw_name_11;
    PyObject *tmp_kw_name_12;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_type_arg_1;
    struct Nuitka_FrameObject *frame_272ac0beba970525735ec4f60d7246a9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    // Locals dictionary setup.
PyObject *locals_dict_1 = PyDict_New();


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_272ac0beba970525735ec4f60d7246a9 = MAKE_MODULE_FRAME( codeobj_272ac0beba970525735ec4f60d7246a9, module_django$db$models$signals );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_272ac0beba970525735ec4f60d7246a9 );
    assert( Py_REFCNT( frame_272ac0beba970525735ec4f60d7246a9 ) == 2 );

    // Framed code:
    frame_272ac0beba970525735ec4f60d7246a9->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_e94867646a7b466ebe32bae5b9a4d819;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_272ac0beba970525735ec4f60d7246a9->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_76151557ac4cfbca827b761e50d5fea2;
    UPDATE_STRING_DICT0( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_plain_warnings;
    tmp_globals_name_1 = (PyObject *)moduledict_django$db$models$signals;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_272ac0beba970525735ec4f60d7246a9->m_frame.f_lineno = 1;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_7 );
    tmp_name_name_2 = const_str_plain_functools;
    tmp_globals_name_2 = (PyObject *)moduledict_django$db$models$signals;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_partial_tuple;
    tmp_level_name_2 = const_int_0;
    frame_272ac0beba970525735ec4f60d7246a9->m_frame.f_lineno = 2;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_partial );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_partial, tmp_assign_source_8 );
    tmp_name_name_3 = const_str_digest_8530ae4788b11502fa0720c94717a318;
    tmp_globals_name_3 = (PyObject *)moduledict_django$db$models$signals;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_make_model_tuple_tuple;
    tmp_level_name_3 = const_int_0;
    frame_272ac0beba970525735ec4f60d7246a9->m_frame.f_lineno = 4;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_make_model_tuple );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_make_model_tuple, tmp_assign_source_9 );
    tmp_name_name_4 = const_str_digest_287a151b5f66f8e3cd4e02346aa22be8;
    tmp_globals_name_4 = (PyObject *)moduledict_django$db$models$signals;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_Signal_tuple;
    tmp_level_name_4 = const_int_0;
    frame_272ac0beba970525735ec4f60d7246a9->m_frame.f_lineno = 5;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_Signal );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_Signal, tmp_assign_source_10 );
    tmp_name_name_5 = const_str_digest_467c9722f19d9d40d148689532cdc0b1;
    tmp_globals_name_5 = (PyObject *)moduledict_django$db$models$signals;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_six_tuple;
    tmp_level_name_5 = const_int_0;
    frame_272ac0beba970525735ec4f60d7246a9->m_frame.f_lineno = 6;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_six );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_11 );
    tmp_name_name_6 = const_str_digest_f3705ed203bc8405b0735fb4179b32a8;
    tmp_globals_name_6 = (PyObject *)moduledict_django$db$models$signals;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_RemovedInDjango20Warning_tuple;
    tmp_level_name_6 = const_int_0;
    frame_272ac0beba970525735ec4f60d7246a9->m_frame.f_lineno = 7;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_RemovedInDjango20Warning );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_RemovedInDjango20Warning, tmp_assign_source_12 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_Signal );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Signal );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Signal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 10;

        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = DEEP_COPY( const_dict_a709d792bb4afe8fbb285373357f917a );
    frame_272ac0beba970525735ec4f60d7246a9->m_frame.f_lineno = 10;
    tmp_assign_source_13 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_class_prepared, tmp_assign_source_13 );
    // Tried code:
    tmp_assign_source_14 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_Signal );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Signal );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_14 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Signal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 13;

        goto try_except_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_14, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_14;

    tmp_assign_source_15 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_15;

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


        exception_lineno = 13;

        goto try_except_handler_1;
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


        exception_lineno = 13;

        goto try_except_handler_1;
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


        exception_lineno = 13;

        goto try_except_handler_1;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_1;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_16 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 13;

        goto try_except_handler_1;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_16;

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


        exception_lineno = 13;

        goto try_except_handler_1;
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


        exception_lineno = 13;

        goto try_except_handler_1;
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
    tmp_source_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___prepare__ );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_ModelSignal;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_272ac0beba970525735ec4f60d7246a9->m_frame.f_lineno = 13;
    tmp_assign_source_17 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_17 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_17;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_1);
    locals_dict_1 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_19 = const_str_digest_e94867646a7b466ebe32bae5b9a4d819;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_19 );
    outline_0_var___module__ = tmp_assign_source_19;

    tmp_assign_source_20 = const_str_digest_dd252976e469b926a229d891d565cb07;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_20 );
    outline_0_var___doc__ = tmp_assign_source_20;

    tmp_assign_source_21 = const_str_plain_ModelSignal;
    assert( outline_0_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_21 );
    outline_0_var___qualname__ = tmp_assign_source_21;

    tmp_assign_source_22 = MAKE_FUNCTION_django$db$models$signals$$$function_1__lazy_method(  );
    assert( outline_0_var__lazy_method == NULL );
    outline_0_var__lazy_method = tmp_assign_source_22;

    tmp_defaults_1 = const_tuple_none_true_none_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_23 = MAKE_FUNCTION_django$db$models$signals$$$function_2_connect( tmp_defaults_1 );
    assert( outline_0_var_connect == NULL );
    outline_0_var_connect = tmp_assign_source_23;

    tmp_defaults_2 = const_tuple_none_none_none_none_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_24 = MAKE_FUNCTION_django$db$models$signals$$$function_3_disconnect( tmp_defaults_2 );
    assert( outline_0_var_disconnect == NULL );
    outline_0_var_disconnect = tmp_assign_source_24;

    // Tried code:
    tmp_called_name_4 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_3 = const_str_plain_ModelSignal;
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

        exception_lineno = 13;

        goto try_except_handler_2;
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

        exception_lineno = 13;

        goto try_except_handler_2;
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

        exception_lineno = 13;

        goto try_except_handler_2;
    }
    if ( outline_0_var__lazy_method != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain__lazy_method,
            outline_0_var__lazy_method
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain__lazy_method
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain__lazy_method
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

        exception_lineno = 13;

        goto try_except_handler_2;
    }
    if ( outline_0_var_connect != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_connect,
            outline_0_var_connect
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_connect
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_connect
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

        exception_lineno = 13;

        goto try_except_handler_2;
    }
    if ( outline_0_var_disconnect != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_3,
            const_str_plain_disconnect,
            outline_0_var_disconnect
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_3,
            const_str_plain_disconnect
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_3,
                const_str_plain_disconnect
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

        exception_lineno = 13;

        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
    tmp_kw_name_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_272ac0beba970525735ec4f60d7246a9->m_frame.f_lineno = 13;
    tmp_assign_source_25 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_3 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_2;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_25;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$db$models$signals );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    Py_XDECREF( outline_0_var___qualname__ );
    outline_0_var___qualname__ = NULL;

    Py_XDECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    Py_XDECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    Py_XDECREF( outline_0_var__lazy_method );
    outline_0_var__lazy_method = NULL;

    Py_XDECREF( outline_0_var_connect );
    outline_0_var_connect = NULL;

    Py_XDECREF( outline_0_var_disconnect );
    outline_0_var_disconnect = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
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

    Py_XDECREF( outline_0_var__lazy_method );
    outline_0_var__lazy_method = NULL;

    Py_XDECREF( outline_0_var_connect );
    outline_0_var_connect = NULL;

    Py_XDECREF( outline_0_var_disconnect );
    outline_0_var_disconnect = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$db$models$signals );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 13;
    goto try_except_handler_1;
    outline_result_1:;
    tmp_assign_source_18 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_ModelSignal, tmp_assign_source_18 );
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
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
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_ModelSignal );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ModelSignal );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ModelSignal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;

        goto frame_exception_exit_1;
    }

    tmp_kw_name_4 = DEEP_COPY( const_dict_8461fdfbd38a65fa617ce32e93ead199 );
    frame_272ac0beba970525735ec4f60d7246a9->m_frame.f_lineno = 43;
    tmp_assign_source_26 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_5, tmp_kw_name_4 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_pre_init, tmp_assign_source_26 );
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_ModelSignal );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ModelSignal );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ModelSignal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;

        goto frame_exception_exit_1;
    }

    tmp_kw_name_5 = DEEP_COPY( const_dict_4fce67998921d791d6704e47f86b4670 );
    frame_272ac0beba970525735ec4f60d7246a9->m_frame.f_lineno = 44;
    tmp_assign_source_27 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_6, tmp_kw_name_5 );
    Py_DECREF( tmp_kw_name_5 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_post_init, tmp_assign_source_27 );
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_ModelSignal );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ModelSignal );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ModelSignal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;

        goto frame_exception_exit_1;
    }

    tmp_kw_name_6 = DEEP_COPY( const_dict_939348ab226bd85931784629a2a68a02 );
    frame_272ac0beba970525735ec4f60d7246a9->m_frame.f_lineno = 46;
    tmp_assign_source_28 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_7, tmp_kw_name_6 );
    Py_DECREF( tmp_kw_name_6 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_pre_save, tmp_assign_source_28 );
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_ModelSignal );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ModelSignal );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ModelSignal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;

        goto frame_exception_exit_1;
    }

    tmp_kw_name_7 = DEEP_COPY( const_dict_3a06eb0f5783fc2f370376b614893de1 );
    frame_272ac0beba970525735ec4f60d7246a9->m_frame.f_lineno = 48;
    tmp_assign_source_29 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_8, tmp_kw_name_7 );
    Py_DECREF( tmp_kw_name_7 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_post_save, tmp_assign_source_29 );
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_ModelSignal );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ModelSignal );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ModelSignal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;

        goto frame_exception_exit_1;
    }

    tmp_kw_name_8 = DEEP_COPY( const_dict_982c58099bc651286acc37ac771ba698 );
    frame_272ac0beba970525735ec4f60d7246a9->m_frame.f_lineno = 50;
    tmp_assign_source_30 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_9, tmp_kw_name_8 );
    Py_DECREF( tmp_kw_name_8 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_pre_delete, tmp_assign_source_30 );
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_ModelSignal );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ModelSignal );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ModelSignal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;

        goto frame_exception_exit_1;
    }

    tmp_kw_name_9 = DEEP_COPY( const_dict_982c58099bc651286acc37ac771ba698 );
    frame_272ac0beba970525735ec4f60d7246a9->m_frame.f_lineno = 51;
    tmp_assign_source_31 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_10, tmp_kw_name_9 );
    Py_DECREF( tmp_kw_name_9 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_post_delete, tmp_assign_source_31 );
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_ModelSignal );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ModelSignal );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ModelSignal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;

        goto frame_exception_exit_1;
    }

    tmp_kw_name_10 = DEEP_COPY( const_dict_69900f987d1ccbf91a947949a5fbacd6 );
    frame_272ac0beba970525735ec4f60d7246a9->m_frame.f_lineno = 53;
    tmp_assign_source_32 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_11, tmp_kw_name_10 );
    Py_DECREF( tmp_kw_name_10 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_m2m_changed, tmp_assign_source_32 );
    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_Signal );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Signal );
    }

    if ( tmp_called_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Signal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;

        goto frame_exception_exit_1;
    }

    tmp_kw_name_11 = DEEP_COPY( const_dict_97f7331bc56c94fa17bcea314bcbfbf9 );
    frame_272ac0beba970525735ec4f60d7246a9->m_frame.f_lineno = 58;
    tmp_assign_source_33 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_12, tmp_kw_name_11 );
    Py_DECREF( tmp_kw_name_11 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_pre_migrate, tmp_assign_source_33 );
    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_Signal );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Signal );
    }

    if ( tmp_called_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Signal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;

        goto frame_exception_exit_1;
    }

    tmp_kw_name_12 = DEEP_COPY( const_dict_97f7331bc56c94fa17bcea314bcbfbf9 );
    frame_272ac0beba970525735ec4f60d7246a9->m_frame.f_lineno = 59;
    tmp_assign_source_34 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_13, tmp_kw_name_12 );
    Py_DECREF( tmp_kw_name_12 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_django$db$models$signals, (Nuitka_StringObject *)const_str_plain_post_migrate, tmp_assign_source_34 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_272ac0beba970525735ec4f60d7246a9 );
#endif
    popFrameStack();

    assertFrameObject( frame_272ac0beba970525735ec4f60d7246a9 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_272ac0beba970525735ec4f60d7246a9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_272ac0beba970525735ec4f60d7246a9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_272ac0beba970525735ec4f60d7246a9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_272ac0beba970525735ec4f60d7246a9, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_django$db$models$signals );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
