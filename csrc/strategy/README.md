# Stratrgy 策略模式
策略模式及其子类为组件提供了一系列可重用的算法，从而可以使得类型在运行时方便地根据需要在各个算法之间进行切换。

Strategy模式提供了用于条件判断语句以外的另一种选择，消除条件判断语句就是在解耦合。含有许多条件判断语句的代码通常都需要Strategy模式。

如果Strategy对象没有实例变量，那么各个上下文可以共享同一个Strategy对象，节省对象开销。