#pragma once
//node.h/cpp — эти файлы должны содержать объявления и определения класса Node, 
//а также всех его потомков (см. выше), которые представляют собой узлы абстрактного синтаксического дерева,
//формируемого функцией ParseCondition;
enum class Comparison {
	Less,
	LessOrEqual,
	Greater,
	GreaterOrEqual,
	Equal,
	NotEqual
};
enum class LogicalOperation {
	Or,
	And
};
class Node {
public:
	void Evaluate();

};

class EmptyNode : public Node {
public:

};

class DateComparisonNode : public Node {
public:

};

class EventComparisonNode : public Node {
public:

};

class LogicalOperationNode : public Node {
public:

};