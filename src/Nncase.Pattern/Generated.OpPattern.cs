using System;
using System.Collections.Generic;
using System.Collections.Immutable;
using System.Linq;
using Nncase.IR;
using Nncase.IR.NN;
using Nncase.IR.Math;
using Nncase.IR.Tensors;
using Nncase.Pattern.NN;
using Nncase.Pattern.Math;
using Nncase.Pattern.Tensors;

namespace Nncase.Pattern
{
    public abstract partial record OpPattern : ExprPattern
    {
        public bool MatchLeaf(Op op) => (this, op) switch
        {
            (BinaryPattern binarypattern, Binary binary) => binarypattern.MatchLeaf(binary),
            (ClampPattern clamppattern, Clamp clamp) => clamppattern.MatchLeaf(clamp),
            (UnaryPattern unarypattern, Unary unary) => unarypattern.MatchLeaf(unary),
            (SigmoidPattern sigmoidpattern, Sigmoid sigmoid) => sigmoidpattern.MatchLeaf(sigmoid),
            (ReluPattern relupattern, Relu relu) => relupattern.MatchLeaf(relu),
            (Relu6Pattern relu6pattern, Relu6 relu6) => relu6pattern.MatchLeaf(relu6),
            (PReluPattern prelupattern, PRelu prelu) => prelupattern.MatchLeaf(prelu),
            (LeakyReluPattern leakyrelupattern, LeakyRelu leakyrelu) => leakyrelupattern.MatchLeaf(leakyrelu),
            (Conv2DPattern conv2dpattern, Conv2D conv2d) => conv2dpattern.MatchLeaf(conv2d),
            (Conv2DTransposePattern conv2dtransposepattern, Conv2DTranspose conv2dtranspose) => conv2dtransposepattern.MatchLeaf(conv2dtranspose),
            (L2NormalizationPattern l2normalizationpattern, L2Normalization l2normalization) => l2normalizationpattern.MatchLeaf(l2normalization),
            (SoftMaxPattern softmaxpattern, SoftMax softmax) => softmaxpattern.MatchLeaf(softmax),
            (LogSoftMaxPattern logsoftmaxpattern, LogSoftMax logsoftmax) => logsoftmaxpattern.MatchLeaf(logsoftmax),
            (BatchToSpacePattern batchtospacepattern, BatchToSpace batchtospace) => batchtospacepattern.MatchLeaf(batchtospace),
            (BroadcastPattern broadcastpattern, Broadcast broadcast) => broadcastpattern.MatchLeaf(broadcast),
            (CastPattern castpattern, Cast cast) => castpattern.MatchLeaf(cast),
            (ConcatPattern concatpattern, Concat concat) => concatpattern.MatchLeaf(concat),
            (DeQuantizePattern dequantizepattern, DeQuantize dequantize) => dequantizepattern.MatchLeaf(dequantize),
            (GatherPattern gatherpattern, Gather gather) => gatherpattern.MatchLeaf(gather),
            (GatherNDPattern gatherndpattern, GatherND gathernd) => gatherndpattern.MatchLeaf(gathernd),
            (MatMulPattern matmulpattern, MatMul matmul) => matmulpattern.MatchLeaf(matmul),
            (OneHotPattern onehotpattern, OneHot onehot) => onehotpattern.MatchLeaf(onehot),
            (PadPattern padpattern, Pad pad) => padpattern.MatchLeaf(pad),
            (QuantizePattern quantizepattern, Quantize quantize) => quantizepattern.MatchLeaf(quantize),
            (ReducePattern reducepattern, Reduce reduce) => reducepattern.MatchLeaf(reduce),
            (ReduceWindow2DPattern reducewindow2dpattern, ReduceWindow2D reducewindow2d) => reducewindow2dpattern.MatchLeaf(reducewindow2d),
            (ReshapePattern reshapepattern, Reshape reshape) => reshapepattern.MatchLeaf(reshape),
            (ResizeImagePattern resizeimagepattern, ResizeImage resizeimage) => resizeimagepattern.MatchLeaf(resizeimage),
            (ShapeOpPattern shapeoppattern, ShapeOp shapeop) => shapeoppattern.MatchLeaf(shapeop),
            (SlicePattern slicepattern, Slice slice) => slicepattern.MatchLeaf(slice),
            (SpaceToBatchPattern spacetobatchpattern, SpaceToBatch spacetobatch) => spacetobatchpattern.MatchLeaf(spacetobatch),
            (SplitPattern splitpattern, Split split) => splitpattern.MatchLeaf(split),
            (SqueezePattern squeezepattern, Squeeze squeeze) => squeezepattern.MatchLeaf(squeeze),
            (StackPattern stackpattern, Stack stack) => stackpattern.MatchLeaf(stack),
            (TransposePattern transposepattern, Transpose transpose) => transposepattern.MatchLeaf(transpose),
            (UnSqueezePattern unsqueezepattern, UnSqueeze unsqueeze) => unsqueezepattern.MatchLeaf(unsqueeze),
            (_, _) => false
        }

        ;
        public static ExprPattern CastToPattern(Op op) => op switch
        {
            Binary binary => new BinaryPattern(binary),
            Clamp clamp => new ClampPattern(clamp),
            Unary unary => new UnaryPattern(unary),
            Sigmoid sigmoid => new SigmoidPattern(sigmoid),
            Relu relu => new ReluPattern(relu),
            Relu6 relu6 => new Relu6Pattern(relu6),
            PRelu prelu => new PReluPattern(prelu),
            LeakyRelu leakyrelu => new LeakyReluPattern(leakyrelu),
            Conv2D conv2d => new Conv2DPattern(conv2d),
            Conv2DTranspose conv2dtranspose => new Conv2DTransposePattern(conv2dtranspose),
            L2Normalization l2normalization => new L2NormalizationPattern(l2normalization),
            SoftMax softmax => new SoftMaxPattern(softmax),
            LogSoftMax logsoftmax => new LogSoftMaxPattern(logsoftmax),
            BatchToSpace batchtospace => new BatchToSpacePattern(batchtospace),
            Broadcast broadcast => new BroadcastPattern(broadcast),
            Cast cast => new CastPattern(cast),
            Concat concat => new ConcatPattern(concat),
            DeQuantize dequantize => new DeQuantizePattern(dequantize),
            Gather gather => new GatherPattern(gather),
            GatherND gathernd => new GatherNDPattern(gathernd),
            MatMul matmul => new MatMulPattern(matmul),
            OneHot onehot => new OneHotPattern(onehot),
            Pad pad => new PadPattern(pad),
            Quantize quantize => new QuantizePattern(quantize),
            Reduce reduce => new ReducePattern(reduce),
            ReduceWindow2D reducewindow2d => new ReduceWindow2DPattern(reducewindow2d),
            Reshape reshape => new ReshapePattern(reshape),
            ResizeImage resizeimage => new ResizeImagePattern(resizeimage),
            ShapeOp shapeop => new ShapeOpPattern(shapeop),
            Slice slice => new SlicePattern(slice),
            SpaceToBatch spacetobatch => new SpaceToBatchPattern(spacetobatch),
            Split split => new SplitPattern(split),
            Squeeze squeeze => new SqueezePattern(squeeze),
            Stack stack => new StackPattern(stack),
            Transpose transpose => new TransposePattern(transpose),
            UnSqueeze unsqueeze => new UnSqueezePattern(unsqueeze),
            _ => throw new NotImplementedException($"Can't Convert OP {op.GetType().Name} To ExprPattern")
        }

        ;
    }
}