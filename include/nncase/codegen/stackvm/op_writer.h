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
#include "../codegen_types.h"
#include <nncase/runtime/stackvm/opcode.h>

namespace nncase::codegen::stackvm
{
template <class TOp>
struct op_writer;

template <>
struct op_writer<nncase::runtime::stackvm::nop_op_t>
{
    void operator()(const nncase::runtime::stackvm::nop_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::br_op_t>
{
    void operator()(const nncase::runtime::stackvm::br_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
        writer.write(op.target);
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::br_true_op_t>
{
    void operator()(const nncase::runtime::stackvm::br_true_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
        writer.write(op.target);
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::br_false_op_t>
{
    void operator()(const nncase::runtime::stackvm::br_false_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
        writer.write(op.target);
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ret_op_t>
{
    void operator()(const nncase::runtime::stackvm::ret_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::call_op_t>
{
    void operator()(const nncase::runtime::stackvm::call_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
        writer.write(op.args);
        writer.write(op.target);
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ecall_op_t>
{
    void operator()(const nncase::runtime::stackvm::ecall_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
        writer.write(op.args);
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::throw_op_t>
{
    void operator()(const nncase::runtime::stackvm::throw_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::break_op_t>
{
    void operator()(const nncase::runtime::stackvm::break_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldc_i4_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldc_i4_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
        writer.write(op.imm);
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldnull_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldnull_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldc_i4_0_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldc_i4_0_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldc_i4_1_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldc_i4_1_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldc_r4_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldc_r4_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
        writer.write(op.imm);
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldind_i1_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldind_i1_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldind_i2_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldind_i2_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldind_i4_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldind_i4_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldind_i_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldind_i_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldind_u1_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldind_u1_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldind_u2_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldind_u2_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldind_u4_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldind_u4_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldind_u_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldind_u_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldind_br2_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldind_br2_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldind_r4_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldind_r4_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::stind_i1_op_t>
{
    void operator()(const nncase::runtime::stackvm::stind_i1_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::stind_i2_op_t>
{
    void operator()(const nncase::runtime::stackvm::stind_i2_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::stind_i4_op_t>
{
    void operator()(const nncase::runtime::stackvm::stind_i4_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::stind_i_op_t>
{
    void operator()(const nncase::runtime::stackvm::stind_i_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::stind_br2_op_t>
{
    void operator()(const nncase::runtime::stackvm::stind_br2_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::stind_r4_op_t>
{
    void operator()(const nncase::runtime::stackvm::stind_r4_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::lea_gp_op_t>
{
    void operator()(const nncase::runtime::stackvm::lea_gp_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
        writer.write(op.gpid);
        writer.write(op.offset);
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::lea_buffer_op_t>
{
    void operator()(const nncase::runtime::stackvm::lea_buffer_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
        writer.write(static_cast<uint8_t>(op.location));
        writer.write(op.subres_id);
        writer.write(op.offset);
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldelem_i1_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldelem_i1_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldelem_i2_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldelem_i2_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldelem_i4_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldelem_i4_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldelem_i_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldelem_i_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldelem_u1_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldelem_u1_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldelem_u2_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldelem_u2_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldelem_u4_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldelem_u4_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldelem_u_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldelem_u_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldelem_br2_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldelem_br2_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldelem_r4_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldelem_r4_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::stelem_i1_op_t>
{
    void operator()(const nncase::runtime::stackvm::stelem_i1_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::stelem_i2_op_t>
{
    void operator()(const nncase::runtime::stackvm::stelem_i2_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::stelem_i4_op_t>
{
    void operator()(const nncase::runtime::stackvm::stelem_i4_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::stelem_i_op_t>
{
    void operator()(const nncase::runtime::stackvm::stelem_i_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::stelem_br2_op_t>
{
    void operator()(const nncase::runtime::stackvm::stelem_br2_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::stelem_r4_op_t>
{
    void operator()(const nncase::runtime::stackvm::stelem_r4_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldarg_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldarg_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
        writer.write(op.index);
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldarg_0_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldarg_0_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldarg_1_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldarg_1_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldarg_2_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldarg_2_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldarg_3_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldarg_3_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldarg_4_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldarg_4_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldarg_5_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldarg_5_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ldarga_op_t>
{
    void operator()(const nncase::runtime::stackvm::ldarga_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
        writer.write(op.index);
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::stshape_op_t>
{
    void operator()(const nncase::runtime::stackvm::stshape_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
        writer.write(op.rshape);
        writer.write(op.rank);
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::stpaddings_op_t>
{
    void operator()(const nncase::runtime::stackvm::stpaddings_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
        writer.write(op.rpaddings);
        writer.write(op.rank);
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::dup_op_t>
{
    void operator()(const nncase::runtime::stackvm::dup_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::pop_op_t>
{
    void operator()(const nncase::runtime::stackvm::pop_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::neg_op_t>
{
    void operator()(const nncase::runtime::stackvm::neg_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::add_op_t>
{
    void operator()(const nncase::runtime::stackvm::add_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::sub_op_t>
{
    void operator()(const nncase::runtime::stackvm::sub_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::mul_op_t>
{
    void operator()(const nncase::runtime::stackvm::mul_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::div_op_t>
{
    void operator()(const nncase::runtime::stackvm::div_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::div_u_op_t>
{
    void operator()(const nncase::runtime::stackvm::div_u_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::rem_op_t>
{
    void operator()(const nncase::runtime::stackvm::rem_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::rem_u_op_t>
{
    void operator()(const nncase::runtime::stackvm::rem_u_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::and_op_t>
{
    void operator()(const nncase::runtime::stackvm::and_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::or_op_t>
{
    void operator()(const nncase::runtime::stackvm::or_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::xor_op_t>
{
    void operator()(const nncase::runtime::stackvm::xor_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::not_op_t>
{
    void operator()(const nncase::runtime::stackvm::not_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::shl_op_t>
{
    void operator()(const nncase::runtime::stackvm::shl_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::shr_op_t>
{
    void operator()(const nncase::runtime::stackvm::shr_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::shr_u_op_t>
{
    void operator()(const nncase::runtime::stackvm::shr_u_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::clt_op_t>
{
    void operator()(const nncase::runtime::stackvm::clt_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::clt_u_op_t>
{
    void operator()(const nncase::runtime::stackvm::clt_u_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::cle_op_t>
{
    void operator()(const nncase::runtime::stackvm::cle_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::cle_u_op_t>
{
    void operator()(const nncase::runtime::stackvm::cle_u_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::ceq_op_t>
{
    void operator()(const nncase::runtime::stackvm::ceq_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::cge_op_t>
{
    void operator()(const nncase::runtime::stackvm::cge_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::cge_u_op_t>
{
    void operator()(const nncase::runtime::stackvm::cge_u_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::cgt_op_t>
{
    void operator()(const nncase::runtime::stackvm::cgt_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::cgt_u_op_t>
{
    void operator()(const nncase::runtime::stackvm::cgt_u_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::cne_op_t>
{
    void operator()(const nncase::runtime::stackvm::cne_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::conv_u1_op_t>
{
    void operator()(const nncase::runtime::stackvm::conv_u1_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::conv_u2_op_t>
{
    void operator()(const nncase::runtime::stackvm::conv_u2_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::conv_u4_op_t>
{
    void operator()(const nncase::runtime::stackvm::conv_u4_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::conv_u_op_t>
{
    void operator()(const nncase::runtime::stackvm::conv_u_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::conv_br2_op_t>
{
    void operator()(const nncase::runtime::stackvm::conv_br2_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::conv_r4_op_t>
{
    void operator()(const nncase::runtime::stackvm::conv_r4_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::tensor_batch_to_space_op_t>
{
    void operator()(const nncase::runtime::stackvm::tensor_batch_to_space_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
        writer.write(static_cast<uint16_t>(op.funct));
        writer.write(op.rshape_src);
        writer.write(op.rshape_block);
        writer.write(op.rpaddings);
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::tensor_conv2d_op_t>
{
    void operator()(const nncase::runtime::stackvm::tensor_conv2d_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
        writer.write(static_cast<uint16_t>(op.funct));
        writer.write(op.rshape_src);
        writer.write(op.rshape_kernel);
        writer.write(op.groups);
        writer.write(op.stride_h);
        writer.write(op.stride_w);
        writer.write(op.dilation_h);
        writer.write(op.dilation_w);
        writer.write(op.fused_clamp_low);
        writer.write(op.fused_clamp_high);
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::tensor_reduce_op_t>
{
    void operator()(const nncase::runtime::stackvm::tensor_reduce_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
        writer.write(static_cast<uint16_t>(op.funct));
        writer.write(op.rshape_src);
        writer.write(static_cast<uint8_t>(op.reduce_op));
        writer.write(op.rshape_axis);
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::tensor_binary_op_t>
{
    void operator()(const nncase::runtime::stackvm::tensor_binary_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
        writer.write(static_cast<uint16_t>(op.funct));
        writer.write(op.rshape_src1);
        writer.write(op.rshape_src2);
        writer.write(static_cast<uint8_t>(op.binary_op));
        writer.write(op.fused_clamp_low);
        writer.write(op.fused_clamp_high);
    }
};

template <>
struct op_writer<nncase::runtime::stackvm::tensor_unary_op_t>
{
    void operator()(const nncase::runtime::stackvm::tensor_unary_op_t &op, binary_writer &writer) const
    {
        writer.write(static_cast<uint8_t>(op.opcode));
        writer.write(static_cast<uint16_t>(op.funct));
        writer.write(op.rshape_src);
        writer.write(static_cast<uint8_t>(op.unary_op));
    }
};
    
class NNCASE_API op_builder
{
public:
    op_builder(ir::node &node, section_writer &writer);
    op_builder(op_builder &) = delete;
    op_builder(op_builder &&) = default;

    void nop_();
    void br_(int32_t target);
    void br_true_(int32_t target);
    void br_false_(int32_t target);
    void ret_();
    void call_(uint8_t args, int32_t target);
    void ecall_(uint8_t args);
    void throw_();
    void break_();
    void ldc_i4_(int32_t imm);
    void ldnull_();
    void ldc_i4_0_();
    void ldc_i4_1_();
    void ldc_r4_(float imm);
    void ldind_i1_();
    void ldind_i2_();
    void ldind_i4_();
    void ldind_i_();
    void ldind_u1_();
    void ldind_u2_();
    void ldind_u4_();
    void ldind_u_();
    void ldind_br2_();
    void ldind_r4_();
    void stind_i1_();
    void stind_i2_();
    void stind_i4_();
    void stind_i_();
    void stind_br2_();
    void stind_r4_();
    void lea_gp_(uint8_t gpid, int32_t offset);
    void lea_buffer_(memory_location_t location, uint8_t subres_id, uint32_t offset);
    void ldelem_i1_();
    void ldelem_i2_();
    void ldelem_i4_();
    void ldelem_i_();
    void ldelem_u1_();
    void ldelem_u2_();
    void ldelem_u4_();
    void ldelem_u_();
    void ldelem_br2_();
    void ldelem_r4_();
    void stelem_i1_();
    void stelem_i2_();
    void stelem_i4_();
    void stelem_i_();
    void stelem_br2_();
    void stelem_r4_();
    void ldarg_(uint32_t index);
    void ldarg_0_();
    void ldarg_1_();
    void ldarg_2_();
    void ldarg_3_();
    void ldarg_4_();
    void ldarg_5_();
    void ldarga_(uint32_t index);
    void stshape_(uint8_t rshape, uint8_t rank);
    void stpaddings_(uint8_t rpaddings, uint8_t rank);
    void dup_();
    void pop_();
    void neg_();
    void add_();
    void sub_();
    void mul_();
    void div_();
    void div_u_();
    void rem_();
    void rem_u_();
    void and_();
    void or_();
    void xor_();
    void not_();
    void shl_();
    void shr_();
    void shr_u_();
    void clt_();
    void clt_u_();
    void cle_();
    void cle_u_();
    void ceq_();
    void cge_();
    void cge_u_();
    void cgt_();
    void cgt_u_();
    void cne_();
    void conv_u1_();
    void conv_u2_();
    void conv_u4_();
    void conv_u_();
    void conv_br2_();
    void conv_r4_();
    void tensor_batch_to_space_(uint8_t rshape_src, uint8_t rshape_block, uint8_t rpaddings);
    void tensor_conv2d_(uint8_t rshape_src, uint8_t rshape_kernel, uint16_t groups, uint16_t stride_h, uint16_t stride_w, uint16_t dilation_h, uint16_t dilation_w, float fused_clamp_low, float fused_clamp_high);
    void tensor_reduce_(uint8_t rshape_src, reduce_op_t reduce_op, uint8_t rshape_axis);
    void tensor_binary_(uint8_t rshape_src1, uint8_t rshape_src2, binary_op_t binary_op, float fused_clamp_low, float fused_clamp_high);
    void tensor_unary_(uint8_t rshape_src, unary_op_t unary_op);

private:
    section_writer &writer_;
};
}
