/* Generated code for Python source for module 'django.core.files.utils'
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

/* The _module_django$core$files$utils is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_django$core$files$utils;
PyDictObject *moduledict_django$core$files$utils;

/* The module constants used, if any. */
extern PyObject *const_str_plain_readlines;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_closed;
static PyObject *const_str_digest_7b9d72fdb4722f776c2af09307c0e4e6;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_newlines;
static PyObject *const_str_digest_5991695870aa27645f96835cf638904c;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_dict_empty;
static PyObject *const_str_digest_139dc27cc62ea99e8a4c960efd50cb2f;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_102342d390fc6b7a5fda9a679cfabbbb;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_str_digest_c9523883a023b68eb6891d4ff556972b;
extern PyObject *const_str_plain_readline;
static PyObject *const_str_plain_softspace;
extern PyObject *const_str_plain_truncate;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_w;
static PyObject *const_str_digest_98c500c002be6ed03f2c520eaff0e5a8;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_fileno;
extern PyObject *const_str_plain_FileProxyMixin;
extern PyObject *const_str_plain_writelines;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_mode;
extern PyObject *const_str_plain_seek;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_plain_readinto;
extern PyObject *const_str_plain_seekable;
extern PyObject *const_str_plain_isatty;
static PyObject *const_tuple_2f4e25441a4c448459af3ec395dac938_tuple;
static PyObject *const_str_digest_099ecd6bf74fba4d2dd767c94a212e55;
static PyObject *const_str_digest_a701090667a318164d7bdcdc876c2c3d;
extern PyObject *const_str_plain_readable;
extern PyObject *const_str_plain_xreadlines;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_e9cdd5b18c2b4a1df2511072334bbcef;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_angle_lambda;
extern PyObject *const_str_digest_09be10fde7aee5d022fb2ff0b2af134a;
extern PyObject *const_str_plain_flush;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_plain_tell;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain___iter__;
static PyObject *const_str_digest_8ec2cc1a9a129919cdfdced04a7125f3;
extern PyObject *const_str_plain_file;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_writable;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_7b9d72fdb4722f776c2af09307c0e4e6 = UNSTREAM_STRING( &constant_bin[ 789979 ], 23, 0 );
    const_str_plain_newlines = UNSTREAM_STRING( &constant_bin[ 790002 ], 8, 1 );
    const_str_digest_5991695870aa27645f96835cf638904c = UNSTREAM_STRING( &constant_bin[ 790010 ], 23, 0 );
    const_str_digest_139dc27cc62ea99e8a4c960efd50cb2f = UNSTREAM_STRING( &constant_bin[ 790033 ], 252, 0 );
    const_str_digest_102342d390fc6b7a5fda9a679cfabbbb = UNSTREAM_STRING( &constant_bin[ 790285 ], 23, 0 );
    const_str_plain_softspace = UNSTREAM_STRING( &constant_bin[ 790308 ], 9, 1 );
    const_str_digest_98c500c002be6ed03f2c520eaff0e5a8 = UNSTREAM_STRING( &constant_bin[ 790317 ], 32, 0 );
    const_tuple_2f4e25441a4c448459af3ec395dac938_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 790349 ], 240 );
    const_str_digest_099ecd6bf74fba4d2dd767c94a212e55 = UNSTREAM_STRING( &constant_bin[ 790589 ], 21, 0 );
    const_str_digest_a701090667a318164d7bdcdc876c2c3d = UNSTREAM_STRING( &constant_bin[ 790610 ], 23, 0 );
    const_str_digest_e9cdd5b18c2b4a1df2511072334bbcef = UNSTREAM_STRING( &constant_bin[ 790633 ], 23, 0 );
    const_str_digest_8ec2cc1a9a129919cdfdced04a7125f3 = UNSTREAM_STRING( &constant_bin[ 790656 ], 26, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_django$core$files$utils( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_4c319adc773db995d4a37d76263c16dc;
static PyCodeObject *codeobj_d15e23a24336c0bcc90a79d2198359cb;
static PyCodeObject *codeobj_9ef0f67661b1b0304659537c04eaafb4;
static PyCodeObject *codeobj_be473e392073b6d0be624c76273bfeeb;
static PyCodeObject *codeobj_0304422980922311540395a0e7bfaa66;
static PyCodeObject *codeobj_652f00f79c853315772441e0ed85d41a;
static PyCodeObject *codeobj_8631212c203d26c65925d0163723b63f;
static PyCodeObject *codeobj_93d7191b5866418cea46d16d17f988df;
static PyCodeObject *codeobj_9559c57ec74636cd3073c7ff6704fe42;
static PyCodeObject *codeobj_705474274cbd6bd4b80b5805061c27a3;
static PyCodeObject *codeobj_26f0779006eb649f01d68875de763d7c;
static PyCodeObject *codeobj_83ed49f801bc3c837aaf86cc3456d125;
static PyCodeObject *codeobj_2277a14f2fcb65787e850dcb8c536746;
static PyCodeObject *codeobj_fee4c5e09b7f378e62c551cfee5a3b5f;
static PyCodeObject *codeobj_aa725507d509ddede89b2f3262b13d48;
static PyCodeObject *codeobj_d4208fe3ffa295065513fc3f12a80740;
static PyCodeObject *codeobj_a162e84121e5104de3a01a6a99c3e607;
static PyCodeObject *codeobj_d9f0ac64bef9cbd2bcc4815bbb989d47;
static PyCodeObject *codeobj_95bd92a080dab4a6e45f6d8b6bbb9467;
static PyCodeObject *codeobj_f213a3749d871a3f75b82e83b2790755;
static PyCodeObject *codeobj_94857a5a37c73fc0cf5178dd72dc3db4;
static PyCodeObject *codeobj_5d1e68411ffe10b895a46e81b54cfe1e;
static PyCodeObject *codeobj_fdc9e55186f119c8dd8d8b4d5b356257;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_8ec2cc1a9a129919cdfdced04a7125f3 );
    codeobj_4c319adc773db995d4a37d76263c16dc = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 11, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d15e23a24336c0bcc90a79d2198359cb = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 12, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9ef0f67661b1b0304659537c04eaafb4 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 13, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_be473e392073b6d0be624c76273bfeeb = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 14, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0304422980922311540395a0e7bfaa66 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 15, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_652f00f79c853315772441e0ed85d41a = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 16, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8631212c203d26c65925d0163723b63f = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 17, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_93d7191b5866418cea46d16d17f988df = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 18, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9559c57ec74636cd3073c7ff6704fe42 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 19, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_705474274cbd6bd4b80b5805061c27a3 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 20, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_26f0779006eb649f01d68875de763d7c = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 21, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_83ed49f801bc3c837aaf86cc3456d125 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 22, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2277a14f2fcb65787e850dcb8c536746 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 23, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fee4c5e09b7f378e62c551cfee5a3b5f = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 24, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_aa725507d509ddede89b2f3262b13d48 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 25, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d4208fe3ffa295065513fc3f12a80740 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 26, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a162e84121e5104de3a01a6a99c3e607 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_98c500c002be6ed03f2c520eaff0e5a8, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_d9f0ac64bef9cbd2bcc4815bbb989d47 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_FileProxyMixin, 1, const_tuple_2f4e25441a4c448459af3ec395dac938_tuple, 0, 0, CO_NOFREE );
    codeobj_95bd92a080dab4a6e45f6d8b6bbb9467 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___iter__, 53, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f213a3749d871a3f75b82e83b2790755 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_closed, 28, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_94857a5a37c73fc0cf5178dd72dc3db4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_readable, 32, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5d1e68411ffe10b895a46e81b54cfe1e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_seekable, 46, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fdc9e55186f119c8dd8d8b4d5b356257 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_writable, 39, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_10_lambda(  );


static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_11_lambda(  );


static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_12_lambda(  );


static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_13_lambda(  );


static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_14_lambda(  );


static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_15_lambda(  );


static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_16_lambda(  );


static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_17_closed(  );


static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_18_readable(  );


static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_19_writable(  );


static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_20_seekable(  );


static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_21___iter__(  );


static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_2_lambda(  );


static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_3_lambda(  );


static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_4_lambda(  );


static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_5_lambda(  );


static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_6_lambda(  );


static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_7_lambda(  );


static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_8_lambda(  );


static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_9_lambda(  );


// The module function definitions.
static PyObject *impl_django$core$files$utils$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_4c319adc773db995d4a37d76263c16dc = NULL;

    struct Nuitka_FrameObject *frame_4c319adc773db995d4a37d76263c16dc;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4c319adc773db995d4a37d76263c16dc, codeobj_4c319adc773db995d4a37d76263c16dc, module_django$core$files$utils, sizeof(void *) );
    frame_4c319adc773db995d4a37d76263c16dc = cache_frame_4c319adc773db995d4a37d76263c16dc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4c319adc773db995d4a37d76263c16dc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4c319adc773db995d4a37d76263c16dc ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_file );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_encoding );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c319adc773db995d4a37d76263c16dc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c319adc773db995d4a37d76263c16dc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c319adc773db995d4a37d76263c16dc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4c319adc773db995d4a37d76263c16dc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4c319adc773db995d4a37d76263c16dc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4c319adc773db995d4a37d76263c16dc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4c319adc773db995d4a37d76263c16dc,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_4c319adc773db995d4a37d76263c16dc == cache_frame_4c319adc773db995d4a37d76263c16dc )
    {
        Py_DECREF( frame_4c319adc773db995d4a37d76263c16dc );
    }
    cache_frame_4c319adc773db995d4a37d76263c16dc = NULL;

    assertFrameObject( frame_4c319adc773db995d4a37d76263c16dc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_1_lambda );
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


static PyObject *impl_django$core$files$utils$$$function_2_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_d15e23a24336c0bcc90a79d2198359cb = NULL;

    struct Nuitka_FrameObject *frame_d15e23a24336c0bcc90a79d2198359cb;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d15e23a24336c0bcc90a79d2198359cb, codeobj_d15e23a24336c0bcc90a79d2198359cb, module_django$core$files$utils, sizeof(void *) );
    frame_d15e23a24336c0bcc90a79d2198359cb = cache_frame_d15e23a24336c0bcc90a79d2198359cb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d15e23a24336c0bcc90a79d2198359cb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d15e23a24336c0bcc90a79d2198359cb ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_file );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_fileno );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d15e23a24336c0bcc90a79d2198359cb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d15e23a24336c0bcc90a79d2198359cb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d15e23a24336c0bcc90a79d2198359cb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d15e23a24336c0bcc90a79d2198359cb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d15e23a24336c0bcc90a79d2198359cb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d15e23a24336c0bcc90a79d2198359cb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d15e23a24336c0bcc90a79d2198359cb,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_d15e23a24336c0bcc90a79d2198359cb == cache_frame_d15e23a24336c0bcc90a79d2198359cb )
    {
        Py_DECREF( frame_d15e23a24336c0bcc90a79d2198359cb );
    }
    cache_frame_d15e23a24336c0bcc90a79d2198359cb = NULL;

    assertFrameObject( frame_d15e23a24336c0bcc90a79d2198359cb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_2_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_2_lambda );
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


static PyObject *impl_django$core$files$utils$$$function_3_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_9ef0f67661b1b0304659537c04eaafb4 = NULL;

    struct Nuitka_FrameObject *frame_9ef0f67661b1b0304659537c04eaafb4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9ef0f67661b1b0304659537c04eaafb4, codeobj_9ef0f67661b1b0304659537c04eaafb4, module_django$core$files$utils, sizeof(void *) );
    frame_9ef0f67661b1b0304659537c04eaafb4 = cache_frame_9ef0f67661b1b0304659537c04eaafb4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9ef0f67661b1b0304659537c04eaafb4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9ef0f67661b1b0304659537c04eaafb4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_file );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_flush );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9ef0f67661b1b0304659537c04eaafb4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9ef0f67661b1b0304659537c04eaafb4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9ef0f67661b1b0304659537c04eaafb4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9ef0f67661b1b0304659537c04eaafb4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9ef0f67661b1b0304659537c04eaafb4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9ef0f67661b1b0304659537c04eaafb4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9ef0f67661b1b0304659537c04eaafb4,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_9ef0f67661b1b0304659537c04eaafb4 == cache_frame_9ef0f67661b1b0304659537c04eaafb4 )
    {
        Py_DECREF( frame_9ef0f67661b1b0304659537c04eaafb4 );
    }
    cache_frame_9ef0f67661b1b0304659537c04eaafb4 = NULL;

    assertFrameObject( frame_9ef0f67661b1b0304659537c04eaafb4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_3_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_3_lambda );
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


static PyObject *impl_django$core$files$utils$$$function_4_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_be473e392073b6d0be624c76273bfeeb = NULL;

    struct Nuitka_FrameObject *frame_be473e392073b6d0be624c76273bfeeb;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_be473e392073b6d0be624c76273bfeeb, codeobj_be473e392073b6d0be624c76273bfeeb, module_django$core$files$utils, sizeof(void *) );
    frame_be473e392073b6d0be624c76273bfeeb = cache_frame_be473e392073b6d0be624c76273bfeeb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_be473e392073b6d0be624c76273bfeeb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_be473e392073b6d0be624c76273bfeeb ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_file );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_isatty );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be473e392073b6d0be624c76273bfeeb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_be473e392073b6d0be624c76273bfeeb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_be473e392073b6d0be624c76273bfeeb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_be473e392073b6d0be624c76273bfeeb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_be473e392073b6d0be624c76273bfeeb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_be473e392073b6d0be624c76273bfeeb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_be473e392073b6d0be624c76273bfeeb,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_be473e392073b6d0be624c76273bfeeb == cache_frame_be473e392073b6d0be624c76273bfeeb )
    {
        Py_DECREF( frame_be473e392073b6d0be624c76273bfeeb );
    }
    cache_frame_be473e392073b6d0be624c76273bfeeb = NULL;

    assertFrameObject( frame_be473e392073b6d0be624c76273bfeeb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_4_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_4_lambda );
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


static PyObject *impl_django$core$files$utils$$$function_5_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_0304422980922311540395a0e7bfaa66 = NULL;

    struct Nuitka_FrameObject *frame_0304422980922311540395a0e7bfaa66;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0304422980922311540395a0e7bfaa66, codeobj_0304422980922311540395a0e7bfaa66, module_django$core$files$utils, sizeof(void *) );
    frame_0304422980922311540395a0e7bfaa66 = cache_frame_0304422980922311540395a0e7bfaa66;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0304422980922311540395a0e7bfaa66 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0304422980922311540395a0e7bfaa66 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_file );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_newlines );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0304422980922311540395a0e7bfaa66 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0304422980922311540395a0e7bfaa66 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0304422980922311540395a0e7bfaa66 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0304422980922311540395a0e7bfaa66, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0304422980922311540395a0e7bfaa66->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0304422980922311540395a0e7bfaa66, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0304422980922311540395a0e7bfaa66,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_0304422980922311540395a0e7bfaa66 == cache_frame_0304422980922311540395a0e7bfaa66 )
    {
        Py_DECREF( frame_0304422980922311540395a0e7bfaa66 );
    }
    cache_frame_0304422980922311540395a0e7bfaa66 = NULL;

    assertFrameObject( frame_0304422980922311540395a0e7bfaa66 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_5_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_5_lambda );
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


static PyObject *impl_django$core$files$utils$$$function_6_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_652f00f79c853315772441e0ed85d41a = NULL;

    struct Nuitka_FrameObject *frame_652f00f79c853315772441e0ed85d41a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_652f00f79c853315772441e0ed85d41a, codeobj_652f00f79c853315772441e0ed85d41a, module_django$core$files$utils, sizeof(void *) );
    frame_652f00f79c853315772441e0ed85d41a = cache_frame_652f00f79c853315772441e0ed85d41a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_652f00f79c853315772441e0ed85d41a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_652f00f79c853315772441e0ed85d41a ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_file );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_read );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_652f00f79c853315772441e0ed85d41a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_652f00f79c853315772441e0ed85d41a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_652f00f79c853315772441e0ed85d41a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_652f00f79c853315772441e0ed85d41a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_652f00f79c853315772441e0ed85d41a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_652f00f79c853315772441e0ed85d41a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_652f00f79c853315772441e0ed85d41a,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_652f00f79c853315772441e0ed85d41a == cache_frame_652f00f79c853315772441e0ed85d41a )
    {
        Py_DECREF( frame_652f00f79c853315772441e0ed85d41a );
    }
    cache_frame_652f00f79c853315772441e0ed85d41a = NULL;

    assertFrameObject( frame_652f00f79c853315772441e0ed85d41a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_6_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_6_lambda );
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


static PyObject *impl_django$core$files$utils$$$function_7_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_8631212c203d26c65925d0163723b63f = NULL;

    struct Nuitka_FrameObject *frame_8631212c203d26c65925d0163723b63f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8631212c203d26c65925d0163723b63f, codeobj_8631212c203d26c65925d0163723b63f, module_django$core$files$utils, sizeof(void *) );
    frame_8631212c203d26c65925d0163723b63f = cache_frame_8631212c203d26c65925d0163723b63f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8631212c203d26c65925d0163723b63f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8631212c203d26c65925d0163723b63f ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_file );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_readinto );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8631212c203d26c65925d0163723b63f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8631212c203d26c65925d0163723b63f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8631212c203d26c65925d0163723b63f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8631212c203d26c65925d0163723b63f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8631212c203d26c65925d0163723b63f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8631212c203d26c65925d0163723b63f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8631212c203d26c65925d0163723b63f,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_8631212c203d26c65925d0163723b63f == cache_frame_8631212c203d26c65925d0163723b63f )
    {
        Py_DECREF( frame_8631212c203d26c65925d0163723b63f );
    }
    cache_frame_8631212c203d26c65925d0163723b63f = NULL;

    assertFrameObject( frame_8631212c203d26c65925d0163723b63f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_7_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_7_lambda );
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


static PyObject *impl_django$core$files$utils$$$function_8_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_93d7191b5866418cea46d16d17f988df = NULL;

    struct Nuitka_FrameObject *frame_93d7191b5866418cea46d16d17f988df;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_93d7191b5866418cea46d16d17f988df, codeobj_93d7191b5866418cea46d16d17f988df, module_django$core$files$utils, sizeof(void *) );
    frame_93d7191b5866418cea46d16d17f988df = cache_frame_93d7191b5866418cea46d16d17f988df;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_93d7191b5866418cea46d16d17f988df );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_93d7191b5866418cea46d16d17f988df ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_file );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_readline );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_93d7191b5866418cea46d16d17f988df );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_93d7191b5866418cea46d16d17f988df );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_93d7191b5866418cea46d16d17f988df );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_93d7191b5866418cea46d16d17f988df, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_93d7191b5866418cea46d16d17f988df->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_93d7191b5866418cea46d16d17f988df, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_93d7191b5866418cea46d16d17f988df,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_93d7191b5866418cea46d16d17f988df == cache_frame_93d7191b5866418cea46d16d17f988df )
    {
        Py_DECREF( frame_93d7191b5866418cea46d16d17f988df );
    }
    cache_frame_93d7191b5866418cea46d16d17f988df = NULL;

    assertFrameObject( frame_93d7191b5866418cea46d16d17f988df );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_8_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_8_lambda );
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


static PyObject *impl_django$core$files$utils$$$function_9_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_9559c57ec74636cd3073c7ff6704fe42 = NULL;

    struct Nuitka_FrameObject *frame_9559c57ec74636cd3073c7ff6704fe42;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9559c57ec74636cd3073c7ff6704fe42, codeobj_9559c57ec74636cd3073c7ff6704fe42, module_django$core$files$utils, sizeof(void *) );
    frame_9559c57ec74636cd3073c7ff6704fe42 = cache_frame_9559c57ec74636cd3073c7ff6704fe42;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9559c57ec74636cd3073c7ff6704fe42 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9559c57ec74636cd3073c7ff6704fe42 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_file );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_readlines );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9559c57ec74636cd3073c7ff6704fe42 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9559c57ec74636cd3073c7ff6704fe42 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9559c57ec74636cd3073c7ff6704fe42 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9559c57ec74636cd3073c7ff6704fe42, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9559c57ec74636cd3073c7ff6704fe42->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9559c57ec74636cd3073c7ff6704fe42, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9559c57ec74636cd3073c7ff6704fe42,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_9559c57ec74636cd3073c7ff6704fe42 == cache_frame_9559c57ec74636cd3073c7ff6704fe42 )
    {
        Py_DECREF( frame_9559c57ec74636cd3073c7ff6704fe42 );
    }
    cache_frame_9559c57ec74636cd3073c7ff6704fe42 = NULL;

    assertFrameObject( frame_9559c57ec74636cd3073c7ff6704fe42 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_9_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_9_lambda );
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


static PyObject *impl_django$core$files$utils$$$function_10_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_705474274cbd6bd4b80b5805061c27a3 = NULL;

    struct Nuitka_FrameObject *frame_705474274cbd6bd4b80b5805061c27a3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_705474274cbd6bd4b80b5805061c27a3, codeobj_705474274cbd6bd4b80b5805061c27a3, module_django$core$files$utils, sizeof(void *) );
    frame_705474274cbd6bd4b80b5805061c27a3 = cache_frame_705474274cbd6bd4b80b5805061c27a3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_705474274cbd6bd4b80b5805061c27a3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_705474274cbd6bd4b80b5805061c27a3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_file );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_seek );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_705474274cbd6bd4b80b5805061c27a3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_705474274cbd6bd4b80b5805061c27a3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_705474274cbd6bd4b80b5805061c27a3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_705474274cbd6bd4b80b5805061c27a3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_705474274cbd6bd4b80b5805061c27a3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_705474274cbd6bd4b80b5805061c27a3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_705474274cbd6bd4b80b5805061c27a3,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_705474274cbd6bd4b80b5805061c27a3 == cache_frame_705474274cbd6bd4b80b5805061c27a3 )
    {
        Py_DECREF( frame_705474274cbd6bd4b80b5805061c27a3 );
    }
    cache_frame_705474274cbd6bd4b80b5805061c27a3 = NULL;

    assertFrameObject( frame_705474274cbd6bd4b80b5805061c27a3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_10_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_10_lambda );
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


static PyObject *impl_django$core$files$utils$$$function_11_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_26f0779006eb649f01d68875de763d7c = NULL;

    struct Nuitka_FrameObject *frame_26f0779006eb649f01d68875de763d7c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_26f0779006eb649f01d68875de763d7c, codeobj_26f0779006eb649f01d68875de763d7c, module_django$core$files$utils, sizeof(void *) );
    frame_26f0779006eb649f01d68875de763d7c = cache_frame_26f0779006eb649f01d68875de763d7c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_26f0779006eb649f01d68875de763d7c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_26f0779006eb649f01d68875de763d7c ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_file );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_softspace );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_26f0779006eb649f01d68875de763d7c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_26f0779006eb649f01d68875de763d7c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_26f0779006eb649f01d68875de763d7c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_26f0779006eb649f01d68875de763d7c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_26f0779006eb649f01d68875de763d7c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_26f0779006eb649f01d68875de763d7c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_26f0779006eb649f01d68875de763d7c,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_26f0779006eb649f01d68875de763d7c == cache_frame_26f0779006eb649f01d68875de763d7c )
    {
        Py_DECREF( frame_26f0779006eb649f01d68875de763d7c );
    }
    cache_frame_26f0779006eb649f01d68875de763d7c = NULL;

    assertFrameObject( frame_26f0779006eb649f01d68875de763d7c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_11_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_11_lambda );
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


static PyObject *impl_django$core$files$utils$$$function_12_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_83ed49f801bc3c837aaf86cc3456d125 = NULL;

    struct Nuitka_FrameObject *frame_83ed49f801bc3c837aaf86cc3456d125;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_83ed49f801bc3c837aaf86cc3456d125, codeobj_83ed49f801bc3c837aaf86cc3456d125, module_django$core$files$utils, sizeof(void *) );
    frame_83ed49f801bc3c837aaf86cc3456d125 = cache_frame_83ed49f801bc3c837aaf86cc3456d125;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_83ed49f801bc3c837aaf86cc3456d125 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_83ed49f801bc3c837aaf86cc3456d125 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_file );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_tell );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_83ed49f801bc3c837aaf86cc3456d125 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_83ed49f801bc3c837aaf86cc3456d125 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_83ed49f801bc3c837aaf86cc3456d125 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_83ed49f801bc3c837aaf86cc3456d125, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_83ed49f801bc3c837aaf86cc3456d125->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_83ed49f801bc3c837aaf86cc3456d125, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_83ed49f801bc3c837aaf86cc3456d125,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_83ed49f801bc3c837aaf86cc3456d125 == cache_frame_83ed49f801bc3c837aaf86cc3456d125 )
    {
        Py_DECREF( frame_83ed49f801bc3c837aaf86cc3456d125 );
    }
    cache_frame_83ed49f801bc3c837aaf86cc3456d125 = NULL;

    assertFrameObject( frame_83ed49f801bc3c837aaf86cc3456d125 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_12_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_12_lambda );
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


static PyObject *impl_django$core$files$utils$$$function_13_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_2277a14f2fcb65787e850dcb8c536746 = NULL;

    struct Nuitka_FrameObject *frame_2277a14f2fcb65787e850dcb8c536746;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2277a14f2fcb65787e850dcb8c536746, codeobj_2277a14f2fcb65787e850dcb8c536746, module_django$core$files$utils, sizeof(void *) );
    frame_2277a14f2fcb65787e850dcb8c536746 = cache_frame_2277a14f2fcb65787e850dcb8c536746;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2277a14f2fcb65787e850dcb8c536746 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2277a14f2fcb65787e850dcb8c536746 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_file );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_truncate );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2277a14f2fcb65787e850dcb8c536746 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2277a14f2fcb65787e850dcb8c536746 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2277a14f2fcb65787e850dcb8c536746 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2277a14f2fcb65787e850dcb8c536746, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2277a14f2fcb65787e850dcb8c536746->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2277a14f2fcb65787e850dcb8c536746, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2277a14f2fcb65787e850dcb8c536746,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_2277a14f2fcb65787e850dcb8c536746 == cache_frame_2277a14f2fcb65787e850dcb8c536746 )
    {
        Py_DECREF( frame_2277a14f2fcb65787e850dcb8c536746 );
    }
    cache_frame_2277a14f2fcb65787e850dcb8c536746 = NULL;

    assertFrameObject( frame_2277a14f2fcb65787e850dcb8c536746 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_13_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_13_lambda );
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


static PyObject *impl_django$core$files$utils$$$function_14_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_fee4c5e09b7f378e62c551cfee5a3b5f = NULL;

    struct Nuitka_FrameObject *frame_fee4c5e09b7f378e62c551cfee5a3b5f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fee4c5e09b7f378e62c551cfee5a3b5f, codeobj_fee4c5e09b7f378e62c551cfee5a3b5f, module_django$core$files$utils, sizeof(void *) );
    frame_fee4c5e09b7f378e62c551cfee5a3b5f = cache_frame_fee4c5e09b7f378e62c551cfee5a3b5f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fee4c5e09b7f378e62c551cfee5a3b5f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fee4c5e09b7f378e62c551cfee5a3b5f ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_file );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_write );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fee4c5e09b7f378e62c551cfee5a3b5f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fee4c5e09b7f378e62c551cfee5a3b5f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fee4c5e09b7f378e62c551cfee5a3b5f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fee4c5e09b7f378e62c551cfee5a3b5f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fee4c5e09b7f378e62c551cfee5a3b5f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fee4c5e09b7f378e62c551cfee5a3b5f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fee4c5e09b7f378e62c551cfee5a3b5f,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_fee4c5e09b7f378e62c551cfee5a3b5f == cache_frame_fee4c5e09b7f378e62c551cfee5a3b5f )
    {
        Py_DECREF( frame_fee4c5e09b7f378e62c551cfee5a3b5f );
    }
    cache_frame_fee4c5e09b7f378e62c551cfee5a3b5f = NULL;

    assertFrameObject( frame_fee4c5e09b7f378e62c551cfee5a3b5f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_14_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_14_lambda );
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


static PyObject *impl_django$core$files$utils$$$function_15_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_aa725507d509ddede89b2f3262b13d48 = NULL;

    struct Nuitka_FrameObject *frame_aa725507d509ddede89b2f3262b13d48;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_aa725507d509ddede89b2f3262b13d48, codeobj_aa725507d509ddede89b2f3262b13d48, module_django$core$files$utils, sizeof(void *) );
    frame_aa725507d509ddede89b2f3262b13d48 = cache_frame_aa725507d509ddede89b2f3262b13d48;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_aa725507d509ddede89b2f3262b13d48 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_aa725507d509ddede89b2f3262b13d48 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_file );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_writelines );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa725507d509ddede89b2f3262b13d48 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa725507d509ddede89b2f3262b13d48 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa725507d509ddede89b2f3262b13d48 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aa725507d509ddede89b2f3262b13d48, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aa725507d509ddede89b2f3262b13d48->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aa725507d509ddede89b2f3262b13d48, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_aa725507d509ddede89b2f3262b13d48,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_aa725507d509ddede89b2f3262b13d48 == cache_frame_aa725507d509ddede89b2f3262b13d48 )
    {
        Py_DECREF( frame_aa725507d509ddede89b2f3262b13d48 );
    }
    cache_frame_aa725507d509ddede89b2f3262b13d48 = NULL;

    assertFrameObject( frame_aa725507d509ddede89b2f3262b13d48 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_15_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_15_lambda );
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


static PyObject *impl_django$core$files$utils$$$function_16_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_d4208fe3ffa295065513fc3f12a80740 = NULL;

    struct Nuitka_FrameObject *frame_d4208fe3ffa295065513fc3f12a80740;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d4208fe3ffa295065513fc3f12a80740, codeobj_d4208fe3ffa295065513fc3f12a80740, module_django$core$files$utils, sizeof(void *) );
    frame_d4208fe3ffa295065513fc3f12a80740 = cache_frame_d4208fe3ffa295065513fc3f12a80740;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d4208fe3ffa295065513fc3f12a80740 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d4208fe3ffa295065513fc3f12a80740 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_file );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_xreadlines );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d4208fe3ffa295065513fc3f12a80740 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d4208fe3ffa295065513fc3f12a80740 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d4208fe3ffa295065513fc3f12a80740 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d4208fe3ffa295065513fc3f12a80740, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d4208fe3ffa295065513fc3f12a80740->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d4208fe3ffa295065513fc3f12a80740, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d4208fe3ffa295065513fc3f12a80740,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_d4208fe3ffa295065513fc3f12a80740 == cache_frame_d4208fe3ffa295065513fc3f12a80740 )
    {
        Py_DECREF( frame_d4208fe3ffa295065513fc3f12a80740 );
    }
    cache_frame_d4208fe3ffa295065513fc3f12a80740 = NULL;

    assertFrameObject( frame_d4208fe3ffa295065513fc3f12a80740 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_16_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_16_lambda );
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


static PyObject *impl_django$core$files$utils$$$function_17_closed( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_f213a3749d871a3f75b82e83b2790755 = NULL;

    struct Nuitka_FrameObject *frame_f213a3749d871a3f75b82e83b2790755;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f213a3749d871a3f75b82e83b2790755, codeobj_f213a3749d871a3f75b82e83b2790755, module_django$core$files$utils, sizeof(void *) );
    frame_f213a3749d871a3f75b82e83b2790755 = cache_frame_f213a3749d871a3f75b82e83b2790755;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f213a3749d871a3f75b82e83b2790755 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f213a3749d871a3f75b82e83b2790755 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_file );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "o";
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
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 30;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_file );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_closed );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_return_value = tmp_or_left_value_1;
    or_end_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f213a3749d871a3f75b82e83b2790755 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f213a3749d871a3f75b82e83b2790755 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f213a3749d871a3f75b82e83b2790755 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f213a3749d871a3f75b82e83b2790755, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f213a3749d871a3f75b82e83b2790755->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f213a3749d871a3f75b82e83b2790755, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f213a3749d871a3f75b82e83b2790755,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_f213a3749d871a3f75b82e83b2790755 == cache_frame_f213a3749d871a3f75b82e83b2790755 )
    {
        Py_DECREF( frame_f213a3749d871a3f75b82e83b2790755 );
    }
    cache_frame_f213a3749d871a3f75b82e83b2790755 = NULL;

    assertFrameObject( frame_f213a3749d871a3f75b82e83b2790755 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_17_closed );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_17_closed );
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


static PyObject *impl_django$core$files$utils$$$function_18_readable( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_94857a5a37c73fc0cf5178dd72dc3db4 = NULL;

    struct Nuitka_FrameObject *frame_94857a5a37c73fc0cf5178dd72dc3db4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_94857a5a37c73fc0cf5178dd72dc3db4, codeobj_94857a5a37c73fc0cf5178dd72dc3db4, module_django$core$files$utils, sizeof(void *) );
    frame_94857a5a37c73fc0cf5178dd72dc3db4 = cache_frame_94857a5a37c73fc0cf5178dd72dc3db4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_94857a5a37c73fc0cf5178dd72dc3db4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_94857a5a37c73fc0cf5178dd72dc3db4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_closed );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 33;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
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

        exception_lineno = 35;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_hasattr_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_file );
    if ( tmp_hasattr_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_hasattr_attr_1 = const_str_plain_readable;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    Py_DECREF( tmp_hasattr_source_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_file );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_94857a5a37c73fc0cf5178dd72dc3db4->m_frame.f_lineno = 36;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_readable );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94857a5a37c73fc0cf5178dd72dc3db4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_94857a5a37c73fc0cf5178dd72dc3db4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94857a5a37c73fc0cf5178dd72dc3db4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_94857a5a37c73fc0cf5178dd72dc3db4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_94857a5a37c73fc0cf5178dd72dc3db4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_94857a5a37c73fc0cf5178dd72dc3db4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_94857a5a37c73fc0cf5178dd72dc3db4,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_94857a5a37c73fc0cf5178dd72dc3db4 == cache_frame_94857a5a37c73fc0cf5178dd72dc3db4 )
    {
        Py_DECREF( frame_94857a5a37c73fc0cf5178dd72dc3db4 );
    }
    cache_frame_94857a5a37c73fc0cf5178dd72dc3db4 = NULL;

    assertFrameObject( frame_94857a5a37c73fc0cf5178dd72dc3db4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_18_readable );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_18_readable );
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


static PyObject *impl_django$core$files$utils$$$function_19_writable( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    static struct Nuitka_FrameObject *cache_frame_fdc9e55186f119c8dd8d8b4d5b356257 = NULL;

    struct Nuitka_FrameObject *frame_fdc9e55186f119c8dd8d8b4d5b356257;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fdc9e55186f119c8dd8d8b4d5b356257, codeobj_fdc9e55186f119c8dd8d8b4d5b356257, module_django$core$files$utils, sizeof(void *) );
    frame_fdc9e55186f119c8dd8d8b4d5b356257 = cache_frame_fdc9e55186f119c8dd8d8b4d5b356257;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fdc9e55186f119c8dd8d8b4d5b356257 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fdc9e55186f119c8dd8d8b4d5b356257 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_closed );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 40;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
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

        exception_lineno = 42;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_hasattr_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_file );
    if ( tmp_hasattr_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_hasattr_attr_1 = const_str_plain_writable;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    Py_DECREF( tmp_hasattr_source_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_file );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_fdc9e55186f119c8dd8d8b4d5b356257->m_frame.f_lineno = 43;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_writable );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_compexpr_left_1 = const_str_plain_w;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_getattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_file );
    if ( tmp_getattr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_getattr_attr_1 = const_str_plain_mode;
    tmp_getattr_default_1 = const_str_empty;
    tmp_compexpr_right_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    Py_DECREF( tmp_getattr_target_1 );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fdc9e55186f119c8dd8d8b4d5b356257 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fdc9e55186f119c8dd8d8b4d5b356257 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fdc9e55186f119c8dd8d8b4d5b356257 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fdc9e55186f119c8dd8d8b4d5b356257, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fdc9e55186f119c8dd8d8b4d5b356257->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fdc9e55186f119c8dd8d8b4d5b356257, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fdc9e55186f119c8dd8d8b4d5b356257,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_fdc9e55186f119c8dd8d8b4d5b356257 == cache_frame_fdc9e55186f119c8dd8d8b4d5b356257 )
    {
        Py_DECREF( frame_fdc9e55186f119c8dd8d8b4d5b356257 );
    }
    cache_frame_fdc9e55186f119c8dd8d8b4d5b356257 = NULL;

    assertFrameObject( frame_fdc9e55186f119c8dd8d8b4d5b356257 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_19_writable );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_19_writable );
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


static PyObject *impl_django$core$files$utils$$$function_20_seekable( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_5d1e68411ffe10b895a46e81b54cfe1e = NULL;

    struct Nuitka_FrameObject *frame_5d1e68411ffe10b895a46e81b54cfe1e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5d1e68411ffe10b895a46e81b54cfe1e, codeobj_5d1e68411ffe10b895a46e81b54cfe1e, module_django$core$files$utils, sizeof(void *) );
    frame_5d1e68411ffe10b895a46e81b54cfe1e = cache_frame_5d1e68411ffe10b895a46e81b54cfe1e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5d1e68411ffe10b895a46e81b54cfe1e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5d1e68411ffe10b895a46e81b54cfe1e ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_closed );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 47;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
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

        exception_lineno = 49;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_hasattr_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_file );
    if ( tmp_hasattr_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_hasattr_attr_1 = const_str_plain_seekable;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    Py_DECREF( tmp_hasattr_source_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_file );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_5d1e68411ffe10b895a46e81b54cfe1e->m_frame.f_lineno = 50;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_seekable );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5d1e68411ffe10b895a46e81b54cfe1e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5d1e68411ffe10b895a46e81b54cfe1e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5d1e68411ffe10b895a46e81b54cfe1e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5d1e68411ffe10b895a46e81b54cfe1e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5d1e68411ffe10b895a46e81b54cfe1e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5d1e68411ffe10b895a46e81b54cfe1e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5d1e68411ffe10b895a46e81b54cfe1e,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_5d1e68411ffe10b895a46e81b54cfe1e == cache_frame_5d1e68411ffe10b895a46e81b54cfe1e )
    {
        Py_DECREF( frame_5d1e68411ffe10b895a46e81b54cfe1e );
    }
    cache_frame_5d1e68411ffe10b895a46e81b54cfe1e = NULL;

    assertFrameObject( frame_5d1e68411ffe10b895a46e81b54cfe1e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_20_seekable );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_20_seekable );
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


static PyObject *impl_django$core$files$utils$$$function_21___iter__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_95bd92a080dab4a6e45f6d8b6bbb9467 = NULL;

    struct Nuitka_FrameObject *frame_95bd92a080dab4a6e45f6d8b6bbb9467;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_95bd92a080dab4a6e45f6d8b6bbb9467, codeobj_95bd92a080dab4a6e45f6d8b6bbb9467, module_django$core$files$utils, sizeof(void *) );
    frame_95bd92a080dab4a6e45f6d8b6bbb9467 = cache_frame_95bd92a080dab4a6e45f6d8b6bbb9467;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_95bd92a080dab4a6e45f6d8b6bbb9467 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_95bd92a080dab4a6e45f6d8b6bbb9467 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_file );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_95bd92a080dab4a6e45f6d8b6bbb9467 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_95bd92a080dab4a6e45f6d8b6bbb9467 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_95bd92a080dab4a6e45f6d8b6bbb9467 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_95bd92a080dab4a6e45f6d8b6bbb9467, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_95bd92a080dab4a6e45f6d8b6bbb9467->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_95bd92a080dab4a6e45f6d8b6bbb9467, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_95bd92a080dab4a6e45f6d8b6bbb9467,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_95bd92a080dab4a6e45f6d8b6bbb9467 == cache_frame_95bd92a080dab4a6e45f6d8b6bbb9467 )
    {
        Py_DECREF( frame_95bd92a080dab4a6e45f6d8b6bbb9467 );
    }
    cache_frame_95bd92a080dab4a6e45f6d8b6bbb9467 = NULL;

    assertFrameObject( frame_95bd92a080dab4a6e45f6d8b6bbb9467 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_21___iter__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$utils$$$function_21___iter__ );
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



static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_10_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$utils$$$function_10_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        const_str_digest_102342d390fc6b7a5fda9a679cfabbbb,
#endif
        codeobj_705474274cbd6bd4b80b5805061c27a3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$utils,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_11_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$utils$$$function_11_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        const_str_digest_102342d390fc6b7a5fda9a679cfabbbb,
#endif
        codeobj_26f0779006eb649f01d68875de763d7c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$utils,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_12_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$utils$$$function_12_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        const_str_digest_102342d390fc6b7a5fda9a679cfabbbb,
#endif
        codeobj_83ed49f801bc3c837aaf86cc3456d125,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$utils,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_13_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$utils$$$function_13_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        const_str_digest_102342d390fc6b7a5fda9a679cfabbbb,
#endif
        codeobj_2277a14f2fcb65787e850dcb8c536746,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$utils,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_14_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$utils$$$function_14_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        const_str_digest_102342d390fc6b7a5fda9a679cfabbbb,
#endif
        codeobj_fee4c5e09b7f378e62c551cfee5a3b5f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$utils,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_15_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$utils$$$function_15_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        const_str_digest_102342d390fc6b7a5fda9a679cfabbbb,
#endif
        codeobj_aa725507d509ddede89b2f3262b13d48,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$utils,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_16_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$utils$$$function_16_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        const_str_digest_102342d390fc6b7a5fda9a679cfabbbb,
#endif
        codeobj_d4208fe3ffa295065513fc3f12a80740,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$utils,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_17_closed(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$utils$$$function_17_closed,
        const_str_plain_closed,
#if PYTHON_VERSION >= 330
        const_str_digest_099ecd6bf74fba4d2dd767c94a212e55,
#endif
        codeobj_f213a3749d871a3f75b82e83b2790755,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$utils,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_18_readable(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$utils$$$function_18_readable,
        const_str_plain_readable,
#if PYTHON_VERSION >= 330
        const_str_digest_a701090667a318164d7bdcdc876c2c3d,
#endif
        codeobj_94857a5a37c73fc0cf5178dd72dc3db4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$utils,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_19_writable(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$utils$$$function_19_writable,
        const_str_plain_writable,
#if PYTHON_VERSION >= 330
        const_str_digest_7b9d72fdb4722f776c2af09307c0e4e6,
#endif
        codeobj_fdc9e55186f119c8dd8d8b4d5b356257,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$utils,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$utils$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        const_str_digest_102342d390fc6b7a5fda9a679cfabbbb,
#endif
        codeobj_4c319adc773db995d4a37d76263c16dc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$utils,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_20_seekable(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$utils$$$function_20_seekable,
        const_str_plain_seekable,
#if PYTHON_VERSION >= 330
        const_str_digest_5991695870aa27645f96835cf638904c,
#endif
        codeobj_5d1e68411ffe10b895a46e81b54cfe1e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$utils,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_21___iter__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$utils$$$function_21___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 330
        const_str_digest_e9cdd5b18c2b4a1df2511072334bbcef,
#endif
        codeobj_95bd92a080dab4a6e45f6d8b6bbb9467,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$utils,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_2_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$utils$$$function_2_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        const_str_digest_102342d390fc6b7a5fda9a679cfabbbb,
#endif
        codeobj_d15e23a24336c0bcc90a79d2198359cb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$utils,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_3_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$utils$$$function_3_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        const_str_digest_102342d390fc6b7a5fda9a679cfabbbb,
#endif
        codeobj_9ef0f67661b1b0304659537c04eaafb4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$utils,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_4_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$utils$$$function_4_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        const_str_digest_102342d390fc6b7a5fda9a679cfabbbb,
#endif
        codeobj_be473e392073b6d0be624c76273bfeeb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$utils,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_5_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$utils$$$function_5_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        const_str_digest_102342d390fc6b7a5fda9a679cfabbbb,
#endif
        codeobj_0304422980922311540395a0e7bfaa66,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$utils,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_6_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$utils$$$function_6_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        const_str_digest_102342d390fc6b7a5fda9a679cfabbbb,
#endif
        codeobj_652f00f79c853315772441e0ed85d41a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$utils,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_7_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$utils$$$function_7_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        const_str_digest_102342d390fc6b7a5fda9a679cfabbbb,
#endif
        codeobj_8631212c203d26c65925d0163723b63f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$utils,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_8_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$utils$$$function_8_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        const_str_digest_102342d390fc6b7a5fda9a679cfabbbb,
#endif
        codeobj_93d7191b5866418cea46d16d17f988df,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$utils,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_django$core$files$utils$$$function_9_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_django$core$files$utils$$$function_9_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        const_str_digest_102342d390fc6b7a5fda9a679cfabbbb,
#endif
        codeobj_9559c57ec74636cd3073c7ff6704fe42,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_django$core$files$utils,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_django$core$files$utils =
{
    PyModuleDef_HEAD_INIT,
    "django.core.files.utils",   /* m_name */
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

MOD_INIT_DECL( django$core$files$utils )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_django$core$files$utils );
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
    puts("django.core.files.utils: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("django.core.files.utils: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdjango$core$files$utils" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_django$core$files$utils = Py_InitModule4(
        "django.core.files.utils",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_django$core$files$utils = PyModule_Create( &mdef_django$core$files$utils );
#endif

    moduledict_django$core$files$utils = MODULE_DICT( module_django$core$files$utils );

    CHECK_OBJECT( module_django$core$files$utils );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_c9523883a023b68eb6891d4ff556972b, module_django$core$files$utils );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_django$core$files$utils, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_django$core$files$utils, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_django$core$files$utils, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_0_var___qualname__ = NULL;
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *outline_0_var_encoding = NULL;
    PyObject *outline_0_var_fileno = NULL;
    PyObject *outline_0_var_flush = NULL;
    PyObject *outline_0_var_isatty = NULL;
    PyObject *outline_0_var_newlines = NULL;
    PyObject *outline_0_var_read = NULL;
    PyObject *outline_0_var_readinto = NULL;
    PyObject *outline_0_var_readline = NULL;
    PyObject *outline_0_var_readlines = NULL;
    PyObject *outline_0_var_seek = NULL;
    PyObject *outline_0_var_softspace = NULL;
    PyObject *outline_0_var_tell = NULL;
    PyObject *outline_0_var_truncate = NULL;
    PyObject *outline_0_var_write = NULL;
    PyObject *outline_0_var_writelines = NULL;
    PyObject *outline_0_var_xreadlines = NULL;
    PyObject *outline_0_var_closed = NULL;
    PyObject *outline_0_var_readable = NULL;
    PyObject *outline_0_var_writable = NULL;
    PyObject *outline_0_var_seekable = NULL;
    PyObject *outline_0_var___iter__ = NULL;
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
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_args_element_name_19;
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
    PyObject *tmp_called_name_14;
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    PyObject *tmp_called_name_18;
    PyObject *tmp_called_name_19;
    PyObject *tmp_called_name_20;
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
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2 = NULL;

    struct Nuitka_FrameObject *frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2;

    struct Nuitka_FrameObject *frame_a162e84121e5104de3a01a6a99c3e607;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    // Locals dictionary setup.
PyObject *locals_dict_1 = PyDict_New();


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$core$files$utils, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_django$core$files$utils, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict_django$core$files$utils, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_a162e84121e5104de3a01a6a99c3e607 = MAKE_MODULE_FRAME( codeobj_a162e84121e5104de3a01a6a99c3e607, module_django$core$files$utils );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_a162e84121e5104de3a01a6a99c3e607 );
    assert( Py_REFCNT( frame_a162e84121e5104de3a01a6a99c3e607 ) == 2 );

    // Framed code:
    frame_a162e84121e5104de3a01a6a99c3e607->m_frame.f_lineno = 1;
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
    tmp_args_element_name_1 = const_str_digest_c9523883a023b68eb6891d4ff556972b;
    tmp_args_element_name_2 = metapath_based_loader;
    frame_a162e84121e5104de3a01a6a99c3e607->m_frame.f_lineno = 1;
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
    UPDATE_STRING_DICT1( moduledict_django$core$files$utils, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict_django$core$files$utils, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_09be10fde7aee5d022fb2ff0b2af134a;
    UPDATE_STRING_DICT0( moduledict_django$core$files$utils, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_tuple_type_object_tuple;
    assert( tmp_class_creation_1__bases == NULL );
    Py_INCREF( tmp_assign_source_7 );
    tmp_class_creation_1__bases = tmp_assign_source_7;

    tmp_assign_source_8 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_8;

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


        exception_lineno = 1;

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


        exception_lineno = 1;

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


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

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
    tmp_assign_source_9 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 1;

        goto try_except_handler_1;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_9;

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


        exception_lineno = 1;

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


        exception_lineno = 1;

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
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___prepare__ );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_FileProxyMixin;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_a162e84121e5104de3a01a6a99c3e607->m_frame.f_lineno = 1;
    tmp_assign_source_10 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_10 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_10;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    Py_DECREF(locals_dict_1);
    locals_dict_1 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    tmp_assign_source_12 = const_str_digest_c9523883a023b68eb6891d4ff556972b;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_12 );
    outline_0_var___module__ = tmp_assign_source_12;

    tmp_assign_source_13 = const_str_digest_139dc27cc62ea99e8a4c960efd50cb2f;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_13 );
    outline_0_var___doc__ = tmp_assign_source_13;

    tmp_assign_source_14 = const_str_plain_FileProxyMixin;
    assert( outline_0_var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_14 );
    outline_0_var___qualname__ = tmp_assign_source_14;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2, codeobj_d9f0ac64bef9cbd2bcc4815bbb989d47, module_django$core$files$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2 = cache_frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_3 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_3 = MAKE_FUNCTION_django$core$files$utils$$$function_1_lambda(  );
    frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2->m_frame.f_lineno = 11;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        type_description_2 = "NoooNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_encoding == NULL );
    outline_0_var_encoding = tmp_assign_source_15;

    tmp_called_name_4 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_4 = MAKE_FUNCTION_django$core$files$utils$$$function_2_lambda(  );
    frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2->m_frame.f_lineno = 12;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        type_description_2 = "NooooNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_fileno == NULL );
    outline_0_var_fileno = tmp_assign_source_16;

    tmp_called_name_5 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_5 = MAKE_FUNCTION_django$core$files$utils$$$function_3_lambda(  );
    frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2->m_frame.f_lineno = 13;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        type_description_2 = "NoooooNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_flush == NULL );
    outline_0_var_flush = tmp_assign_source_17;

    tmp_called_name_6 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_6 = MAKE_FUNCTION_django$core$files$utils$$$function_4_lambda(  );
    frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2->m_frame.f_lineno = 14;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        type_description_2 = "NooooooNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_isatty == NULL );
    outline_0_var_isatty = tmp_assign_source_18;

    tmp_called_name_7 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_7 = MAKE_FUNCTION_django$core$files$utils$$$function_5_lambda(  );
    frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2->m_frame.f_lineno = 15;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        type_description_2 = "NoooooooNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_newlines == NULL );
    outline_0_var_newlines = tmp_assign_source_19;

    tmp_called_name_8 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_8 = MAKE_FUNCTION_django$core$files$utils$$$function_6_lambda(  );
    frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2->m_frame.f_lineno = 16;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description_2 = "NooooooooNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_read == NULL );
    outline_0_var_read = tmp_assign_source_20;

    tmp_called_name_9 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_9 = MAKE_FUNCTION_django$core$files$utils$$$function_7_lambda(  );
    frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2->m_frame.f_lineno = 17;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_2 = "NoooooooooNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_readinto == NULL );
    outline_0_var_readinto = tmp_assign_source_21;

    tmp_called_name_10 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_10 = MAKE_FUNCTION_django$core$files$utils$$$function_8_lambda(  );
    frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2->m_frame.f_lineno = 18;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_2 = "NooooooooooNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_readline == NULL );
    outline_0_var_readline = tmp_assign_source_22;

    tmp_called_name_11 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_11 = MAKE_FUNCTION_django$core$files$utils$$$function_9_lambda(  );
    frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2->m_frame.f_lineno = 19;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_2 = "NoooooooooooNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_readlines == NULL );
    outline_0_var_readlines = tmp_assign_source_23;

    tmp_called_name_12 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_12 = MAKE_FUNCTION_django$core$files$utils$$$function_10_lambda(  );
    frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2->m_frame.f_lineno = 20;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_2 = "NooooooooooooNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_seek == NULL );
    outline_0_var_seek = tmp_assign_source_24;

    tmp_called_name_13 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_13 = MAKE_FUNCTION_django$core$files$utils$$$function_11_lambda(  );
    frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2->m_frame.f_lineno = 21;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_2 = "NoooooooooooooNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_softspace == NULL );
    outline_0_var_softspace = tmp_assign_source_25;

    tmp_called_name_14 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_14 = MAKE_FUNCTION_django$core$files$utils$$$function_12_lambda(  );
    frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2->m_frame.f_lineno = 22;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_2 = "NooooooooooooooNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_tell == NULL );
    outline_0_var_tell = tmp_assign_source_26;

    tmp_called_name_15 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_15 = MAKE_FUNCTION_django$core$files$utils$$$function_13_lambda(  );
    frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2->m_frame.f_lineno = 23;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_2 = "NoooooooooooooooNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_truncate == NULL );
    outline_0_var_truncate = tmp_assign_source_27;

    tmp_called_name_16 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_16 = MAKE_FUNCTION_django$core$files$utils$$$function_14_lambda(  );
    frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2->m_frame.f_lineno = 24;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_args_element_name_16 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_2 = "NooooooooooooooooNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_write == NULL );
    outline_0_var_write = tmp_assign_source_28;

    tmp_called_name_17 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_17 = MAKE_FUNCTION_django$core$files$utils$$$function_15_lambda(  );
    frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2->m_frame.f_lineno = 25;
    {
        PyObject *call_args[] = { tmp_args_element_name_17 };
        tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_args_element_name_17 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_2 = "NoooooooooooooooooNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_writelines == NULL );
    outline_0_var_writelines = tmp_assign_source_29;

    tmp_called_name_18 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_18 = MAKE_FUNCTION_django$core$files$utils$$$function_16_lambda(  );
    frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2->m_frame.f_lineno = 26;
    {
        PyObject *call_args[] = { tmp_args_element_name_18 };
        tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_args_element_name_18 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_2 = "NooooooooooooooooooNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_xreadlines == NULL );
    outline_0_var_xreadlines = tmp_assign_source_30;

    tmp_called_name_19 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_19 = MAKE_FUNCTION_django$core$files$utils$$$function_17_closed(  );
    frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2->m_frame.f_lineno = 28;
    {
        PyObject *call_args[] = { tmp_args_element_name_19 };
        tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
    }

    Py_DECREF( tmp_args_element_name_19 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_2 = "NoooooooooooooooooooNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_closed == NULL );
    outline_0_var_closed = tmp_assign_source_31;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2,
        type_description_2,
        NULL,
        outline_0_var___qualname__,
        outline_0_var___module__,
        outline_0_var___doc__,
        outline_0_var_encoding,
        outline_0_var_fileno,
        outline_0_var_flush,
        outline_0_var_isatty,
        outline_0_var_newlines,
        outline_0_var_read,
        outline_0_var_readinto,
        outline_0_var_readline,
        outline_0_var_readlines,
        outline_0_var_seek,
        outline_0_var_softspace,
        outline_0_var_tell,
        outline_0_var_truncate,
        outline_0_var_write,
        outline_0_var_writelines,
        outline_0_var_xreadlines,
        outline_0_var_closed,
        NULL,
        NULL,
        NULL,
        NULL
    );


    // Release cached frame.
    if ( frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2 == cache_frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2 )
    {
        Py_DECREF( frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2 );
    }
    cache_frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2 = NULL;

    assertFrameObject( frame_d9f0ac64bef9cbd2bcc4815bbb989d47_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_2;
    skip_nested_handling_1:;
    tmp_assign_source_32 = MAKE_FUNCTION_django$core$files$utils$$$function_18_readable(  );
    assert( outline_0_var_readable == NULL );
    outline_0_var_readable = tmp_assign_source_32;

    tmp_assign_source_33 = MAKE_FUNCTION_django$core$files$utils$$$function_19_writable(  );
    assert( outline_0_var_writable == NULL );
    outline_0_var_writable = tmp_assign_source_33;

    tmp_assign_source_34 = MAKE_FUNCTION_django$core$files$utils$$$function_20_seekable(  );
    assert( outline_0_var_seekable == NULL );
    outline_0_var_seekable = tmp_assign_source_34;

    tmp_assign_source_35 = MAKE_FUNCTION_django$core$files$utils$$$function_21___iter__(  );
    assert( outline_0_var___iter__ == NULL );
    outline_0_var___iter__ = tmp_assign_source_35;

    tmp_called_name_20 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_20 );
    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_2 = const_str_plain_FileProxyMixin;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = locals_dict_1;
    Py_INCREF( tmp_tuple_element_2 );
    if ( outline_0_var___qualname__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain___qualname__,
            outline_0_var___qualname__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain___qualname__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 1;

        goto try_except_handler_2;
    }
    if ( outline_0_var___module__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain___module__,
            outline_0_var___module__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain___module__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 1;

        goto try_except_handler_2;
    }
    if ( outline_0_var___doc__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain___doc__,
            outline_0_var___doc__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain___doc__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 1;

        goto try_except_handler_2;
    }
    if ( outline_0_var_encoding != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_encoding,
            outline_0_var_encoding
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_encoding
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_encoding
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 1;

        goto try_except_handler_2;
    }
    if ( outline_0_var_fileno != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_fileno,
            outline_0_var_fileno
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_fileno
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_fileno
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 1;

        goto try_except_handler_2;
    }
    if ( outline_0_var_flush != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_flush,
            outline_0_var_flush
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_flush
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_flush
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 1;

        goto try_except_handler_2;
    }
    if ( outline_0_var_isatty != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_isatty,
            outline_0_var_isatty
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_isatty
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_isatty
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 1;

        goto try_except_handler_2;
    }
    if ( outline_0_var_newlines != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_newlines,
            outline_0_var_newlines
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_newlines
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_newlines
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 1;

        goto try_except_handler_2;
    }
    if ( outline_0_var_read != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_read,
            outline_0_var_read
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_read
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_read
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 1;

        goto try_except_handler_2;
    }
    if ( outline_0_var_readinto != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_readinto,
            outline_0_var_readinto
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_readinto
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_readinto
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 1;

        goto try_except_handler_2;
    }
    if ( outline_0_var_readline != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_readline,
            outline_0_var_readline
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_readline
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_readline
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 1;

        goto try_except_handler_2;
    }
    if ( outline_0_var_readlines != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_readlines,
            outline_0_var_readlines
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_readlines
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_readlines
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 1;

        goto try_except_handler_2;
    }
    if ( outline_0_var_seek != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_seek,
            outline_0_var_seek
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_seek
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_seek
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 1;

        goto try_except_handler_2;
    }
    if ( outline_0_var_softspace != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_softspace,
            outline_0_var_softspace
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_softspace
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_softspace
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 1;

        goto try_except_handler_2;
    }
    if ( outline_0_var_tell != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_tell,
            outline_0_var_tell
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_tell
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_tell
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 1;

        goto try_except_handler_2;
    }
    if ( outline_0_var_truncate != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_truncate,
            outline_0_var_truncate
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_truncate
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_truncate
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 1;

        goto try_except_handler_2;
    }
    if ( outline_0_var_write != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_write,
            outline_0_var_write
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_write
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_write
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 1;

        goto try_except_handler_2;
    }
    if ( outline_0_var_writelines != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_writelines,
            outline_0_var_writelines
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_writelines
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_writelines
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 1;

        goto try_except_handler_2;
    }
    if ( outline_0_var_xreadlines != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_xreadlines,
            outline_0_var_xreadlines
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_xreadlines
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_xreadlines
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 1;

        goto try_except_handler_2;
    }
    if ( outline_0_var_closed != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_closed,
            outline_0_var_closed
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_closed
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_closed
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 1;

        goto try_except_handler_2;
    }
    if ( outline_0_var_readable != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_readable,
            outline_0_var_readable
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_readable
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_readable
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 1;

        goto try_except_handler_2;
    }
    if ( outline_0_var_writable != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_writable,
            outline_0_var_writable
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_writable
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_writable
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 1;

        goto try_except_handler_2;
    }
    if ( outline_0_var_seekable != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain_seekable,
            outline_0_var_seekable
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain_seekable
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain_seekable
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 1;

        goto try_except_handler_2;
    }
    if ( outline_0_var___iter__ != NULL )
    {
        int res = PyObject_SetItem(
            tmp_tuple_element_2,
            const_str_plain___iter__,
            outline_0_var___iter__
        );

        tmp_result = res == 0;
    }
    else
    {
        PyObject *test_value = PyObject_GetItem(
            tmp_tuple_element_2,
            const_str_plain___iter__
        );

        if ( test_value )
        {
            Py_DECREF( test_value );

            int res = PyObject_DelItem(
                tmp_tuple_element_2,
                const_str_plain___iter__
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
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 1;

        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_a162e84121e5104de3a01a6a99c3e607->m_frame.f_lineno = 1;
    tmp_assign_source_36 = CALL_FUNCTION( tmp_called_name_20, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_2;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_36;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( django$core$files$utils );
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

    Py_XDECREF( outline_0_var_encoding );
    outline_0_var_encoding = NULL;

    Py_XDECREF( outline_0_var_fileno );
    outline_0_var_fileno = NULL;

    Py_XDECREF( outline_0_var_flush );
    outline_0_var_flush = NULL;

    Py_XDECREF( outline_0_var_isatty );
    outline_0_var_isatty = NULL;

    Py_XDECREF( outline_0_var_newlines );
    outline_0_var_newlines = NULL;

    Py_XDECREF( outline_0_var_read );
    outline_0_var_read = NULL;

    Py_XDECREF( outline_0_var_readinto );
    outline_0_var_readinto = NULL;

    Py_XDECREF( outline_0_var_readline );
    outline_0_var_readline = NULL;

    Py_XDECREF( outline_0_var_readlines );
    outline_0_var_readlines = NULL;

    Py_XDECREF( outline_0_var_seek );
    outline_0_var_seek = NULL;

    Py_XDECREF( outline_0_var_softspace );
    outline_0_var_softspace = NULL;

    Py_XDECREF( outline_0_var_tell );
    outline_0_var_tell = NULL;

    Py_XDECREF( outline_0_var_truncate );
    outline_0_var_truncate = NULL;

    Py_XDECREF( outline_0_var_write );
    outline_0_var_write = NULL;

    Py_XDECREF( outline_0_var_writelines );
    outline_0_var_writelines = NULL;

    Py_XDECREF( outline_0_var_xreadlines );
    outline_0_var_xreadlines = NULL;

    Py_XDECREF( outline_0_var_closed );
    outline_0_var_closed = NULL;

    Py_XDECREF( outline_0_var_readable );
    outline_0_var_readable = NULL;

    Py_XDECREF( outline_0_var_writable );
    outline_0_var_writable = NULL;

    Py_XDECREF( outline_0_var_seekable );
    outline_0_var_seekable = NULL;

    Py_XDECREF( outline_0_var___iter__ );
    outline_0_var___iter__ = NULL;

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

    Py_XDECREF( outline_0_var_encoding );
    outline_0_var_encoding = NULL;

    Py_XDECREF( outline_0_var_fileno );
    outline_0_var_fileno = NULL;

    Py_XDECREF( outline_0_var_flush );
    outline_0_var_flush = NULL;

    Py_XDECREF( outline_0_var_isatty );
    outline_0_var_isatty = NULL;

    Py_XDECREF( outline_0_var_newlines );
    outline_0_var_newlines = NULL;

    Py_XDECREF( outline_0_var_read );
    outline_0_var_read = NULL;

    Py_XDECREF( outline_0_var_readinto );
    outline_0_var_readinto = NULL;

    Py_XDECREF( outline_0_var_readline );
    outline_0_var_readline = NULL;

    Py_XDECREF( outline_0_var_readlines );
    outline_0_var_readlines = NULL;

    Py_XDECREF( outline_0_var_seek );
    outline_0_var_seek = NULL;

    Py_XDECREF( outline_0_var_softspace );
    outline_0_var_softspace = NULL;

    Py_XDECREF( outline_0_var_tell );
    outline_0_var_tell = NULL;

    Py_XDECREF( outline_0_var_truncate );
    outline_0_var_truncate = NULL;

    Py_XDECREF( outline_0_var_write );
    outline_0_var_write = NULL;

    Py_XDECREF( outline_0_var_writelines );
    outline_0_var_writelines = NULL;

    Py_XDECREF( outline_0_var_xreadlines );
    outline_0_var_xreadlines = NULL;

    Py_XDECREF( outline_0_var_closed );
    outline_0_var_closed = NULL;

    Py_XDECREF( outline_0_var_readable );
    outline_0_var_readable = NULL;

    Py_XDECREF( outline_0_var_writable );
    outline_0_var_writable = NULL;

    Py_XDECREF( outline_0_var_seekable );
    outline_0_var_seekable = NULL;

    Py_XDECREF( outline_0_var___iter__ );
    outline_0_var___iter__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( django$core$files$utils );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 1;
    goto try_except_handler_1;
    outline_result_1:;
    tmp_assign_source_11 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_django$core$files$utils, (Nuitka_StringObject *)const_str_plain_FileProxyMixin, tmp_assign_source_11 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a162e84121e5104de3a01a6a99c3e607 );
#endif
    popFrameStack();

    assertFrameObject( frame_a162e84121e5104de3a01a6a99c3e607 );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a162e84121e5104de3a01a6a99c3e607 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a162e84121e5104de3a01a6a99c3e607, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a162e84121e5104de3a01a6a99c3e607->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a162e84121e5104de3a01a6a99c3e607, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;


    return MOD_RETURN_VALUE( module_django$core$files$utils );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
