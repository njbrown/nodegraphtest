#include "math.h"

/*    ADD    */
AddNode::AddNode()
{
	setNodeType(NodeType::Calculation);
	title = "Add";
	typeName = "add";

	addInputSocket(new Vector4SocketModel("A"));
	addInputSocket(new Vector4SocketModel("B"));
	addOutputSocket(new Vector4SocketModel("Result"));
}

void AddNode::process(ModelContext* context)
{
	auto ctx = (ShaderContext*)context;
	auto valA = this->getValueFromInputSocket(0);
	auto valB = this->getValueFromInputSocket(1);
	auto res = this->getOutputSocketVarName(0);

	auto code = res + " = " + valA + " + " + valB + ";";
	ctx->addCodeChunk(this, code);
}

/*    SUBTRACT    */
SubtractNode::SubtractNode()
{
	setNodeType(NodeType::Calculation);
	title = "Subtract";
	typeName = "subtract";

	addInputSocket(new Vector4SocketModel("A"));
	addInputSocket(new Vector4SocketModel("B"));
	addOutputSocket(new Vector4SocketModel("Result"));
}

void SubtractNode::process(ModelContext* context)
{
	auto ctx = (ShaderContext*)context;
	auto valA = this->getValueFromInputSocket(0);
	auto valB = this->getValueFromInputSocket(1);
	auto res = this->getOutputSocketVarName(0);

	auto code = res + " = " + valA + " - " + valB + ";";
	ctx->addCodeChunk(this, code);
}

/*    MULTIPLY    */
MultiplyNode::MultiplyNode()
{
	setNodeType(NodeType::Calculation);
	title = "Multiply";
	typeName = "multiply";

	addInputSocket(new Vector4SocketModel("A"));
	addInputSocket(new Vector4SocketModel("B"));
	addOutputSocket(new Vector4SocketModel("Result"));
}

void MultiplyNode::process(ModelContext* context)
{
	auto ctx = (ShaderContext*)context;
	auto valA = this->getValueFromInputSocket(0);
	auto valB = this->getValueFromInputSocket(1);
	auto res = this->getOutputSocketVarName(0);

	auto code = res + " = " + valA + " * " + valB + ";";
	ctx->addCodeChunk(this, code);
}

/*    DIVIDE    */
DivideNode::DivideNode()
{
	setNodeType(NodeType::Calculation);
	title = "Multiply";
	typeName = "multiply";

	addInputSocket(new Vector4SocketModel("A"));
	addInputSocket(new Vector4SocketModel("B"));
	addOutputSocket(new Vector4SocketModel("Result"));
}

void DivideNode::process(ModelContext* context)
{
	auto ctx = (ShaderContext*)context;
	auto valA = this->getValueFromInputSocket(0);
	auto valB = this->getValueFromInputSocket(1);
	auto res = this->getOutputSocketVarName(0);

	auto code = res + " = " + valA + " / " + valB + ";";
	ctx->addCodeChunk(this, code);
}

/*    POWER    */
PowerNode::PowerNode()
{
	setNodeType(NodeType::Calculation);
	title = "Power";
	typeName = "power";

	addInputSocket(new Vector4SocketModel("A"));
	addInputSocket(new Vector4SocketModel("B"));
	addOutputSocket(new Vector4SocketModel("Result"));
}

void PowerNode::process(ModelContext* context)
{
	auto ctx = (ShaderContext*)context;
	auto valA = this->getValueFromInputSocket(0);
	auto valB = this->getValueFromInputSocket(1);
	auto res = this->getOutputSocketVarName(0);

	auto code = res + " = pow(" + valA + " , " + valB + ");";
	ctx->addCodeChunk(this, code);
}

/*    SQUARE ROOT    */
SqrtNode::SqrtNode()
{
	setNodeType(NodeType::Calculation);
	title = "Square Root";
	typeName = "sqrt";

	addInputSocket(new Vector4SocketModel("A"));
	addOutputSocket(new Vector4SocketModel("Result"));
}

void SqrtNode::process(ModelContext* context)
{
	auto ctx = (ShaderContext*)context;
	auto valA = this->getValueFromInputSocket(0);
	auto res = this->getOutputSocketVarName(0);

	auto code = res + " = sqrt(" + valA + ");";
	ctx->addCodeChunk(this, code);
}

/*    MIN    */
MinNode::MinNode()
{
	setNodeType(NodeType::Calculation);
	title = "Min";
	typeName = "min";

	addInputSocket(new Vector4SocketModel("A"));
	addInputSocket(new Vector4SocketModel("B"));
	addOutputSocket(new Vector4SocketModel("Result"));
}

void MinNode::process(ModelContext* context)
{
	auto ctx = (ShaderContext*)context;
	auto valA = this->getValueFromInputSocket(0);
	auto valB = this->getValueFromInputSocket(1);
	auto res = this->getOutputSocketVarName(0);

	auto code = res + " = min(" + valA + " , " + valB + ");";
	ctx->addCodeChunk(this, code);
}

/*    MAX    */
MaxNode::MaxNode()
{
	setNodeType(NodeType::Calculation);
	title = "Max";
	typeName = "max";

	addInputSocket(new Vector4SocketModel("A"));
	addInputSocket(new Vector4SocketModel("B"));
	addOutputSocket(new Vector4SocketModel("Result"));
}

void MaxNode::process(ModelContext* context)
{
	auto ctx = (ShaderContext*)context;
	auto valA = this->getValueFromInputSocket(0);
	auto valB = this->getValueFromInputSocket(1);
	auto res = this->getOutputSocketVarName(0);

	auto code = res + " = max(" + valA + " , " + valB + ");";
	ctx->addCodeChunk(this, code);
}

/*    ABS    */
AbsNode::AbsNode()
{
	setNodeType(NodeType::Calculation);
	title = "Abs";
	typeName = "abs";

	addInputSocket(new Vector4SocketModel("A"));
	addOutputSocket(new Vector4SocketModel("Result"));
}

void AbsNode::process(ModelContext* context)
{
	auto ctx = (ShaderContext*)context;
	auto valA = this->getValueFromInputSocket(0);
	auto res = this->getOutputSocketVarName(0);

	auto code = res + " = abs(" + valA + ");";
	ctx->addCodeChunk(this, code);
}

/*    SIGN    */
SignNode::SignNode()
{
	setNodeType(NodeType::Calculation);
	title = "Sign";
	typeName = "sign";

	addInputSocket(new Vector4SocketModel("A"));
	addOutputSocket(new Vector4SocketModel("Result"));
}

void SignNode::process(ModelContext* context)
{
	auto ctx = (ShaderContext*)context;
	auto valA = this->getValueFromInputSocket(0);
	auto res = this->getOutputSocketVarName(0);

	auto code = res + " = abs(" + valA + ");";
	ctx->addCodeChunk(this, code);
}

/*    CEIL    */
CeilNode::CeilNode()
{
	setNodeType(NodeType::Calculation);
	title = "Ceil";
	typeName = "ceil";

	addInputSocket(new Vector4SocketModel("A"));
	addOutputSocket(new Vector4SocketModel("Result"));
}

void CeilNode::process(ModelContext* context)
{
	auto ctx = (ShaderContext*)context;
	auto valA = this->getValueFromInputSocket(0);
	auto res = this->getOutputSocketVarName(0);

	auto code = res + " = ceil(" + valA + ");";
	ctx->addCodeChunk(this, code);
}

/*    FLOOR    */
FloorNode::FloorNode()
{
	setNodeType(NodeType::Calculation);
	title = "Floor";
	typeName = "floor";

	addInputSocket(new Vector4SocketModel("A"));
	addOutputSocket(new Vector4SocketModel("Result"));
}

void FloorNode::process(ModelContext* context)
{
	auto ctx = (ShaderContext*)context;
	auto valA = this->getValueFromInputSocket(0);
	auto res = this->getOutputSocketVarName(0);

	auto code = res + " = floor(" + valA + ");";
	ctx->addCodeChunk(this, code);
}

/*    ROUND    */
RoundNode::RoundNode()
{
	setNodeType(NodeType::Calculation);
	title = "Round";
	typeName = "round";

	addInputSocket(new Vector4SocketModel("A"));
	addOutputSocket(new Vector4SocketModel("Result"));
}

// https://forum.unity.com/threads/round-not-supported-in-shaders.144316/
void RoundNode::process(ModelContext* context)
{
	auto ctx = (ShaderContext*)context;
	auto valA = this->getValueFromInputSocket(0);
	auto res = this->getOutputSocketVarName(0);

	auto code = res + " = round(" + valA + ");";
	ctx->addCodeChunk(this, code);
}

/*    TRUNCATE    */
TruncNode::TruncNode()
{
	setNodeType(NodeType::Calculation);
	title = "Truncate";
	typeName = "truncate";

	addInputSocket(new Vector4SocketModel("A"));
	addOutputSocket(new Vector4SocketModel("Result"));
}

// https://stackoverflow.com/questions/14/difference-between-math-floor-and-math-truncate
void TruncNode::process(ModelContext* context)
{
	auto ctx = (ShaderContext*)context;
	auto valA = this->getValueFromInputSocket(0);
	auto res = this->getOutputSocketVarName(0);

	auto code = res + " = trunc(" + valA + ");";
	ctx->addCodeChunk(this, code);
}

/*    STEP    */
StepNode::StepNode()
{
	setNodeType(NodeType::Calculation);
	title = "Step";
	typeName = "step";

	addInputSocket(new Vector4SocketModel("Edge"));
	addInputSocket(new Vector4SocketModel("Value"));
	addOutputSocket(new Vector4SocketModel("Result"));
}

void StepNode::process(ModelContext* context)
{
	auto ctx = (ShaderContext*)context;
	auto edge = this->getValueFromInputSocket(0);
	auto val = this->getValueFromInputSocket(1);
	auto res = this->getOutputSocketVarName(0);

	auto code = res + " = step(" + edge + " , " + val + ");";
	ctx->addCodeChunk(this, code);
}

/*    SMOOTHSTEP    */
SmoothStepNode::SmoothStepNode()
{
	setNodeType(NodeType::Calculation);
	title = "SmoothStep";
	typeName = "smoothstep";

	addInputSocket(new Vector4SocketModel("Edge1"));
	addInputSocket(new Vector4SocketModel("Edge2"));
	addInputSocket(new Vector4SocketModel("Value"));
	addOutputSocket(new Vector4SocketModel("Result"));
}

void SmoothStepNode::process(ModelContext* context)
{
	auto ctx = (ShaderContext*)context;
	auto edge1 = this->getValueFromInputSocket(0);
	auto edge2 = this->getValueFromInputSocket(1);
	auto val = this->getValueFromInputSocket(2);
	auto res = this->getOutputSocketVarName(0);

	auto code = res + " = smoothstep(" + edge1 + " , " + edge2 + " , " + val + ");";
	ctx->addCodeChunk(this, code);
}

/*    FRACTION    */
FracNode::FracNode()
{
	setNodeType(NodeType::Calculation);
	title = "Fraction";
	typeName = "fraction";

	addInputSocket(new Vector4SocketModel("A"));
	addOutputSocket(new Vector4SocketModel("Result"));
}

void FracNode::process(ModelContext* context)
{
	auto ctx = (ShaderContext*)context;
	auto valA = this->getValueFromInputSocket(0);
	auto res = this->getOutputSocketVarName(0);

	auto code = res + " = frac(" + valA + ");";
	ctx->addCodeChunk(this, code);
}

/*    SMOOTHSTEP    */
ClampNode::ClampNode()
{
	setNodeType(NodeType::Calculation);
	title = "Clamp";
	typeName = "clamp";

	addInputSocket(new Vector4SocketModel("Min"));
	addInputSocket(new Vector4SocketModel("Max"));
	addInputSocket(new Vector4SocketModel("Value"));
	addOutputSocket(new Vector4SocketModel("Result"));
}

void ClampNode::process(ModelContext* context)
{
	auto ctx = (ShaderContext*)context;
	auto minVal = this->getValueFromInputSocket(0);
	auto maxVal = this->getValueFromInputSocket(1);
	auto val = this->getValueFromInputSocket(2);
	auto res = this->getOutputSocketVarName(0);

	auto code = res + " = clamp(" + minVal + " , " + maxVal + " , " + val + ");";
	ctx->addCodeChunk(this, code);
}

/*    LERP    */
LerpNode::LerpNode()
{
	setNodeType(NodeType::Calculation);
	title = "Lerp";
	typeName = "lerp";

	addInputSocket(new Vector4SocketModel("A"));
	addInputSocket(new Vector4SocketModel("B"));
	addInputSocket(new Vector4SocketModel("T"));
	addOutputSocket(new Vector4SocketModel("Result"));
}

void LerpNode::process(ModelContext* context)
{
	auto ctx = (ShaderContext*)context;
	auto valA = this->getValueFromInputSocket(0);
	auto valB = this->getValueFromInputSocket(1);
	auto t = this->getValueFromInputSocket(2);
	auto res = this->getOutputSocketVarName(0);

	auto code = res + " = mix(" + valA + " , " + valB + " , " + t + ");";
	ctx->addCodeChunk(this, code);
}

/*    ONEMINUS    */
OneMinusNode::OneMinusNode()
{
	setNodeType(NodeType::Calculation);
	title = "One Minus";
	typeName = "oneminus";

	addInputSocket(new Vector4SocketModel("A"));
	addOutputSocket(new Vector4SocketModel("Result"));
}

void OneMinusNode::process(ModelContext* context)
{
	auto ctx = (ShaderContext*)context;
	auto valA = this->getValueFromInputSocket(0);
	auto res = this->getOutputSocketVarName(0);

	auto code = res + " = vec4(1.0) - " + valA + ";";
	ctx->addCodeChunk(this, code);
}

/*    NEGATE    */
NegateNode::NegateNode()
{
	setNodeType(NodeType::Calculation);
	title = "Negate";
	typeName = "negate";

	addInputSocket(new Vector4SocketModel("A"));
	addOutputSocket(new Vector4SocketModel("Result"));
}

void NegateNode::process(ModelContext* context)
{
	auto ctx = (ShaderContext*)context;
	auto valA = this->getValueFromInputSocket(0);
	auto res = this->getOutputSocketVarName(0);

	auto code = res + " = -" + valA + ";";
	ctx->addCodeChunk(this, code);
}