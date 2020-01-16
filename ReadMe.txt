

======= Controles =======

WASD -> moverte
Mover el ratón -> desplazar puntero
Click Derecho -> Disparar


======= Importante =======

Las carpetas que están de color verde son los assets que he hecho yo y el código fuente del proyecto.


Me he encontrado con un bug con el ActorComponent de Unreal que reinicia las variables de este, haciendo que algunas cosas no funcionen cuando vuelves
a compilar el proyecto usando visual. Si cierras el editor y lo vuelves a abrir funcionan correctamente.

Dejo los links que hablan sobre el tema:

- https://www.reddit.com/r/unrealengine/comments/a56qox/bug_actorcomponent_variables_keep_resetting_and/
- https://issues.unrealengine.com/issue/UE-52220

Comento ésto por si tocáis algo del código o algo


======= Comentarios =======

La IA funciona como una mente colmena, cuando uno ve al jugador le persigue hasta matarle o morir y todos saben dónde se encuentra.
He decido implementarlo de esta manera por el hecho de como estaba enfocado el juego, siendo por oleadas de enemigos que van a por ti,
hacer que el enemigo tenga una patrulla básica y pierda de vista al jugador no resulta complicado.

El sistema de daño usa las funciones que ya tiene Unreal implementadas de: recibir daño y ocasionarlo

Los efectos de particulas y distintos assets se asignan en el Blueprint correspondiente para que sea más rápido.

No he podido hacer las Tasks y Services de la IA en C++ debido a que me daba un error al crear la clase y no me la asignaba al proyecto.
