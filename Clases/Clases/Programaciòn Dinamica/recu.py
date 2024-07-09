from graphviz import Digraph

def minTime(i, N, tiempo, daysResting, graph, parent=None, decision=None):
    node_label = f"Día {i}\nDescanso: {daysResting}"
    if daysResting >= 3:
        node_label += "\n(Invalido)"
        node_name = f"{i}_{daysResting}_invalid"
        graph.node(node_name, label=node_label, color='red')
        if parent:
            graph.edge(parent, node_name, label=decision)
        return float('inf'), node_name

    if i >= N:
        node_label += "\n(Fin)"
        node_name = f"{i}_{daysResting}_end"
        graph.node(node_name, label=node_label, color='blue')
        if parent:
            graph.edge(parent, node_name, label=decision)
        return 0, node_name

    node_name = f"{i}_{daysResting}"
    graph.node(node_name, label=node_label)
    if parent:
        graph.edge(parent, node_name, label=decision)

    # Trabajo hoy
    cost_work, child_name_work = minTime(i + 1, N, tiempo, 0, graph, node_name, "Trabajo")
    cost_work += tiempo[i]

    # Descanso hoy
    cost_rest, child_name_rest = minTime(i + 1, N, tiempo, daysResting + 1, graph, node_name, "Descanso")

    min_cost = min(cost_work, cost_rest)
    return min_cost, node_name

# Configuración inicial
N = 5
tiempo = [2, 2, 3, 2, 2]

graph = Digraph()
result, root = minTime(0, N, tiempo, 0, graph)
graph.render('decision_tree', format='png', view=True)  # Guarda y muestra el gráfico
