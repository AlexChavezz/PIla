using Microsoft.VisualBasic.FileIO;
using System.Diagnostics;

class Pila
{
    private class Node {
        public int value;
        public Node next;
    };
    private Node pila;
    Pila()
    {
        pila = null;
    }
    public void addNode(int value)
    {
        Console.WriteLine("Agregando...");
        Node newNode = new Node();
        newNode.value = value;
        newNode.next = pila;
        pila = newNode;
        Console.WriteLine($"{value} ha sido agragado de manera exitosa");
    }
    public void printPila()
    {
        Console.WriteLine("Imprimiendo...");
        Node aux;
        for ( aux = pila ; aux!=null; aux= aux.next)
        {
            Console.WriteLine(aux.value);
        }
    }
    public void removeNode()
    {
        Console.WriteLine("Eliminando...");
        Node aux = pila;
        pila = aux.next;
    }
    static void Main()
    {
        Pila obj = new Pila();
        obj.addNode(1);
        obj.addNode(3);
        obj.addNode(5);
        obj.addNode(7);
        obj.addNode(10);
        obj.printPila();
        obj.removeNode();
        obj.removeNode();
        obj.printPila();
    }
    
}