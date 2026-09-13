# ==========================================
# Etapa 1: Compilación (Build Stage)
# ==========================================
FROM alpine:3.19 AS builder

# Instalar dependencias del sistema y herramientas de compilación
RUN apk add --no-cache \
    cmake \
    make \
    g++ \
    git

WORKDIR /app

# Copiar el código fuente completo del proyecto
COPY . .

# Configurar y compilar el proyecto en modo Release
RUN cmake -B build -DCMAKE_BUILD_TYPE=Release \
    && cmake --build build --config Release -j$(nproc)

# ==========================================
# Etapa 2: Imagen Final de Ejecución (Runtime Stage)
# ==========================================
FROM alpine:3.19 AS runtime

WORKDIR /app

# Copiar únicamente el binario compilado desde la etapa anterior
COPY --from=builder /app/build/bin/PsRecall /app/PsRecall

# Definir el comando por defecto al ejecutar el contenedor
ENTRYPOINT ["/app/PsRecall"]
