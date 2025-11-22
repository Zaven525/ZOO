#pragma once
#include "animals.hpp"


// Mammals
class Lion : public Mammal, public IWalk, public IVoice, public IFeedable
{
private:
    int _roarPower;      // 1..10
public:
    Lion(std::string name, int roarPower) : Mammal(name), _roarPower{roarPower} { _kind = Kind::Lion; }
    void PrintInfo() const;
    virtual void walk() override { 
        std::cout << "Lion walks" << std::endl; 
        _health++; 
        _hunger+=10;
    }
    virtual void voice() const override { std::cout << "Woof Woof" << std::endl; }
    virtual void feed() override { std::cout << "Lion eats hacov dzvadzex" << std::endl; _hunger = 0; }
};

class Tiger : public Mammal, public IWalk, public IVoice, public IFeedable
{
private:
    double _jumpHeight;         // km/h
public:
    Tiger(std::string name, double jumpHeight) : Mammal(name), _jumpHeight{jumpHeight} { _kind = Kind::Tiger; }
    void PrintInfo() const;
    void Jump() const { std::cout << "Tiger jumps with height " << _jumpHeight << " km/h" << std::endl; }
    virtual void walk() override { 
        std::cout << "Tiger walks" << std::endl; 
        _health++; 
        _hunger+=15;
    }
    virtual void voice() const override{ std::cout << "Brats xi es qachalce?" << std::endl; }
    virtual void feed() override { std::cout << "Tiger eats pamidorov dzvadzex" << std::endl; _hunger = 0; }
};


class Elephant : public Mammal, public IWalk, public IVoice, public IFeedable
{
private:
    double _trunkLength;
public:
    Elephant(std::string name, double trunkLength) : Mammal(name), _trunkLength{trunkLength} { _kind = Kind::Elephant; }
    void PrintInfo() const;
    void UseTrunk() const { std::cout << "Elephant uses trunk with length of " << _trunkLength << std::endl; }
    virtual void walk() override { 
        std::cout << "Tiger walks" << std::endl; 
        _health--; 
        _hunger+=25;
    }
    virtual void voice() const override{ std::cout << "Yes Gasparn em chem uzum vor pix tangana 20 tokosov" << std::endl; }
    virtual void feed() override { std::cout << "Elephant eats kanachi" << std::endl; _hunger = 0; }
};


// Bird
class Eagle : public Bird, public IFly, public IWalk, public IVoice, public IFeedable
{
private:
    double _visionRange; // meters
public:
    Eagle(std::string name, double wingSpan, double visionRange) : Bird(name, wingSpan), _visionRange{visionRange} { _kind = Kind::Eagle; }
    void PrintInfo() const;
    void Soar() const { std::cout << "Eagle Soars " << std::endl; }
    virtual void fly() override 
    {
        std::cout << "Eagle is flying" << std::endl;
        _health++;
        _hunger += 5;
    }
    virtual void walk() override { std::cout << "Eagle is walking" << std::endl; }
    virtual void voice() const override { std::cout << "Kamavor Gevor Artsivvvv" << std::endl; }
    virtual void feed() override { std::cout << "Eagle eats hac panir pamidor" << std::endl; _hunger = 0; }
};

class Parrot : public Bird, public IFly, public IWalk, public IVoice, public IFeedable
{
private:
    std::vector<std::string> vocabulary;     // words it can "say"
public:
    Parrot(std::string name, double wingSpan) : Bird(name, wingSpan) { _kind = Kind::Parrot; }
    void PrintInfo() const;
    void teachWord(std::string word) { vocabulary.push_back(word); }
    void Speak() { for (const auto& elem : vocabulary) {std::cout << elem;} }
    virtual void fly() override { std::cout << "Parrot is flying" << std::endl; }
    virtual void walk() override { std::cout << "Parrot is walking" << std::endl; }
    virtual void voice() const override { std::cout << "Tnoreny takanqa" << std::endl; }
    virtual void feed() override { std::cout << "Parrot eats Tiger..." << std::endl; _hunger = 0; }
};




//Reptile
class Snake : public Reptile, public IWalk, public IVoice, public IFeedable
{
private:
    bool _poisiounus;
public:
    Snake(std::string name, bool poisiounus) : Reptile(name), _poisiounus{poisiounus} {}
    void PrintInfo() const;
    void Hiss() const { std::cout << "Hissing" << std::endl; }
    virtual void walk() override { std::cout << "Broooo... Snake can't walk..." << std::endl; }
    virtual void voice() const override { Hiss(); }
    virtual void feed() override { std::cout << "Snake eats saxlam egg" << std::endl; _hunger = 0; }
    
};

class Crocodile : public Reptile, public IWalk, public ISwim, public IVoice, public IFeedable
{
private:
    int _biteForce;
public:
    Crocodile(std::string name, int biteForce) : Reptile(name), _biteForce{biteForce} {}
    void PrintInfo() const;
    void Snap() const { std::cout << "Snapping" << std::endl; }
    virtual void walk() override { std::cout << "Crocodile is walking" << std::endl; }
    virtual void swim() override { std::cout << "Crocodile is kayfavating in the sea"; _hunger++; }
    virtual void voice() const override { std::cout << "Gena ti prasil mne palatence" << std::endl; }
    virtual void feed() override { std::cout << "Crocodile eats xashats dzu" << std::endl; _hunger = 0; }
};






