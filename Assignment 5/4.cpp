//(a)Single
class A{};
class B : public A{};

//(b)Multiple
class A{};
class B{};
class C : public A, public B{};

//(c)Multilevel
class A{};
class B : public A{};
class C : public B{};

//(d)Heirarchical
class A{};
class B : public A{};
class C : public A{};

//(e)Hybrid
class A{};
class B : public A{};
class C : public A{};
class D : public B, public C{};
