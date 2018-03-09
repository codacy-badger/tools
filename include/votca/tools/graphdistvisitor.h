/*
 *            Copyright 2009-2018 The VOTCA Development Team
 *                       (http://www.votca.org)
 *
 *      Licensed under the Apache License, Version 2.0 (the "License")
 *
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *              http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef __VOTCA_TOOLS_GRAPH_DIST_VISITOR_H
#define __VOTCA_TOOLS_GRAPH_DIST_VISITOR_H

#include <votca/tools/graphvisitor.h>
/**
 * \brief A graph visitor that will caclute the distance of each node
 *
 */
namespace votca {
namespace tools {

class Graph;
class Edge;

class GraphDistVisitor : public GrapVisitor {
  private:

  public:
    // This executable will add the ["Dist"] to the integer map
    void exec(Graph g, Edge ed);
    Edge nextEdge(Graph g);
};

}} 
#endif // __VOTCA_TOOLS_GRAPH_DIST_VISITOR_H
