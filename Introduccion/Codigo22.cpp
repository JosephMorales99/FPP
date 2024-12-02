    // Atributos o propiedades
    int cuenta;
    //funciones de la estructura
public:
    static void altaAlumno()
    {
        Alumno alumno;
        cout << "Dame tu nombre: ";
        cin >> alumno.nombre;
        cout << "Dame tu cuenta: ";
        cin >> alumno.cuenta;
    }
    static void imprimeDatos(Alumno alumno)
    {
        cout << " nombre: " << alumno.nombre << endl;
        cout << " cuenta: " << alumno.cuenta << endl;
        cout << endl;
   }
};

int main()
{
    Alumno::altaAlumno();

}
