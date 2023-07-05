#include <iostream>
using namespace std;
class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}
	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { return 0; }
	virtual void input() { return 0; }
	void setP(float nilai) {
		this->presensi = nilai;
	}
	float getPresensi() {
		return presensi;
	}

	void setA(float nilai) {
		this->activity;
	}
	float getA() {
		return activity;
	}
	void setE(float nilai) {
		this->exercise;
	}
	float getE() {
		return exercise;
	}
	void setTugasakhir(float nilai) {
		this->tugasAkhir;
	}
	float getTugasakhir() {
		return tugasAkhir;
	}


};
class Pemrograman : public MataKuliah {
public:
	void cekkelulusan() {
		cout << "Selamat, Anda lulus mata kuliah Pemograman dengan nilai akhir";
	}
	void input() {
	}


	int main() {

		MataKuliah nilai;

		nilai.setP(0);
		nilai.setA(1);
		nilai.setE(2);
		nilai.setTugasakhir(3);

		cout << nilai.setP(0) << endl;
		cout << nilai.setA(1) << endl;
		cout << nilai.getE(2) << endl;
		cout << nilai.setTugasakhir(3) << endl;

		return 0;

	}