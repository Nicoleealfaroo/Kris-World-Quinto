def main():
    reservas = 5
    capacidad = [ ]

def hay_cupo(reservas, capacidad):
    if 0 < capacidad <=5:
        Salida: True

def mostrar_resumen(reservas, capacidad):
    print(f"Cupos disponibles: {len(reservas)}")
    for reserva in reservas:
        print(reserva)

    while True:
        nombre = input("Ingrese su nombre: ")
        if hay_cupo(reservas, capacidad):
            reservas.append(nombre)
    
    mostrar_resumen(reservas, capacidad)

if __name__ == "__main__":
    main()
