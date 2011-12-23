//
//  meta/modification/implementation/subsequence.h
//
//  Дмитрий Изволов.
//  4 декабря 2011 года.
//

#ifndef META_MODIFICATION_IMPLEMENTATION_SUBSEQUENCE_H
#define META_MODIFICATION_IMPLEMENTATION_SUBSEQUENCE_H

#include <meta/types/type_list.h>
#include <meta/modification/implementation/head.h>
#include <meta/modification/implementation/tail.h>

namespace meta
{
    namespace impl
    {        
        template <typename TypeList, int Index, int Size>
        struct subsequence;
        
        template <typename ... Types, int Index, int Size>
        struct subsequence <type_list<Types ...>, Index, Size>
        {            
            typedef typename head
            <
                typename tail
                <
                    type_list<Types ...>,
                    sizeof...(Types) - Index
                >
                ::type,
                Size
            >
            ::type type;
        };
    } // namespace impl
} // namespace meta

#endif // META_MODIFICATION_IMPLEMENTATION_SUBSEQUENCE_H
