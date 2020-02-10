
<#macro print_body body indent="">
<#if body.record??>
${indent}Body: Record
<#elseIf body.sequence??>
${indent}Body: Sequence
</#if>
</#macro>

<#macro print_message message indent="">
${indent}Message: ${message.name}
${indent}<@print_body message.body/>
</#macro>


<#list service_set.serviceDef as service>
  Service: ${service.name}
  Version: ${service.version}
  <#list service.messageSet.inputSet.messageDefOrDeclaredMessageDef as message>
    <@print_message message "    "/>
    <#-- ${message.name} ${message.description.content} -->
  </#list>
  
</#list>

