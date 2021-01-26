/* This file is generated by tools/stackvm_gen/IsaGen at 2021/1/26 22:43:02 +08:00.
 *
 * Copyright 2020 Canaan Inc.
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
#pragma once
#include "../error.h"
#include "../result.h"
#include "../span_reader.h"
#include "opcode.h"

BEGIN_NS_NNCASE_RT_STACKVM

template <class TOp>
struct op_reader;

template <>
struct op_reader<nop_op_t>
{
    nop_op_t operator()(span_reader &reader) const
    {
        nop_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<br_op_t>
{
    br_op_t operator()(span_reader &reader) const
    {
        br_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        op.target = reader.read_unaligned<int32_t>();
        return op;
    }
};

template <>
struct op_reader<br_true_op_t>
{
    br_true_op_t operator()(span_reader &reader) const
    {
        br_true_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        op.target = reader.read_unaligned<int32_t>();
        return op;
    }
};

template <>
struct op_reader<br_false_op_t>
{
    br_false_op_t operator()(span_reader &reader) const
    {
        br_false_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        op.target = reader.read_unaligned<int32_t>();
        return op;
    }
};

template <>
struct op_reader<ret_op_t>
{
    ret_op_t operator()(span_reader &reader) const
    {
        ret_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<call_op_t>
{
    call_op_t operator()(span_reader &reader) const
    {
        call_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        op.args = reader.read_unaligned<uint8_t>();
        op.target = reader.read_unaligned<int32_t>();
        return op;
    }
};

template <>
struct op_reader<ecall_op_t>
{
    ecall_op_t operator()(span_reader &reader) const
    {
        ecall_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        op.args = reader.read_unaligned<uint8_t>();
        return op;
    }
};

template <>
struct op_reader<throw_op_t>
{
    throw_op_t operator()(span_reader &reader) const
    {
        throw_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<break_op_t>
{
    break_op_t operator()(span_reader &reader) const
    {
        break_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldc_i4_op_t>
{
    ldc_i4_op_t operator()(span_reader &reader) const
    {
        ldc_i4_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        op.imm = reader.read_unaligned<int32_t>();
        return op;
    }
};

template <>
struct op_reader<ldnull_op_t>
{
    ldnull_op_t operator()(span_reader &reader) const
    {
        ldnull_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldc_i4_0_op_t>
{
    ldc_i4_0_op_t operator()(span_reader &reader) const
    {
        ldc_i4_0_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldc_i4_1_op_t>
{
    ldc_i4_1_op_t operator()(span_reader &reader) const
    {
        ldc_i4_1_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldc_r4_op_t>
{
    ldc_r4_op_t operator()(span_reader &reader) const
    {
        ldc_r4_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        op.imm = reader.read_unaligned<float>();
        return op;
    }
};

template <>
struct op_reader<ldind_i1_op_t>
{
    ldind_i1_op_t operator()(span_reader &reader) const
    {
        ldind_i1_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldind_i2_op_t>
{
    ldind_i2_op_t operator()(span_reader &reader) const
    {
        ldind_i2_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldind_i4_op_t>
{
    ldind_i4_op_t operator()(span_reader &reader) const
    {
        ldind_i4_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldind_i_op_t>
{
    ldind_i_op_t operator()(span_reader &reader) const
    {
        ldind_i_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldind_u1_op_t>
{
    ldind_u1_op_t operator()(span_reader &reader) const
    {
        ldind_u1_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldind_u2_op_t>
{
    ldind_u2_op_t operator()(span_reader &reader) const
    {
        ldind_u2_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldind_u4_op_t>
{
    ldind_u4_op_t operator()(span_reader &reader) const
    {
        ldind_u4_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldind_u_op_t>
{
    ldind_u_op_t operator()(span_reader &reader) const
    {
        ldind_u_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldind_br2_op_t>
{
    ldind_br2_op_t operator()(span_reader &reader) const
    {
        ldind_br2_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldind_r4_op_t>
{
    ldind_r4_op_t operator()(span_reader &reader) const
    {
        ldind_r4_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<stind_i1_op_t>
{
    stind_i1_op_t operator()(span_reader &reader) const
    {
        stind_i1_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<stind_i2_op_t>
{
    stind_i2_op_t operator()(span_reader &reader) const
    {
        stind_i2_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<stind_i4_op_t>
{
    stind_i4_op_t operator()(span_reader &reader) const
    {
        stind_i4_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<stind_i_op_t>
{
    stind_i_op_t operator()(span_reader &reader) const
    {
        stind_i_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<stind_br2_op_t>
{
    stind_br2_op_t operator()(span_reader &reader) const
    {
        stind_br2_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<stind_r4_op_t>
{
    stind_r4_op_t operator()(span_reader &reader) const
    {
        stind_r4_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<lea_gp_op_t>
{
    lea_gp_op_t operator()(span_reader &reader) const
    {
        lea_gp_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        op.gpid = reader.read_unaligned<uint8_t>();
        op.offset = reader.read_unaligned<int32_t>();
        return op;
    }
};

template <>
struct op_reader<lea_buffer_op_t>
{
    lea_buffer_op_t operator()(span_reader &reader) const
    {
        lea_buffer_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        op.location = static_cast<memory_location_t>(reader.read_unaligned<uint8_t>());
        op.subres_id = reader.read_unaligned<uint8_t>();
        op.offset = reader.read_unaligned<uint32_t>();
        return op;
    }
};

template <>
struct op_reader<ldelem_i1_op_t>
{
    ldelem_i1_op_t operator()(span_reader &reader) const
    {
        ldelem_i1_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldelem_i2_op_t>
{
    ldelem_i2_op_t operator()(span_reader &reader) const
    {
        ldelem_i2_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldelem_i4_op_t>
{
    ldelem_i4_op_t operator()(span_reader &reader) const
    {
        ldelem_i4_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldelem_i_op_t>
{
    ldelem_i_op_t operator()(span_reader &reader) const
    {
        ldelem_i_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldelem_u1_op_t>
{
    ldelem_u1_op_t operator()(span_reader &reader) const
    {
        ldelem_u1_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldelem_u2_op_t>
{
    ldelem_u2_op_t operator()(span_reader &reader) const
    {
        ldelem_u2_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldelem_u4_op_t>
{
    ldelem_u4_op_t operator()(span_reader &reader) const
    {
        ldelem_u4_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldelem_u_op_t>
{
    ldelem_u_op_t operator()(span_reader &reader) const
    {
        ldelem_u_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldelem_br2_op_t>
{
    ldelem_br2_op_t operator()(span_reader &reader) const
    {
        ldelem_br2_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldelem_r4_op_t>
{
    ldelem_r4_op_t operator()(span_reader &reader) const
    {
        ldelem_r4_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<stelem_i1_op_t>
{
    stelem_i1_op_t operator()(span_reader &reader) const
    {
        stelem_i1_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<stelem_i2_op_t>
{
    stelem_i2_op_t operator()(span_reader &reader) const
    {
        stelem_i2_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<stelem_i4_op_t>
{
    stelem_i4_op_t operator()(span_reader &reader) const
    {
        stelem_i4_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<stelem_i_op_t>
{
    stelem_i_op_t operator()(span_reader &reader) const
    {
        stelem_i_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<stelem_br2_op_t>
{
    stelem_br2_op_t operator()(span_reader &reader) const
    {
        stelem_br2_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<stelem_r4_op_t>
{
    stelem_r4_op_t operator()(span_reader &reader) const
    {
        stelem_r4_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldarg_op_t>
{
    ldarg_op_t operator()(span_reader &reader) const
    {
        ldarg_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        op.index = reader.read_unaligned<uint32_t>();
        return op;
    }
};

template <>
struct op_reader<ldarg_0_op_t>
{
    ldarg_0_op_t operator()(span_reader &reader) const
    {
        ldarg_0_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldarg_1_op_t>
{
    ldarg_1_op_t operator()(span_reader &reader) const
    {
        ldarg_1_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldarg_2_op_t>
{
    ldarg_2_op_t operator()(span_reader &reader) const
    {
        ldarg_2_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldarg_3_op_t>
{
    ldarg_3_op_t operator()(span_reader &reader) const
    {
        ldarg_3_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldarg_4_op_t>
{
    ldarg_4_op_t operator()(span_reader &reader) const
    {
        ldarg_4_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldarg_5_op_t>
{
    ldarg_5_op_t operator()(span_reader &reader) const
    {
        ldarg_5_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ldarga_op_t>
{
    ldarga_op_t operator()(span_reader &reader) const
    {
        ldarga_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        op.index = reader.read_unaligned<uint32_t>();
        return op;
    }
};

template <>
struct op_reader<stshape_op_t>
{
    stshape_op_t operator()(span_reader &reader) const
    {
        stshape_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        op.rshape = reader.read_unaligned<uint8_t>();
        op.rank = reader.read_unaligned<uint8_t>();
        return op;
    }
};

template <>
struct op_reader<stpaddings_op_t>
{
    stpaddings_op_t operator()(span_reader &reader) const
    {
        stpaddings_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        op.rpaddings = reader.read_unaligned<uint8_t>();
        op.rank = reader.read_unaligned<uint8_t>();
        return op;
    }
};

template <>
struct op_reader<dup_op_t>
{
    dup_op_t operator()(span_reader &reader) const
    {
        dup_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<pop_op_t>
{
    pop_op_t operator()(span_reader &reader) const
    {
        pop_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<neg_op_t>
{
    neg_op_t operator()(span_reader &reader) const
    {
        neg_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<add_op_t>
{
    add_op_t operator()(span_reader &reader) const
    {
        add_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<sub_op_t>
{
    sub_op_t operator()(span_reader &reader) const
    {
        sub_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<mul_op_t>
{
    mul_op_t operator()(span_reader &reader) const
    {
        mul_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<div_op_t>
{
    div_op_t operator()(span_reader &reader) const
    {
        div_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<div_u_op_t>
{
    div_u_op_t operator()(span_reader &reader) const
    {
        div_u_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<rem_op_t>
{
    rem_op_t operator()(span_reader &reader) const
    {
        rem_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<rem_u_op_t>
{
    rem_u_op_t operator()(span_reader &reader) const
    {
        rem_u_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<and_op_t>
{
    and_op_t operator()(span_reader &reader) const
    {
        and_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<or_op_t>
{
    or_op_t operator()(span_reader &reader) const
    {
        or_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<xor_op_t>
{
    xor_op_t operator()(span_reader &reader) const
    {
        xor_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<not_op_t>
{
    not_op_t operator()(span_reader &reader) const
    {
        not_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<shl_op_t>
{
    shl_op_t operator()(span_reader &reader) const
    {
        shl_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<shr_op_t>
{
    shr_op_t operator()(span_reader &reader) const
    {
        shr_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<shr_u_op_t>
{
    shr_u_op_t operator()(span_reader &reader) const
    {
        shr_u_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<clt_op_t>
{
    clt_op_t operator()(span_reader &reader) const
    {
        clt_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<clt_u_op_t>
{
    clt_u_op_t operator()(span_reader &reader) const
    {
        clt_u_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<cle_op_t>
{
    cle_op_t operator()(span_reader &reader) const
    {
        cle_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<cle_u_op_t>
{
    cle_u_op_t operator()(span_reader &reader) const
    {
        cle_u_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<ceq_op_t>
{
    ceq_op_t operator()(span_reader &reader) const
    {
        ceq_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<cge_op_t>
{
    cge_op_t operator()(span_reader &reader) const
    {
        cge_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<cge_u_op_t>
{
    cge_u_op_t operator()(span_reader &reader) const
    {
        cge_u_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<cgt_op_t>
{
    cgt_op_t operator()(span_reader &reader) const
    {
        cgt_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<cgt_u_op_t>
{
    cgt_u_op_t operator()(span_reader &reader) const
    {
        cgt_u_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<cne_op_t>
{
    cne_op_t operator()(span_reader &reader) const
    {
        cne_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<conv_u1_op_t>
{
    conv_u1_op_t operator()(span_reader &reader) const
    {
        conv_u1_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<conv_u2_op_t>
{
    conv_u2_op_t operator()(span_reader &reader) const
    {
        conv_u2_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<conv_u4_op_t>
{
    conv_u4_op_t operator()(span_reader &reader) const
    {
        conv_u4_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<conv_u_op_t>
{
    conv_u_op_t operator()(span_reader &reader) const
    {
        conv_u_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<conv_br2_op_t>
{
    conv_br2_op_t operator()(span_reader &reader) const
    {
        conv_br2_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<conv_r4_op_t>
{
    conv_r4_op_t operator()(span_reader &reader) const
    {
        conv_r4_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

template <>
struct op_reader<tensor_batch_to_space_op_t>
{
    tensor_batch_to_space_op_t operator()(span_reader &reader) const
    {
        tensor_batch_to_space_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        op.funct = static_cast<tensor_function_t>(reader.read_unaligned<uint16_t>());
        op.rshape_src = reader.read_unaligned<uint8_t>();
        op.rshape_block = reader.read_unaligned<uint8_t>();
        op.rpaddings = reader.read_unaligned<uint8_t>();
        return op;
    }
};

template <>
struct op_reader<tensor_conv2d_op_t>
{
    tensor_conv2d_op_t operator()(span_reader &reader) const
    {
        tensor_conv2d_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        op.funct = static_cast<tensor_function_t>(reader.read_unaligned<uint16_t>());
        op.rshape_src = reader.read_unaligned<uint8_t>();
        op.rshape_kernel = reader.read_unaligned<uint8_t>();
        op.groups = reader.read_unaligned<uint16_t>();
        op.stride_h = reader.read_unaligned<uint16_t>();
        op.stride_w = reader.read_unaligned<uint16_t>();
        op.dilation_h = reader.read_unaligned<uint16_t>();
        op.dilation_w = reader.read_unaligned<uint16_t>();
        op.fused_clamp_low = reader.read_unaligned<float>();
        op.fused_clamp_high = reader.read_unaligned<float>();
        return op;
    }
};

template <>
struct op_reader<tensor_reduce_op_t>
{
    tensor_reduce_op_t operator()(span_reader &reader) const
    {
        tensor_reduce_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        op.funct = static_cast<tensor_function_t>(reader.read_unaligned<uint16_t>());
        op.rshape_src = reader.read_unaligned<uint8_t>();
        op.reduce_op = static_cast<reduce_op_t>(reader.read_unaligned<uint8_t>());
        op.rshape_axis = reader.read_unaligned<uint8_t>();
        return op;
    }
};

template <>
struct op_reader<tensor_binary_op_t>
{
    tensor_binary_op_t operator()(span_reader &reader) const
    {
        tensor_binary_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        op.funct = static_cast<tensor_function_t>(reader.read_unaligned<uint16_t>());
        op.rshape_src1 = reader.read_unaligned<uint8_t>();
        op.rshape_src2 = reader.read_unaligned<uint8_t>();
        op.binary_op = static_cast<binary_op_t>(reader.read_unaligned<uint8_t>());
        op.fused_clamp_low = reader.read_unaligned<float>();
        op.fused_clamp_high = reader.read_unaligned<float>();
        return op;
    }
};

template <>
struct op_reader<tensor_unary_op_t>
{
    tensor_unary_op_t operator()(span_reader &reader) const
    {
        tensor_unary_op_t op(default_init);
        op.opcode = static_cast<opcode_t>(reader.read_unaligned<uint8_t>());
        op.funct = static_cast<tensor_function_t>(reader.read_unaligned<uint16_t>());
        op.rshape_src = reader.read_unaligned<uint8_t>();
        op.unary_op = static_cast<unary_op_t>(reader.read_unaligned<uint8_t>());
        return op;
    }
};

class NNCASE_API op_visitor
{
public:
    op_visitor() noexcept
        : reader_({})
    {
    }

    ~op_visitor() = default;

    result<void> visit(gsl::span<const gsl::byte> text) noexcept;

    virtual result<void> visit(const nop_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const br_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const br_true_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const br_false_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ret_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const call_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ecall_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const throw_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const break_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldc_i4_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldnull_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldc_i4_0_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldc_i4_1_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldc_r4_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldind_i1_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldind_i2_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldind_i4_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldind_i_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldind_u1_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldind_u2_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldind_u4_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldind_u_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldind_br2_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldind_r4_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const stind_i1_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const stind_i2_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const stind_i4_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const stind_i_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const stind_br2_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const stind_r4_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const lea_gp_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const lea_buffer_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldelem_i1_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldelem_i2_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldelem_i4_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldelem_i_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldelem_u1_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldelem_u2_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldelem_u4_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldelem_u_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldelem_br2_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldelem_r4_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const stelem_i1_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const stelem_i2_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const stelem_i4_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const stelem_i_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const stelem_br2_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const stelem_r4_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldarg_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldarg_0_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldarg_1_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldarg_2_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldarg_3_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldarg_4_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldarg_5_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ldarga_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const stshape_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const stpaddings_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const dup_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const pop_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const neg_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const add_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const sub_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const mul_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const div_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const div_u_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const rem_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const rem_u_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const and_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const or_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const xor_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const not_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const shl_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const shr_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const shr_u_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const clt_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const clt_u_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const cle_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const cle_u_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const ceq_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const cge_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const cge_u_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const cgt_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const cgt_u_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const cne_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const conv_u1_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const conv_u2_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const conv_u4_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const conv_u_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const conv_br2_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const conv_r4_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const tensor_batch_to_space_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const tensor_conv2d_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const tensor_reduce_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const tensor_binary_op_t &op) noexcept { return ok(); }
    virtual result<void> visit(const tensor_unary_op_t &op) noexcept { return ok(); }

protected:
    bool interrupted_;
    span_reader reader_;

private:
    result<void> next() noexcept;
};

END_NS_NNCASE_RT_STACKVM
