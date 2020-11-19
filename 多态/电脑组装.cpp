#include<iostream>

using namespace std;
//����ͬ�������
class CPU {
public:
	virtual void caculate() = 0;
};

class GPU {
public:
	virtual void display() = 0;
};

class Memory {
public:
	virtual void storage() = 0;
};

class Computer {
public:
	Computer(CPU *cpu, GPU *gpu, Memory *memory) {

		m_cpu = cpu;
		m_gpu = gpu;
		m_memory = memory;

	}
	~Computer() {
		if (m_cpu != NULL) {
			delete m_cpu;
			m_cpu = NULL;
		}	
		if (m_gpu != NULL) {
			delete m_gpu;
			m_gpu = NULL;
		}
			
		if (m_memory != NULL) {
			delete m_memory;
			m_memory = NULL;
		}
			

		cout << "�ڴ��Ѿ��ͷ�" << endl;
	}
	void Work() {

		m_cpu->caculate();
		m_gpu->display();
		m_memory->storage();
	}

private:
	CPU* m_cpu;
	GPU* m_gpu;
	Memory* m_memory;

};

class IntelCPU :public CPU {
public:
	void caculate() {
		cout << " intel ��CPU����������" << endl;
	}
};

class IntelGPU :public GPU {
public:
	void display() {
		cout << "intel ��GPU��ʼ��ʾ" << endl;
	}
};

class IntelMemory :public Memory {
public:
	void storage() {
		cout << " intel ���ڴ�����ʼ���� " << endl;
	}
};


class LenovoCPU :public CPU {
public:
	void caculate() {
		cout << " Lenovo ��CPU����������" << endl;
	}
};

class LenovoGPU :public GPU {
public:
	void display() {
		cout << "Lenovo ��GPU��ʼ��ʾ" << endl;
	}
};

class LenovoMemory :public Memory {
public:
	void storage() {
		cout << " Lenovo ���ڴ�����ʼ���� " << endl;
	}
};

void test01() {
	//��һ̨����
	CPU* intelCPU = new IntelCPU;
	GPU* intelGPU = new IntelGPU;
	Memory* intelmemory = new IntelMemory;

	Computer* computer1 = new Computer(intelCPU, intelGPU, intelmemory);
	computer1->Work();
	delete computer1;//��computer����������

	cout << "---------------------" << endl;
	//�ڶ�̨������װ
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoGPU, new LenovoMemory);
	computer2->Work();
	delete computer2;
	cout << "---------------------" << endl;


	//����̨������װ
	Computer* computer3 = new Computer(new IntelCPU, new LenovoGPU, new IntelMemory);
	computer3->Work();
	delete computer3;
}
int main() {

	test01();
	return 0;
}