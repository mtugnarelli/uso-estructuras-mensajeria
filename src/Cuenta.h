#ifndef CUENTA_H_
#define CUENTA_H_

#include <string>
#include "Lista.h"

class Cuenta {

    private:

        std::string nombre;

        Lista<Cuenta*>* remitentesBloqueados;

    public:

        /* post: Cuenta con el nombre indicado.
         */
        Cuenta(std::string nombre);

        /* post: identificador de la cuenta.
         */
        std::string obtenerNombre();

        /* post: devuelve aquellas Cuentas de las
         *       que no se desean recibir Mensajes.
         */
        Lista<Cuenta*>* obtenerRemitentesBloqueados();

        /*
         * post: devuelve si la Cuenta tiene a otraCuenta
         *       como uno de sus remitentes bloqueados.
         */
        bool tieneBloqueadoA(Cuenta* otraCuenta);

        /* post: libera los recursos tomados.
         */
        ~Cuenta();
};

#endif /* CUENTA_H_ */



