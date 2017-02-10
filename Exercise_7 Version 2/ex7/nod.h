class nod {
	om o;
	nod *urmator;
public:
	nod(om);
	~nod();
	void ShowList();
	nod* nextnod();
	void setnod(nod* nextN);
};
