# Teletransportador en Unreal Engine

Solo he hecho el ejercicio del teletransportador
Puedes encontrar los archivos .cpp y .h sigiendo la ruta: Tarea1_TSubclassOf\CPlusPLusProject\Source\CPlusPLusProject

## Descripción

Este proyecto implementa un **sistema de teletransportadores** en Unreal Engine que permite a los actores moverse instantáneamente entre ubicaciones en el mundo del juego. Los teletransportadores están diseñados para funcionar en parejas, de modo que cada uno puede llevar al jugador o actor a su destino correspondiente.

## Funcionalidad principal

1. **Detección de colisiones**:  
   Los teletransportadores utilizan un componente `BoxComponent` para detectar cuándo un actor entra en el área de activación.

2. **Restricción de bucles infinitos**:  
   Se emplea un sistema de booleanos (`bIsTeleporting`) para evitar que los teletransportadores se activen mutuamente y creen un bucle infinito.
   
3. **Selección de actor teletransportable**
   En el teletransportador puedes elegir el tipo de actor que puede teletransportarse.

   ![Captura2](https://github.com/user-attachments/assets/eb5f706f-8283-469f-9a79-952d3dac2349)


4. **Enlace entre teletransportadores**:  
   Los teletransportadores pueden enlazarse entre sí mediante la propiedad `DestinationTeleporter`.  
   - Este enlace es bidireccional, lo que significa que el destino también apuntará automáticamente al teletransportador original.

   ![Captura](https://github.com/user-attachments/assets/00508bbe-dbc5-4191-9e01-be71dd5470ef)


5. **Efectos visuales y sonoros**:  
   - Un sistema de partículas (`NiagaraComponent`) se activa al iniciar el teletransporte.  
   - Un efecto de sonido (`USoundBase`) acompaña la transición.  
   - Un **fade de cámara** asegura una transición suave entre las ubicaciones.

## Cómo funciona

1. Cuando un actor entra en el área de colisión de un teletransportador, se verifica que cumpla con los siguientes criterios:
   - Pertenecer al tipo de actor permitido (especificado en `TeleportableActorClass`).
   - No estar actualmente en proceso de teletransporte (`bIsTeleporting`).

2. Si se cumplen las condiciones:
   - Se desactiva temporalmente la colisión de ambos teletransportadores.
   - Se teletransporta al actor al destino especificado en `DestinationTeleporter`.
   - Se reproduce un efecto visual (partículas y fade de cámara) y un efecto sonoro.

3. Al finalizar el teletransporte:
   - Las colisiones de ambos teletransportadores se reactivan.
   - El estado interno (`bIsTeleporting`) se reinicia para permitir futuros teletransportes.

## Uso

1. **Enlazar teletransportadores**:  
   Asegúrate de asignar el teletransportador de destino a la propiedad `DestinationTeleporter` en el editor. Usa la función `LinkTeleporters` si deseas que ambos teletransportadores se enlacen automáticamente.

2. **Configuración de actores permitidos**:  
   Define la clase de actores que pueden usar el teletransportador a través de `TeleportableActorClass`.

3. **Personalización de efectos**:  
   Puedes cambiar el sistema de partículas y el sonido del teletransporte asignando un `NiagaraComponent` y un `USoundBase` en el editor.



   https://github.com/user-attachments/assets/cf8dca70-3023-4a62-a228-34a2fd699363




   
