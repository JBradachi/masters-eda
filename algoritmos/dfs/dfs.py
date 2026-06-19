def dfs(grafo, no_atual, visitados:set, p:int):

    # Marca o nó atual como visitado
    visitados.add(no_atual)
    print(no_atual, p) # Aqui você processa o nó (ex: imprime)

    # Explora os vizinhos recursivamente
    for vizinho in grafo[no_atual]:
        if vizinho not in visitados:
            p+=1
            dfs(grafo, vizinho, visitados, p)
            
    return visitados

# --- Exemplo de Uso ---
grafo_exemplo = {
    'A': ['D', 'B'],
    'B': ['A', 'C', 'D', 'E'],
    'C': ['B', 'E'],
    'D': ['A', 'B', 'E'],
    'E': ['D', 'B', 'C'],
}

visitados = set()
profundidade = 0
print("Ordem de visitação do DFS:")
dfs(grafo_exemplo, 'A', visitados, profundidade)