class Pila {
    
    protected class Nodo {
        Nodo siguiente;
        int value;
    };
    protected Nodo pila;

    public void addNodo(int value)
    {
        Nodo newNodo =  new Nodo();
        newNodo.value = value;
        newNodo.siguiente = pila;
        pila = newNodo;
    }

    public void deleteNodo()
    {
        Nodo aux = new Nodo();
        aux = pila;
        pila = aux.siguiente;
    }

    public void printPila()
    {
        Nodo aux;
        for ( aux = pila; aux != null; aux = aux.siguiente)
        {
            System.out.println(aux.value);
        }
    }

    public static void main( String[] args )
    {
        Pila object = new Pila();
        object.addNodo(1);
        object.addNodo(4);
        object.addNodo(7);
        object.addNodo(8);
        object.printPila();
        System.out.println("Elimando");
        object.deleteNodo();
        object.deleteNodo();
        object.deleteNodo();
        object.printPila();
    }
};
