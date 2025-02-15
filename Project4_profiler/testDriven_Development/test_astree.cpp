

<function>

    <type><name>int</name></type>

    <name>search</name>

    <parameter_list>
    (
        <param><decl><type><name>int</name></type> <name><name>tbl</name><index>[]</index></name></decl></param>,
        <param><decl><type><name>int</name></type> <name>n</name></decl></param>,
        <param><decl><type><name>int</name></type> <name>key</name></decl></param>
    )
    </parameter_list>

    <block>
    {
    <block_content>
        <decl_stmt><decl><type><name>int</name></type> <name>result</name> =<init> <expr>-1</expr></init></decl>;</decl_stmt>
        <for>
            for (
                <init><decl><type><name>int</name></type> <name>i</name> =<init> <expr>0</expr></init></decl>;
                  </init> <condition><expr><name>i</name> &lt;
                  <name>n</name></expr>;</condition> <incr><expr>++<name>i</name></expr></incr>)
                  <block>{<block_content>
                      <if>if <condition>(<expr><name>key</name> == <name><name>tbl</name><index>[<expr><name>i</name></expr>]</index></name></expr>)</condition><then>

                          <block>{<block_content>
                              <expr_stmt><expr><name>result</name> = <name>i</name></expr>;</expr_stmt>
                          </block_content>}</block></then></if>
                          
        </block_content>}</block></for>

        <return>return <expr><name>result</name></expr>;</return>
        
    </block_content>
    }
    </block>

</function>

