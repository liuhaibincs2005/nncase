﻿// Copyright (c) Canaan Inc. All rights reserved.
// Licensed under the Apache license. See LICENSE file in the project root for full license information.

using System;
using System.Collections.Generic;
using System.Collections.Immutable;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Nncase.IR.Math
{
    /// <summary>
    /// Clamp expression.
    /// </summary>
    public sealed record Clamp() : Op
    {
        /// <summary>
        /// Gets input.
        /// </summary>
        public static readonly ParameterInfo Input = new(typeof(Clamp), 0, "input");

        /// <summary>
        /// Gets min.
        /// </summary>
        public static readonly ParameterInfo Min = new(typeof(Clamp), 1, "min");

        /// <summary>
        /// Gets max.
        /// </summary>
        public static readonly ParameterInfo Max = new(typeof(Clamp), 2, "max");

        /// <inheritdoc/>
        public IRType InferInvokeResultType(ITypeInferenceContext context)
        {
            var inputType = context.CheckArgumentType<TensorType>(this, Input);
            var minType = context.CheckArgumentType<TensorType>(this, Min);
            var maxType = context.CheckArgumentType<TensorType>(this, Max);
            return TypeInference.BroadcastType(inputType, minType, maxType).ThrowIfTypeInferenceInterrupt();
        }
    }
}