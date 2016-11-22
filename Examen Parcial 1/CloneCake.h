template <class Base, class Copy>
class CloneCake : public Cake {
public:
	virtual Base* clone() {
		return new SubClass(static_cast<Copy&>(*this));
	}
};