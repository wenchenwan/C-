#include<iostream>

using namespace std;
//抽象不同的零件类
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
			

		cout << "内存已经释放" << endl;
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
		cout << " intel 的CPU工作起来了" << endl;
	}
};

class IntelGPU :public GPU {
public:
	void display() {
		cout << "intel 的GPU开始显示" << endl;
	}
};

class IntelMemory :public Memory {
public:
	void storage() {
		cout << " intel 的内存条开始工作 " << endl;
	}
};


class LenovoCPU :public CPU {
public:
	void caculate() {
		cout << " Lenovo 的CPU工作起来了" << endl;
	}
};

class LenovoGPU :public GPU {
public:
	void display() {
		cout << "Lenovo 的GPU开始显示" << endl;
	}
};

class LenovoMemory :public Memory {
public:
	void storage() {
		cout << " Lenovo 的内存条开始工作 " << endl;
	}
};

void test01() {
	//第一台电脑
	CPU* intelCPU = new IntelCPU;
	GPU* intelGPU = new IntelGPU;
	Memory* intelmemory = new IntelMemory;

	Computer* computer1 = new Computer(intelCPU, intelGPU, intelmemory);
	computer1->Work();
	delete computer1;//走computer的析构函数

	cout << "---------------------" << endl;
	//第二台电脑组装
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoGPU, new LenovoMemory);
	computer2->Work();
	delete computer2;
	cout << "---------------------" << endl;


	//第三台电脑组装
	Computer* computer3 = new Computer(new IntelCPU, new LenovoGPU, new IntelMemory);
	computer3->Work();
	delete computer3;
}
int main() {

	test01();
	return 0;
}